// GoogleSignIn.mm — rewritten for GoogleSignIn v7+ (v9 OK)
// Remove ALL legacy delegate-based code.

#import "GoogleSignIn.h"
#import <GoogleSignIn/GoogleSignIn.h>
#import <UnityAppController.h>
#import "UnityInterface.h"
#import <memory>

extern UIViewController* UnityGetGLViewController(void);

// ====== Status codes kept for binary compatibility with old C# layer ======
static const int kStatusCodeSuccessCached     = -1;
static const int kStatusCodeSuccess           = 0;
static const int kStatusCodeApiNotConnected   = 1;
static const int kStatusCodeCanceled          = 2;
static const int kStatusCodeInterrupted       = 3;
static const int kStatusCodeInvalidAccount    = 4;
static const int kStatusCodeTimeout           = 5;
static const int kStatusCodeDeveloperError    = 6;
static const int kStatusCodeInternalError     = 7;
static const int kStatusCodeNetworkError      = 8;
static const int kStatusCodeError             = 9;

// ====== Result plumbing compatible with the old polling model ======
struct SignInResult {
  int  result_code;
  bool finished;
};
static std::unique_ptr<SignInResult> currentResult_;
static NSRecursiveLock *resultLock = [NSRecursiveLock alloc];

// ====== Helper: mark result and finish (thread-safe) ======
static void FinishResult(int code) {
  [resultLock lock];
  if (!currentResult_) currentResult_.reset(new SignInResult());
  currentResult_->result_code = code;
  currentResult_->finished    = true;
  [resultLock unlock];
}

// ====== Start a new async operation or return "busy" ======
static SignInResult* StartOperationOrBusy() {
  bool busy = false;
  [resultLock lock];
  if (!currentResult_ || currentResult_->finished) {
    currentResult_.reset(new SignInResult());
    currentResult_->result_code = 0;
    currentResult_->finished    = false;
  } else {
    busy = true;
  }
  [resultLock unlock];
  if (busy) {
    // caller must delete this copy
    return new SignInResult{ .result_code = kStatusCodeDeveloperError, .finished = true };
  }
  return nullptr;
}

// ====== ObjC implementation using the new (v7+) completion APIs ======
@implementation GoogleSignInHandler

+ (GoogleSignInHandler *)sharedInstance {
  static GoogleSignInHandler *s;
  static dispatch_once_t once;
  dispatch_once(&once, ^{ s = [GoogleSignInHandler new]; });
  return s;
}

- (void)signInWithClientID:(NSString *)clientId presenting:(UIViewController *)vc {
  // Configure once per run; can be reassigned
  self.signInConfiguration = [[GIDConfiguration alloc] initWithClientID:clientId];
  [GIDSignIn sharedInstance].configuration = self.signInConfiguration;

  // Optionally request additional scopes after sign-in if needed:
  // [[GIDSignIn sharedInstance] addScopes:self.additionalScopes presentingViewController:vc completion:...];

  [[GIDSignIn sharedInstance] signInWithPresentingViewController:vc
                                                      completion:^(GIDSignInResult * _Nullable result, NSError * _Nullable error) {
    if (error) {
      // Map common errors
      NSInteger code = error.code;
      if (code == GIDSignInErrorCodeCanceled) {
        FinishResult(kStatusCodeCanceled);
      } else if (code == GIDSignInErrorCodeKeychain) {
        FinishResult(kStatusCodeInternalError);
      } else {
        FinishResult(kStatusCodeError);
      }
      return;
    }
    // Success
    FinishResult(kStatusCodeSuccess);
  }];
}

- (void)restorePreviousSignIn {
  [[GIDSignIn sharedInstance] restorePreviousSignInWithCompletion:^(GIDGoogleUser * _Nullable user, NSError * _Nullable error) {
    if (error || !user) {
      FinishResult(kStatusCodeError);
      return;
    }
    FinishResult(kStatusCodeSuccessCached);
  }];
}

- (void)signOut {
  [[GIDSignIn sharedInstance] signOut];
}

+ (BOOL)handleURL:(NSURL *)url {
  return [[GIDSignIn sharedInstance] handleURL:url];
}

@end

// ====== C API kept for the legacy Unity C# wrapper ======
extern "C" {

void *GoogleSignIn_Create(void *data) { return NULL; }

void GoogleSignIn_EnableDebugLogging(void *unused, bool flag) {
  // No-op on iOS
}

bool GoogleSignIn_Configure(void *unused, bool useGameSignIn,
                            const char *webClientId, bool requestAuthCode,
                            bool forceTokenRefresh, bool requestEmail,
                            bool requestIdToken, bool hidePopups,
                            const char **additionalScopes, int scopeCount,
                            const char *accountName) {
  // Get client id from GoogleService-Info.plist by default
  NSString *path = [[NSBundle mainBundle] pathForResource:@"GoogleService-Info" ofType:@"plist"];
  NSDictionary *dict = [NSDictionary dictionaryWithContentsOfFile:path];
  NSString *clientId = dict[@"CLIENT_ID"];

  // If a webClientId was passed from C#, prefer that (optional)
  if (webClientId && strlen(webClientId) > 0) {
    clientId = [NSString stringWithUTF8String:webClientId];
  }

  GoogleSignInHandler *h = [GoogleSignInHandler sharedInstance];
  h.signInConfiguration = [[GIDConfiguration alloc] initWithClientID:clientId];
  [GIDSignIn sharedInstance].configuration = h.signInConfiguration;

  if (scopeCount > 0) {
    NSMutableArray *scopes = [[NSMutableArray alloc] initWithCapacity:scopeCount];
    for (int i = 0; i < scopeCount; i++) {
      if (additionalScopes[i]) {
        [scopes addObject:[NSString stringWithUTF8String:additionalScopes[i]]];
      }
    }
    h.additionalScopes = scopes;
  }

  if (accountName && strlen(accountName) > 0) {
    h.loginHint = [NSString stringWithUTF8String:accountName];
  }

  // Return value preserved for compatibility
  return !useGameSignIn;
}

void *GoogleSignIn_SignIn() {
  SignInResult *busy = StartOperationOrBusy();
  if (busy) return busy;

  UIViewController *vc = UnityGetGLViewController();
  NSString *clientId = [GIDSignIn sharedInstance].configuration.clientID;
  [[GoogleSignInHandler sharedInstance] signInWithClientID:clientId presenting:vc];

  return currentResult_.get();
}

void *GoogleSignIn_SignInSilently() {
  SignInResult *busy = StartOperationOrBusy();
  if (busy) return busy;

  [[GoogleSignInHandler sharedInstance] restorePreviousSignIn];
  return currentResult_.get();
}

void GoogleSignIn_Signout() {
  [[GoogleSignInHandler sharedInstance] signOut];
}

void GoogleSignIn_Disconnect() {
  [[GIDSignIn sharedInstance] disconnectWithCompletion:^(NSError * _Nullable error) {
    // Optional: set a result if your C# expects it. We leave it silent.
  }];
}

bool GoogleSignIn_Pending(SignInResult *result) {
  bool ret;
  [resultLock lock];
  ret = result ? !result->finished : false;
  [resultLock unlock];
  return ret;
}

GIDGoogleUser *GoogleSignIn_Result(SignInResult *result) {
  if (result && result->finished) {
    // For v9 the signed-in user is available at GIDSignIn.sharedInstance.currentUser
    GIDGoogleUser *user = [GIDSignIn sharedInstance].currentUser;
    return user;
  }
  return nullptr;
}

int GoogleSignIn_Status(SignInResult *result) {
  if (result) return result->result_code;
  return kStatusCodeDeveloperError;
}

void GoogleSignIn_DisposeFuture(SignInResult *result) {
  if (result == currentResult_.get()) {
    currentResult_.reset(nullptr);
  } else {
    delete result;
  }
}

// ----- Helpers to expose user fields -----
static size_t CopyNSString(NSString *src, char *dest, size_t len) {
  if (dest && src && len) {
    const char *s = [src UTF8String];
    strncpy(dest, s, len);
    return len;
  }
  return src ? src.length + 1 : 0;
}

size_t GoogleSignIn_GetServerAuthCode(GIDGoogleUser *guser, char *buf, size_t len) {
  // In v9, serverAuthCode is obtained during signIn only if requested; often nil.
  NSString *val = guser.serverAuthCode;
  return CopyNSString(val, buf, len);
}

size_t GoogleSignIn_GetDisplayName(GIDGoogleUser *guser, char *buf, size_t len) {
  NSString *val = guser.profile.name;
  return CopyNSString(val, buf, len);
}

size_t GoogleSignIn_GetEmail(GIDGoogleUser *guser, char *buf, size_t len) {
  NSString *val = guser.profile.email;
  return CopyNSString(val, buf, len);
}

size_t GoogleSignIn_GetFamilyName(GIDGoogleUser *guser, char *buf, size_t len) {
  NSString *val = guser.profile.familyName;
  return CopyNSString(val, buf, len);
}

size_t GoogleSignIn_GetGivenName(GIDGoogleUser *guser, char *buf, size_t len) {
  NSString *val = guser.profile.givenName;
  return CopyNSString(val, buf, len);
}

size_t GoogleSignIn_GetIdToken(GIDGoogleUser *guser, char *buf, size_t len) {
  NSString *val = guser.idToken.tokenString;
  return CopyNSString(val, buf, len);
}

size_t GoogleSignIn_GetImageUrl(GIDGoogleUser *guser, char *buf, size_t len) {
  NSURL *url = [guser.profile imageURLWithDimension:128];
  NSString *val = url ? url.absoluteString : nil;
  return CopyNSString(val, buf, len);
}

size_t GoogleSignIn_GetUserId(GIDGoogleUser *guser, char *buf, size_t len) {
  NSString *val = guser.userID;
  return CopyNSString(val, buf, len);
}

} // extern "C"

// ====== URL callback so result returns to app ======
@interface UnityAppController (GID7_URL) @end
@implementation UnityAppController (GID7_URL)
- (BOOL)application:(UIApplication*)app openURL:(NSURL*)url options:(NSDictionary*)opts {
  if ([GoogleSignInHandler handleURL:url]) return YES;
  return [super application:app openURL:url options:opts];
}
@end

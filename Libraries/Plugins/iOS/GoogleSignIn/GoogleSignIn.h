// GoogleSignIn.h  — rewritten for GoogleSignIn v7+
// Works with pod 'GoogleSignIn' 7/8/9

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <GoogleSignIn/GoogleSignIn.h>

@interface GoogleSignInHandler : NSObject

+ (GoogleSignInHandler *)sharedInstance;

@property(nonatomic, strong) GIDConfiguration *signInConfiguration;
@property(nonatomic, copy)   NSString *loginHint;
@property(nonatomic, strong) NSMutableArray *additionalScopes;

- (void)signInWithClientID:(NSString *)clientId
               presenting:(UIViewController *)vc;

- (void)restorePreviousSignIn;
- (void)signOut;
+ (BOOL)handleURL:(NSURL *)url;

@end

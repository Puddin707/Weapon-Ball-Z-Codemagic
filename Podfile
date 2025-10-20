source 'https://cdn.cocoapods.org/'

platform :ios, '15.0'
use_frameworks! :linkage => :static
inhibit_all_warnings!

target 'UnityFramework' do
  # Firebase 12 không cần 'Firebase/Core' (đã deprecated).
  pod 'Firebase/Auth', '12.2.0'
  pod 'Firebase/Functions', '12.2.0'
  pod 'FirebaseFirestore', '12.2.0'

  # GoogleSignIn: bạn đang dùng 6.x (Obj-C). OK, nhưng có thể cân nhắc 7.x nếu code đã cập nhật.
  pod 'GoogleSignIn', '~> 6.0.2'

  pod 'UnityAds', '~> 4.12.0'
end

target 'Unity-iPhone' do
end

post_install do |installer|
  installer.pods_project.targets.each do |t|
    t.build_configurations.each do |c|
      c.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '15.0'
      c.build_settings['ENABLE_BITCODE'] = 'NO'
    end
  end
end

source 'https://cdn.cocoapods.org/'

platform :ios, '15.0'
use_frameworks! :linkage => :static
inhibit_all_warnings!

target 'UnityFramework' do
  # Firebase 12: KHÔNG dùng 'Firebase/Core'
  pod 'Firebase/Auth',       '12.2.0'
  pod 'Firebase/Functions',  '12.2.0'
  pod 'FirebaseFirestore',   '12.2.0'

  # Quan trọng: lên 7.x để tương thích GTMSessionFetcher 3.x
  pod 'GoogleSignIn',        '~> 7.0'

  pod 'UnityAds',            '~> 4.12.0'
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

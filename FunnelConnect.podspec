Pod::Spec.new do |spec|
    spec.name                     = 'FunnelConnect'
    spec.version                  = ENV['LIB_VERSION'] || '0.1.14' #fallback to major version
    spec.summary                  = 'FunnelConnect for iOS'
    spec.homepage                 = 'https://github.com/Teavaro/FunnelConnect-iOS-SDK'
    spec.source                   = { :git=> 'https://github.com/Teavaro/FunnelConnect-iOS-SDK.git', :tag => spec.version }
    spec.pod_target_xcconfig      = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.user_target_xcconfig     = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.authors                  = { 'FunnelConnect' => 'ahmad.mahmoud@teavaro.org' }
    spec.license                  = 'Commercial'
    spec.vendored_frameworks      = 'FunnelConnect.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target    = '12'
end
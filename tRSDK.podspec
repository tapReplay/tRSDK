Pod::Spec.new do |s|

s.name         = "tRSDK"
s.version      = "1.0"
s.summary      = "tapReplay is a library that adds a a digital shopping experience to your tvOS Channel App."


s.description  = "You’ve created great videos and your users love you for that. Now let’s take the experience of your videos to a higher level. The focus of tapReplay is to extend the experience of your video by giving users easy access to tangible products and related activities that they can enjoy offline. In return, their offline enjoyment will remind them how exceptional your videos are and keep them coming back to where it all started. We call these XPeriences. We have over 25 million products (of 160 + thousand brands) waiting for an XPerience. So let’s get started!.Sign-up your channel at http://tv.tapReplay.com/ to request a client id."

s.homepage     = "http://www.tapreplay.com"
s.screenshots  = "http://www.tapreplay.com/sdk/"

s.license      = "MIT"

s.author = {
"Savalas Colbert" => "savalas@tapReplay.com"
}

s.platform =  :tvos , "9.0"

s.source       = { :git => "https://github.com/tapReplay/tRSDK.git", :tag => "1.0" }
s.vendored_frameworks = "tapReplay.framework"
s.source_files  = "tRSDK/*", "tapReplay/tapReplay.framework/Headers/*.h"

s.resource  = "icon.png"
s.resources = "tapReplay/*.png"

end

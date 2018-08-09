Truepic SDK iOS Framework
=
An iOS Framework that verifies photos and videos with Truepic.

## [API Documentation](Truepic_iOS_SDK.pdf)

## Changes for build: 88
1. Now update all drawer text to match Vision design when "hideTruePicBranding" setting on.
2. Close box now Next button and flipped with flash buttton when "hideTruePicBranding" setting on
2. saveToCameraRoll now disabled at app configuration when "hideTruePicBranding" setting on., and overridden once server config completes.

###  API changes (from build 87)
1.  New config setting for removing Truepic branding (Only Titles done so far)..
To activate add "hideTruepicBranding" to configuration array when opening camera such as 
```
TruePicConfig.truePicViewController(cameraViewOptions: [.hideTruepicBranding])
```


## NOTE: Video uploads don't work in this release, but shouldn't matter cause video is disabled by server config for vision apps. Don't use for consumer app!

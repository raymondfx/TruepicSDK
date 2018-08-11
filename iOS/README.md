Truepic SDK iOS Framework
=
An iOS Framework that verifies photos and videos with Truepic.

## [API Documentation](Truepic_iOS_SDK.pdf)

## Changes for build: 87.1
1. Now refresh token if uniqueID is changed.

###  API changes (from build 87)
1.  New config setting for removing Truepic branding (Only Titles done so far)..
To activate add "hideTruepicBranding" to configuration array when opening camera such as 
```
TruePicConfig.truePicViewController(cameraViewOptions: [.hideTruepicBranding])
```


## NOTE: Video uploads don't work in this release, but shouldn't matter cause video is disabled by server config for vision apps. Don't use for consumer app!

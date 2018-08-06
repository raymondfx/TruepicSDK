Truepic SDK iOS Framework
=
An iOS Framework that verifies photos and videos with Truepic.

## [API Documentation](Truepic_iOS_SDK.pdf)

## Changes for build: 87
1. Now refresh token and restart upload or verification if token expired.
2.  Fixed retry bug in x86 where if token expires uploads are tried repeatedly.

###  API changes
1.  New config setting for removing Truepic branding (Only Titles done so far)..
To activate add "hideTruepicBranding" to configuration array when opening camera such as 
TruePicConfig.truePicViewController(cameraViewOptions: [.hideTruepicBranding])
2.  Now preflight that config authorization values were set before opening camera view.


## NOTE: Video uploads don't work in this release, but shouldn't matter cause video is disabled by server config for vision apps. Don't use for consumer app!

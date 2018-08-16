Truepic SDK iOS Framework
=
An iOS Framework that verifies photos and videos with Truepic.

## [API Documentation](Truepic_iOS_SDK.pdf)

## Changes for build: 91
1. Fixed location permissions bug that wasn't giving correct error text in drawer.
3. Fixed thumbnail not showing when camera view re-opened bug
4. Updated crashalytics in TestPic.
-5. More logging inför for test.io bugs.

- SDK Updates
- Make sure Jonathon turns on right options
options.insert(.hideTruepicBranding)
options.insert(.disableMediaSelection)
## Changes for build: 90 - None, aborted build

## Changes for build: 89
1. Fixed stale thumbnails after deletion, and way simplified code.
2. Fix for accurate location never getting recived.
    - Put retries in for configuration calls to fix bug where location is never set if config call fails when camera first opened. 
    - Also cleaned up code so status updates correctly whenever config call completes.
3. Fixed bug that could cause next button to open partly offscreen on iPhone 5 sized devices.

###  API changes 
1. Now request location permissions when first config call is called from app (instead of when camera view opens), so that camera view can initialize faster.
    - To make best use of this, the VIsion/JMI apps should be updated to call config from an initial walkthough page with explanation text telling user why they should authorize locations. 
2.  Added setUserName() back to Config API. This passes the userName to the server to watermark photos with.

## Changes for build: 87.1
1. Now refresh token if uniqueID is changed.

###  API changes (from build 87)
1.  New config setting for removing Truepic branding (Only Titles done so far)..
To activate add "hideTruepicBranding" to configuration array when opening camera such as 
```
TruePicConfig.truePicViewController(cameraViewOptions: [.hideTruepicBranding])
```


## NOTE: Video uploads don't work in this release, but shouldn't matter cause video is disabled by server config for vision apps. Don't use for consumer app!

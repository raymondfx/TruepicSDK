Truepic SDK iOS Framework
=
An iOS Framework that verifies photos and videos with Truepic.

## [API Documentation](Truepic_iOS_SDK.pdf)

## Build 105
1) Now records metrics to dev or release Mixpanel projects depending upon debug/release version of SDK.
2) Switched to official Sentry library for logging instead of my home brewed version. Log events should now survive crashes and lost network connections, include extra info like app name, and will be much easier to search on.
3) Capture confusion improvements
- Alert drawer now auto-opens for any warning including calibration, and only auto-closes if camera state becomes enabled.
- Capture button now in darker disabled color.
- Flash & front/back camera buttons now disabled when camera disabled.
- Fixed errors in drawer text and tested in both modes (vision and TPv4) on iPhone 5 to make sure all correct and fit.

### SDK API Changes
- Now send TruepicOpenGallery notification after TruepicViewClosed notification for Next button, so Next button works like Thumbnail button.

## Build 100
1) Implemented MixPanel, now logging action to "iOS SDK" project in our MixPanel account. This release logs taps on
- Next button (enabled or disabled)
- Gallery button
- Capture button (enabled or disabled)
- Status area, whether opening/closing and whether camera is enabled or disabled 

## Build 99
1) Now the default (enabled camera) alert drawer icon and status indicator icons are turned into template images, and a brand color applied to them..

SDK API Changes
- Added setBrandColor() call to pass, for QuickenLoans color use follwoing rgb values.
```// set to quickenloans brand color rgb(108,159,46)
TruePicConfig.setBrandColor(UIColor.init(red: 108/255, green: 159/255, blue: 46/255, alpha: 1.0))
```

## Build 97
1. Increased compression quality to 99% (from est. iOS default of 80%) to improve server image verification results. 
We chose 99% after testing 80-100%, it seemed to offer highest quality for increase in file size. On my iPhone X old default was generating upload files of 4-5 megabytes, 99% in tests averaged between 6-7.1 megabyte files with a 4x better quality level for image processing needs.
2. Capture button now disabled when Verification disabled when SDK in "Vision mode"
2. Fixed titles of error alerts, they now use name of app in title, such as "Vision Error", etc.
3. Now including extra information with uploads 
-  The On/off status of tap to focus (TTF).
-  The level of Compression quality image was taken.

### SDK API Changes
- truePicBranding is now runInVisionMode

## Build 96
### Fixes/Changes
1. Video Uploads now work with v3 APIs.
2. Now retry upload attempts with bad results data.
3. Cap maximum upload attempts at 10 for each capture so we don't pound server if upload can never succeed. 
4. Track whether uploads have been copied to camera roll, and copy to camera roll if upload is retried so users will always have access to their photos even if uploads go on for long periods.
5. Fixed uploading Lens settings, wasn't working in apps do to different configuration pattern
6. Now tag capture files with GPS location data, with config option so it's disabled unless app wants it turned on.
7. Numerous other bugs fixed 
* No longer store video uploads in iOS tmp directory, which risked being deleted behind our back before upload complete.
* Filter out simultaneous taps on video capture and other buttons, to prevent camera/media being switched when video starts.
* Fixed flash options so they update to proper available settings when switching media and front/back cameras
* Now display verification erorr in  drawer error when no camera permissions.
* Next button now only activated if Verification Enabled for new capture.
* Next button wasn't updating in blue when activated.
8. Now log errors from all guard statements that return in capture

###  SDK Changes
1. Added ```copiedToCameraRoll``` field in Gallery items.
2. Renamed  ```TruePicViewController.CameraOptions``` to ```TPCameraOptions```
3. Added ```tagFilesWithLocation``` option to camera options, to turn on EXIF location writing for both videos and photos. Default is not to save to EXIF in case privacy considerations doesn't allow it.

## Build 94-95 Not released

## Build 93
### Fixes/Changes
1. Fixed crash in image processing frame capture on devices that don’t support 60 FPS.
2. Added config option for to turn image processing on/off, off now also turns off frame capture so image processing code should not impact SDK performance for apps that aren’t using it.
3. Cleaned up TestPic so test.io testers will hopefully generate fewer issues on how it works, as opposed to how camera works.

### SDK changes
1. Local id of a gallery item, formerly ```TPGalleryItem.uniqueID```  is now  ```TPGalleryItem.galleryID```
2. ```TPGalleryItem.uniqueID``` is now the  uniqueID passed to server for captures, which TPVision uses to identify events.
3. ```CameraViewOptions``` is now ```CameraOptions``` and no longer based on an OptionSet (bitwise storage). Now each option is defined as a ```CameraOption``` enum.

## Build 91
1. Fixed location permissions bug that wasn't giving correct error text in drawer.
3. Fixed thumbnail not showing when camera view re-opened bug
4. Updated crashalytics in TestPic.
-5. More logging inför for test.io bugs.

### SDK Updates
1.Make sure Jonathon turns on right options
```options.insert(.hideTruepicBranding)
options.insert(.disableMediaSelection)
```

## Build 89
1. Fixed stale thumbnails after deletion, and way simplified code.
2. Fix for accurate location never getting recived.
    - Put retries in for configuration calls to fix bug where location is never set if config call fails when camera first opened. 
    - Also cleaned up code so status updates correctly whenever config call completes.
3. Fixed bug that could cause next button to open partly offscreen on iPhone 5 sized devices.

###  API changes 
1. Now request location permissions when first config call is called from app (instead of when camera view opens), so that camera view can initialize faster.
    - To make best use of this, the VIsion/JMI apps should be updated to call config from an initial walkthough page with explanation text telling user why they should authorize locations. 
2.  Added setUserName() back to Config API. This passes the userName to the server to watermark photos with.

## Build 87.1
1. Now refresh token if uniqueID is changed.

###  API changes (from build 87)
1.  New config setting for removing Truepic branding (Only Titles done so far)..
To activate add "hideTruepicBranding" to configuration array when opening camera such as 
```
TruePicConfig.truePicViewController(cameraViewOptions: [.hideTruepicBranding])
```
### NOTE: Video uploads don't work in this release, but shouldn't matter cause video is disabled by server config for vision apps. Don't use for consumer app!
API changes

## Build: 86

API changes
1. v3 API Config working, current server settings should allow
2. Disable video
3. Disable save to camera roll
4.Allow jaibreak..
### NOTE: Video uploads don't work in this release, but shouldn't matter cause video is disabled by server config.

## Build 85
###  API changes
1. Vision v3 APIs updates
2. Updated config call to only require unique ID.

## Build: 84

###Upload changes
1. Automatically restart stuck uploads if they don't finish in 30 minutes.
2. Fixed edge case where if queue is captures that haven't started upload, app restart would not start their uploads.
3. Now managed uploads in our own temp directory, instead of ios so it won't delete them behind our back.
4  Meta-data timeout now 30 seconds, and can wait up to 30 seconds to start.

### Capture changes
1. Fixed bug where photo capture errors weren't cleaned up properly, could crash.

###Crashes
1. Fixed crash if upload file is deleted/missing when uploaded in background.

## Build : 83 - Not distributed

## Build: 82

### Upload changes
1. Now limit concurrent uploads to two at once, which seems optimal for both wifi and cellular.
2. Start all uploads 2 minutes 30 seconds after app goes to background, j 30 seconds before app's execution time expires.
3. Uploads that fail validation because of app crash/quit now copied to camera roll.
4. Incorporated/updated Mosalam’s lens distance code so it won’t overwrite client data. (actually didn't work in this release and wasn't fixed until x96)

### Capture changes
1. Photo capture faster and more natural. Both Photo and video capture now process on background thread, which also allows up to four photos to be taken/processed at a time.
2. Fixed minor memory leak (1.6kb) in jailbreak detection code that runs once at launch, caused by directly using objective C runtime call without deallocating returned buffer.
3. Deferred tiny leak (48 bytes) in location permissions code that runs each time camera was open.

### Crashes
1, Fixed crash when returning to foreground if app was already in foreground.
2. Fixed all crashes from video capture. Now should catch almost all Objective C exceptions instead of letting them crash app. Wrapped video capture and key entry and view methods with ObjectiveC exception handlers that display error alerts and log to sentry.

### Video flash fixes
1. Front video flash icon now hidden since flash is not supported for front video, only front photos.
2. Back video flash options now work after switching from front camera. 

Truepic SDK iOS Framework
=
An iOS Framework that verifies photos and videos with Truepic.

## [API Documentation](Truepic_iOS_SDK.pdf)

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


## NOTE: Video uploads don't work in this release, but shouldn't matter cause video is disabled by server config for vision apps. Don't use for consumer app!

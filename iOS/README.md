Truepic SDK iOS Framework
=
An iOS Framework that verifies photos and videos with Truepic.

## [API Documentation](Truepic_iOS_SDK.pdf)

## Changes for build: 82

###  Upload changes
1. Now limit concurrent uploads to two at once, which seems optimal for both wifi and cellular.
2. Start all uploads 2 minutes 30 seconds after app goes to background, j 30 seconds before app's execution time expires.
3. Uploads that fail validation because of app crash/quit now copied to camera roll.
4. Incorporated/updated Mosalam’s lens distance code so it won’t overwrite client data.

###  Capture changes
1. Photo capture faster and more natural. Both Photo and video capture now process on background thread, which also allows up to four photos to be taken/processed at a time.
2. Fixed minor memory leak (1.6kb) in jailbreak detection code that runs once at launch, caused by directly using objective C runtime call without deallocating returned buffer.
3. Deferred tiny leak (48 bytes) in location permissions code that runs each time camera was open.

### Crashes
1. Fixed crash when returning to foreground if app was already in foreground.
2. Fixed all crashes from video capture.
2. Now should catch almost all Objective C exceptions instead of letting them crash app. Wrapped video capture and key entry and  view methods with ObjectiveC exception handlers that display error alerts and log to sentry.

### Video flash fixes
- Front video flash icon now hidden since flash is not supported for front video, only front photos.
- Back video flash options now work after switching from front camera.



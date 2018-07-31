Truepic SDK iOS Framework
=
An iOS Framework that verifies photos and videos with Truepic.

## [API Documentation](Truepic_iOS_SDK.pdf)

## Changes for build: 84

###  Upload changes
1. Automatically restart stuck uploads if they don't finish in 30 minutes.
2. Fixed edge case where if queue is captures that haven't started upload, app restart would not start their uploads.
3. Now managed uploads in our own temp directory, instead of ios so it won't delete them behind our back.
4. Meta-data timeout now 30 seconds, and can wait up to 30 seconds to start.

###  Capture changes
1. Fixed bug where photo capture errors weren't cleaned up properly, could crash.

### Crashes
1. Fixed crash if upload file is deleted/missing when uploaded in background.




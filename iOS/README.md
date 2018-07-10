Truepic SDK iOS Framework
=
An iOS Framework that verifies photos and videos with Truepic.

## [API Documentation](Truepic_iOS_SDK.pdf)

## Changes for build: 81

### Feature changes
1. Changed how video capture works, needs extra testing before released.
- No longer retries if upload rejected by server as too large.
-  Videos now limited to 30 seconds and 100 megabytes.
-  Videos that are stopped by backgrounding the app or switching views are no saved, and no longer display an error alert.
- Cleaned up video error handling so it will work in localized versions of iOS, minimizing situations where we show error alerts, and made code much easier to maintain and update.
2. Implemented continuous autofocus, should focus photos better.
3. Sentry Logging Updates
- Normalized event message text so errors can be grouped correctly by Sentry.
- Now log stack trace and current thread for each event.
- Log retry errors when they take multiples of four attempts
4. Implemented Crashalytics for TestPic builds.
5. Metadata verification now fails if request doesn’t start within 15 seconds (instead of 5 minutes). 
6. Flash Updates
- Auto-flash setting now works again, flash settings now traversed by tapping flash icon button (didn’t have time to restore menu). 
- No longer crashes if flash activated with front facing camera. Front camera now only displays flash button if device allows front flash.
- All photo capture crashes (objective c run time exceptions) should now be caught, and displayed to user as error alerts (and logged)  
- No longer use beta iOS 10 API to get device flash modes. 
- No longer use deprecated flash settings API that crashed in iOS 12.


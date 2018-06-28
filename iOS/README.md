Truepic SDK iOS Framework
=
An iOS Framework that verifies photos and videos with Truepic.

## [API Documentation](Truepic_iOS_SDK.pdf)

## Changes for build: 80

### API changes
1. setAPIConfig now returns true/false depending upon wether it’s initialized properly, and SDK should not longer crash if not configured correctly, instead it will present error alert informing implementor of an missing resource.
2.  Removed square camera view option.

### Feature changes
1. Sentry Logging no longer log poor location events, or upload retries. Now correctly log SDK and App versions/build numbers to Sentry
2. No longer reference illegal URL for opening privacy settings.
3. Removed page icon below capture button
it duplicated the video/photo toggle button and was easy to hit by accident.
4. Added small amount of space between toggle video/photo and toggle camera buttons on iPhone 5/SE.
was so tight accidentally hit wrong button occasionally. 
5. View rotation now rotates  thumbnail icons and all other controls to match phone orientation.
6. Now hide thumbnail button when shooting video. 
Users shouldn’t be able to switch views while shooting video, otherwise the video will auto stop and they might not anticipate that. Video cancelation error now much less likely to happen and has updated error text.
7. Build automation now works
8. Testpic Updates for Test.io testers. UserID/UserName now always set to name of device.


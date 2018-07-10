// Generated by Apple Swift version 4.1.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import AVFoundation;
@import Foundation;
@import CoreImage;
@import CoreLocation;
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
@import CoreMedia;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="TruePicSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif




SWIFT_CLASS("_TtC10TruePicSDK13TaskOperation")
@interface TaskOperation : NSOperation
@property (nonatomic, readonly, getter=isExecuting) BOOL executing;
@property (nonatomic, readonly, getter=isFinished) BOOL finished;
- (void)main;
- (void)cancel;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10TruePicSDK19AsyncBlockOperation")
@interface AsyncBlockOperation : TaskOperation
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end















@class CLLocationManager;

SWIFT_CLASS("_TtC10TruePicSDK16LocationServices")
@interface LocationServices : NSObject <CLLocationManagerDelegate>
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (void)locationManager:(CLLocationManager * _Nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didFailWithError:(NSError * _Nonnull)error;
@end








@interface NSLayoutAnchor<AnchorType> (SWIFT_EXTENSION(TruePicSDK))
- (void)constrainWithEqualTo:(NSLayoutAnchor<AnchorType> * _Nonnull)anchor constant:(CGFloat)const_;
@end










SWIFT_CLASS("_TtC10TruePicSDK20NotificationDelegate")
@interface NotificationDelegate : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end








SWIFT_CLASS("_TtC10TruePicSDK11TPNetworkOp")
@interface TPNetworkOp : NSOperation
@property (nonatomic, readonly, getter=isAsynchronous) BOOL asynchronous;
@property (nonatomic, readonly, getter=isConcurrent) BOOL concurrent;
@property (nonatomic, readonly, getter=isExecuting) BOOL executing;
@property (nonatomic, readonly, getter=isFinished) BOOL finished;
- (void)start;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10TruePicSDK15TPGalleryItemOp")
@interface TPGalleryItemOp : TPNetworkOp
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10TruePicSDK12TPMetadataOp")
@interface TPMetadataOp : TPGalleryItemOp
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (void)main;
@end


@class AVCapturePhotoOutput;
@class AVCaptureResolvedPhotoSettings;
@class AVCapturePhoto;
@class AVCaptureBracketedStillImageSettings;

SWIFT_CLASS("_TtC10TruePicSDK15TPPhotoDelegate")
@interface TPPhotoDelegate : NSObject <AVCapturePhotoCaptureDelegate>
- (void)captureOutput:(AVCapturePhotoOutput * _Nonnull)captureOutput willCapturePhotoForResolvedSettings:(AVCaptureResolvedPhotoSettings * _Nonnull)resolvedSettings;
- (void)captureOutput:(AVCapturePhotoOutput * _Nonnull)captureOutput didFinishCaptureForResolvedSettings:(AVCaptureResolvedPhotoSettings * _Nonnull)resolvedSettings error:(NSError * _Nullable)error;
- (void)captureOutput:(AVCapturePhotoOutput * _Nonnull)output didFinishProcessingPhoto:(AVCapturePhoto * _Nonnull)photo error:(NSError * _Nullable)error SWIFT_AVAILABILITY(ios,introduced=11.0);
- (void)captureOutput:(AVCapturePhotoOutput * _Nonnull)output didFinishProcessingPhotoSampleBuffer:(CMSampleBufferRef _Nullable)photoSampleBuffer previewPhotoSampleBuffer:(CMSampleBufferRef _Nullable)previewPhotoSampleBuffer resolvedSettings:(AVCaptureResolvedPhotoSettings * _Nonnull)resolvedSettings bracketSettings:(AVCaptureBracketedStillImageSettings * _Nullable)bracketSettings error:(NSError * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC10TruePicSDK14TPSentryLogger")
@interface TPSentryLogger : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10TruePicSDK20TPUploadTaskDelegate")
@interface TPUploadTaskDelegate : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class NSURLSession;
@class NSURLSessionDataTask;

@interface TPUploadTaskDelegate (SWIFT_EXTENSION(TruePicSDK)) <NSURLSessionDataDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
@end


@interface TPUploadTaskDelegate (SWIFT_EXTENSION(TruePicSDK)) <NSURLSessionDelegate>
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession * _Nonnull)session;
@end

@class NSURLSessionTask;

@interface TPUploadTaskDelegate (SWIFT_EXTENSION(TruePicSDK)) <NSURLSessionTaskDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)_ task:(NSURLSessionTask * _Nonnull)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
@end

@class AVCaptureFileOutput;
@class AVCaptureConnection;

SWIFT_CLASS("_TtC10TruePicSDK15TPVideoDelegate")
@interface TPVideoDelegate : NSObject <AVCaptureFileOutputRecordingDelegate>
- (void)captureOutput:(AVCaptureFileOutput * _Nonnull)output didFinishRecordingToOutputFileAtURL:(NSURL * _Nonnull)outputFileURL fromConnections:(NSArray<AVCaptureConnection *> * _Nonnull)connections error:(NSError * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class NSCoder;

SWIFT_CLASS("_TtC10TruePicSDK19TapToFocusAnimation")
@interface TapToFocusAnimation : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


@class UILabel;
@class UIButton;
@class UIImageView;
@class UITextView;
@class NSLayoutConstraint;

SWIFT_CLASS("_TtC10TruePicSDK11TruePicView")
@interface TruePicView : UIView <UIGestureRecognizerDelegate, UITextViewDelegate>
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified statusAlertsDrawer;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified timerView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified timerLabel;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified statusView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified statusTapArea;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified closeViewButton;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified statusIndicator;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified statusText;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified statusArrow;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified flashButton;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified alertView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified alertIcon;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified alertTitle;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified alertBody;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified closeButton;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified alignmentCrosshatch;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified thumbnails;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified photoButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified videoButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified mediaTypeButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified toggleFrontBackCamera;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified noTapToFocusArea;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified statusViewTop;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified thumbnailsLeading;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified mediaTypeTrailing;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified changeCameraTrailing;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITapGestureRecognizer;

@interface TruePicView (SWIFT_EXTENSION(TruePicSDK))
- (IBAction)focusOnTap:(UITapGestureRecognizer * _Nonnull)gestureRecognizer;
@end


@interface TruePicView (SWIFT_EXTENSION(TruePicSDK))
- (IBAction)mediaType:(UIButton * _Nonnull)button;
@end




@interface TruePicView (SWIFT_EXTENSION(TruePicSDK))
- (IBAction)ignoreTaps:(UITapGestureRecognizer * _Nonnull)gestureRecognizer;
@end





@class UIPinchGestureRecognizer;

@interface TruePicView (SWIFT_EXTENSION(TruePicSDK))
- (void)awakeFromNib;
- (IBAction)closeView;
- (IBAction)pinchToZoom:(UIPinchGestureRecognizer * _Nonnull)gestureRecognizer;
- (BOOL)textView:(UITextView * _Nonnull)textView shouldInteractWithURL:(NSURL * _Nonnull)URL inRange:(NSRange)characterRange interaction:(UITextItemInteraction)interaction SWIFT_WARN_UNUSED_RESULT;
@end

@class VideoPreview;
@class NSBundle;

SWIFT_CLASS("_TtC10TruePicSDK21TruePicViewController")
@interface TruePicViewController : UIViewController
@property (nonatomic, weak) IBOutlet VideoPreview * _Null_unspecified videoPreview;
@property (nonatomic, weak) IBOutlet TruePicView * _Null_unspecified truePicView;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end













@class NSNotification;

@interface TruePicViewController (SWIFT_EXTENSION(TruePicSDK))
- (void)viewDidLoad;
- (IBAction)errorAlertMessageWithNotification:(NSNotification * _Nonnull)notification;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@end


SWIFT_CLASS("_TtC10TruePicSDK25TruePicViewControllerView")
@interface TruePicViewControllerView : UIView
@property (nonatomic, weak) IBOutlet VideoPreview * _Null_unspecified videoPreview;
@property (nonatomic, weak) IBOutlet TruePicView * _Null_unspecified truepicView;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified videoPreviewTop;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified videoPreviewBottom;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end
















SWIFT_CLASS("_TtC10TruePicSDK12VideoPreview")
@interface VideoPreview : UIView
- (void)awakeFromNib;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layerClass;)
+ (Class _Nonnull)layerClass SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#import <Foundation/Foundation.h>
#import <QuickLook/QuickLook.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTLog.h>



@interface RNDocViewer : NSObject <RCTBridgeModule, QLPreviewControllerDelegate, QLPreviewControllerDataSource, QLPreviewItem, UIAlertViewDelegate>
@property (strong, nonatomic) NSURL* fileUrl;
@property (strong, nonatomic) NSString* optionalFileName;
@property (readonly) NSURL* previewItemURL;
@property (strong, nonatomic) NSData* downloadResumeData;
@property (strong, nonatomic) UIAlertView* alert;
@property (strong, nonatomic) UIProgressView* downloadProgressView;
@end
  

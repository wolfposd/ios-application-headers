//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDLImageCaptureViewController, JDLReplyViewController, TLMComposeViewController;

@protocol JDLReplyViewControllerTransitioning <NSObject>
- (_Bool)handleCaptureCancelDismiss:(JDLReplyViewController *)arg1;
- (void)configureReplyAfterWillAppear:(JDLReplyViewController *)arg1;
- (void)configureCaptureInitialState:(JDLImageCaptureViewController *)arg1;
- (void)configureReplyInitialState:(JDLReplyViewController *)arg1;
- (void)configureComposeInitialState:(TLMComposeViewController *)arg1;
@end

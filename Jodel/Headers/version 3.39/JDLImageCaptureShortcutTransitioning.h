//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JDLReplyViewControllerTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString;

@interface JDLImageCaptureShortcutTransitioning : NSObject <UIViewControllerTransitioningDelegate, JDLReplyViewControllerTransitioning>
{
    struct CGRect _transitionAnimateFromRect;
}

@property(nonatomic) struct CGRect transitionAnimateFromRect; // @synthesize transitionAnimateFromRect=_transitionAnimateFromRect;
- (_Bool)handleCaptureCancelDismiss:(id)arg1;
- (void)configureCaptureInitialState:(id)arg1;
- (void)configureReplyAfterWillAppear:(id)arg1;
- (void)configureReplyInitialState:(id)arg1;
- (void)configureComposeInitialState:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithAnimationStartRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


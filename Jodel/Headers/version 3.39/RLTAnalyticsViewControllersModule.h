//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RLTAnalyticsPermanentSwizzlingModule.h"

#import "RLTAnalyticsPermanentSwizzlingModuleDelegate.h"
#import "RLTAnalyticsViewControllersModuleProtocol.h"

@class NSMutableSet, NSString, UIViewController;

@interface RLTAnalyticsViewControllersModule : RLTAnalyticsPermanentSwizzlingModule <RLTAnalyticsPermanentSwizzlingModuleDelegate, RLTAnalyticsViewControllersModuleProtocol>
{
    _Bool _wasInBackground;
    id <RLTAnalyticsViewControllersModuleDelegate> _delegate;
    id <RLTAnalyticsViewControllersModuleConfigProtocol> _config;
    UIViewController *_lastWillAppearViewController;
    UIViewController *_lastDidAppearViewController;
    UIViewController *_lastDidDisappearViewController;
    UIViewController *_lastPresentedOnWillDisappearViewController;
    UIViewController *_lastPresentedOnWillAppearViewController;
    NSMutableSet *_didAppearDateByViewController;
    long long _navigationStackMethod;
    UIViewController *_lastViewControllerForTrackingNavigationStackMethod;
}

+ (void)performPermanentSwizzleWithModuleManager:(id)arg1;
@property(nonatomic) _Bool wasInBackground; // @synthesize wasInBackground=_wasInBackground;
@property(nonatomic) __weak UIViewController *lastViewControllerForTrackingNavigationStackMethod; // @synthesize lastViewControllerForTrackingNavigationStackMethod=_lastViewControllerForTrackingNavigationStackMethod;
@property(nonatomic) long long navigationStackMethod; // @synthesize navigationStackMethod=_navigationStackMethod;
@property(retain, nonatomic) NSMutableSet *didAppearDateByViewController; // @synthesize didAppearDateByViewController=_didAppearDateByViewController;
@property(nonatomic) __weak UIViewController *lastPresentedOnWillAppearViewController; // @synthesize lastPresentedOnWillAppearViewController=_lastPresentedOnWillAppearViewController;
@property(nonatomic) __weak UIViewController *lastPresentedOnWillDisappearViewController; // @synthesize lastPresentedOnWillDisappearViewController=_lastPresentedOnWillDisappearViewController;
@property(nonatomic) __weak UIViewController *lastDidDisappearViewController; // @synthesize lastDidDisappearViewController=_lastDidDisappearViewController;
@property(nonatomic) __weak UIViewController *lastDidAppearViewController; // @synthesize lastDidAppearViewController=_lastDidAppearViewController;
@property(nonatomic) __weak UIViewController *lastWillAppearViewController; // @synthesize lastWillAppearViewController=_lastWillAppearViewController;
@property(retain, nonatomic) id <RLTAnalyticsViewControllersModuleConfigProtocol> config; // @synthesize config=_config;
@property(retain, nonatomic) id <RLTAnalyticsViewControllersModuleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getCorrectedPresentedViewControllerFrom:(id)arg1;
- (_Bool)instanceWrapper:(id)arg1 isChildOf:(id)arg2;
- (_Bool)instance:(id)arg1 isAnyDepthChildOf:(id)arg2;
- (id)didAppearDateByViewControllerWrapperByController:(id)arg1;
- (id)vcInfo:(id)arg1 methodName:(id)arg2;
- (void)setDidAppearTime:(id)arg1 forController:(id)arg2;
- (id)didAppearTimeByController:(id)arg1;
- (void)detectNavigationStackMethod:(id)arg1;
- (void)trackNavigationStackChange;
- (_Bool)instanceClassName:(id)arg1 shouldBeSkippedBySetOfClassNames:(id)arg2;
- (_Bool)instance:(id)arg1 shouldBeSkippedBySetOfClasses:(id)arg2;
- (_Bool)shouldSkipController:(id)arg1;
- (void)handleHookViewDidDisappear:(id)arg1;
- (void)handleHookViewWillDisappear:(id)arg1;
- (void)handleHookViewDidAppear:(id)arg1;
- (void)handleHookViewWillAppear:(id)arg1;
- (void)onUIApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)onUIApplicationDidBecomeActiveNotification:(id)arg1;
- (void)subscribe;
- (void)messageReceived:(id)arg1 ofType:(id)arg2;
- (_Bool)stopModule:(id *)arg1;
- (_Bool)startModule:(id *)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


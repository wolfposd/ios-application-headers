//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RLTAnalyticsConfigurationProtocol.h"

@class NSString;

@interface RLTAnalyticsDefaultConfiguration : NSObject <RLTAnalyticsConfigurationProtocol>
{
    id <RLTAnalyticsDelegate> _delegate;
    long long _applicationColdStartType;
}

+ (void)didDetectCrash;
@property(nonatomic) long long applicationColdStartType; // @synthesize applicationColdStartType=_applicationColdStartType;
@property(nonatomic) __weak id <RLTAnalyticsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)navigationMethodNameByMethod:(long long)arg1;
- (void)trackLocationPermissions:(id)arg1;
- (void)trackCameraPermissions:(id)arg1;
- (void)trackNotificationPermissions:(id)arg1;
- (void)trackGalleryPermissions:(id)arg1;
- (void)trackBackgroundRefreshStatus:(id)arg1;
- (void)trackSessionInfo:(id)arg1 status:(id)arg2 appPreviousVersion:(id)arg3;
- (void)trackSessionsWithType:(id)arg1 appPreviousVersion:(id)arg2;
- (id)rltAnalyticsViewControllersModuleSkipControllerClassNamesSet:(id)arg1;
- (_Bool)rltAnalyticsApplicationSessionModuleDidDetectCrash;
- (void)viewControllersModule:(id)arg1 navigationStackChangedFrom:(id)arg2 to:(id)arg3 withDurationOnPreviousPage:(double)arg4 method:(long long)arg5;
- (void)viewControllersModule:(id)arg1 viewControllerDidAppear:(id)arg2;
- (void)applicationSessionModule:(id)arg1 applicationColdStartWithType:(long long)arg2 appPreviousVersion:(id)arg3;
- (void)applicationSessionModule:(id)arg1 applicationSessionBeingInBackgroundInterval:(double)arg2;
- (void)applicationSessionModule:(id)arg1 applicationDidEnterBackgroundWithSessionInterval:(double)arg2;
- (void)buttonsModule:(id)arg1 buttonTap:(id)arg2 withType:(long long)arg3 withLabel:(id)arg4 onViewController:(id)arg5;
- (_Bool)analytics:(id)arg1 moduleEnabled:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


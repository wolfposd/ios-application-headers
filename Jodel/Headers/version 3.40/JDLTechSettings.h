//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDLTechSettings : NSObject
{
}

+ (void)trackSubject:(id)arg1 item:(id)arg2 subItem:(id)arg3;
+ (id)bucketNameForBytes:(unsigned long long)arg1;
+ (_Bool)techIssueForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (_Bool)shouldUseNewLocationUpdateLogic;
+ (_Bool)useFeedPagingInDidScroll;
+ (_Bool)fixScrollToTopForNewPostInOldMainFeedStack;
+ (void)trackSharedURLCacheMemoryAndDiskCapacity;
+ (_Bool)shouldTrackCacheUsage;
+ (_Bool)shouldSetSharedCacheInBootstrap;
+ (_Bool)shouldCheckEmpyDistinctId;
+ (_Bool)shouldTrackJDLBussinessMetrics;
+ (_Bool)shouldDisablePaste;
+ (_Bool)shouldTrackUUIDLegacyStatus;
+ (_Bool)shouldTrackICloudUIIDsCounts;
+ (_Bool)shouldSendInvestigationData;

@end


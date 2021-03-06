//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol JDLChannelsNotificationsStorableProtocol <NSObject>
- (void)removeTimestampsForOtherThan:(NSArray *)arg1;
- (void)removeNotificationForChannel:(NSString *)arg1;
- (NSArray *)getChannelsWithNotifications;
- (void)addChannelsWithNotifications:(NSArray *)arg1;
- (void)removeTimestampForChannel:(NSString *)arg1;
- (NSDictionary *)getChannelOpensTimestamps;
- (void)saveChannelOpenIfMissing:(NSString *)arg1;
- (void)saveChannelOpen:(NSString *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RLTStatsSerializerDelegate.h"

@class NSError, NSURL;

@protocol RLTStatsDispatcherDelegate <RLTStatsSerializerDelegate>

@optional
- (void)dispatcher:(id)arg1 sentWithDuration:(double)arg2;
- (void)dispatcher:(id)arg1 sendingFailedWithError:(NSError *)arg2 duration:(double)arg3;
- (void)dispatcher:(id)arg1 willSendDataToURL:(NSURL *)arg2 length:(unsigned long long)arg3;
@end


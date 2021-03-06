//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RLTStatsDispatchObject.h"

@class NSDictionary, NSNumber, NSString;

@interface RLTStatsEvent : NSObject <RLTStatsDispatchObject>
{
    NSString *_name;
    NSDictionary *_attributes;
    unsigned long long _successCount;
    unsigned long long _failureCount;
    unsigned long long _duration;
    unsigned long long _maxDuration;
    unsigned long long _minDuration;
    NSNumber *_timestamp;
}

@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long minDuration; // @synthesize minDuration=_minDuration;
@property(nonatomic) unsigned long long maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long failureCount; // @synthesize failureCount=_failureCount;
@property(nonatomic) unsigned long long successCount; // @synthesize successCount=_successCount;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentationWithConfiguration:(id)arg1;
- (long long)currentTimeMillis;
- (id)initWithEventName:(id)arg1 attributes:(id)arg2 status:(long long)arg3 duration:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDLExperimentsStorage, NSArray;

@interface JDLExperiments : NSObject
{
    JDLExperimentsStorage *_storage;
    NSArray *_currentExperiments;
    NSObject *_lock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSArray *currentExperiments; // @synthesize currentExperiments=_currentExperiments;
@property(retain, nonatomic) JDLExperimentsStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (_Bool)experimentsContainsFeature:(id)arg1;
- (_Bool)isFeatureEnabled:(unsigned long long)arg1;
- (_Bool)userProfilingEnabled;
- (_Bool)pictureFeedEnabled;
- (_Bool)pictureGeoFilterEnabled;
- (_Bool)votingReasonFeatureEnabledForUpvote:(_Bool)arg1;
- (_Bool)postPinningExperimentEnabled;
- (_Bool)postNotificationFeatureEnabled;
- (_Bool)flagReasonChangeEnabled;
- (_Bool)homeFeatureEnabled;
- (_Bool)channelsFeatureEnabled;
- (_Bool)thankJodlerEnabled;
- (void)setUserExperiments:(id)arg1;
- (id)init;

@end


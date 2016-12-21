//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, RLTStatsCollector, RLTStatsConfiguration;

@interface RLTStats : NSObject
{
    _Bool _enabled;
    _Bool _verbose;
    RLTStatsConfiguration *_configuration;
    id <RLTStatsDelegate> _delegate;
    RLTStatsCollector *_statsCollector;
    NSTimer *_flushTimer;
    double _backgroundTaskTimeout;
    unsigned long long _backgroundTask;
    NSTimer *_bgTaskTimer;
}

+ (id)sharedInstance;
+ (id)startWithServerHost:(id)arg1 serverPort:(unsigned long long)arg2 configuration:(id)arg3;
+ (id)startWithApplicationId:(id)arg1 serverHost:(id)arg2 serverPort:(unsigned long long)arg3;
+ (void)trackImageUploadWithImageSize:(struct CGSize)arg1 dataLength:(unsigned long long)arg2 scale:(double)arg3;
+ (void)trackMediaEventWithSubject:(id)arg1 item:(id)arg2 subItem:(id)arg3 duration:(unsigned long long)arg4;
+ (void)trackChannelsIndexBug:(id)arg1;
+ (void)trackVotingReasonWithSubject:(id)arg1 action:(id)arg2;
+ (void)trackVotingReasonWithSubject:(id)arg1 reasonCode:(id)arg2 duration:(unsigned long long)arg3;
+ (void)trackChannelOpen:(long long)arg1 contentName:(id)arg2;
+ (void)trackKarmaUpdate:(id)arg1 newKarma:(id)arg2;
+ (void)trackWebViewEventSubject:(id)arg1 item:(id)arg2 subItem:(id)arg3 duration:(unsigned long long)arg4;
+ (void)trackAppAuthEventWithSubject:(id)arg1 item:(id)arg2 subItem:(id)arg3 duration:(unsigned long long)arg4;
+ (void)trackDebugEventWithSubject:(id)arg1 item:(id)arg2 subItem:(id)arg3 duration:(unsigned long long)arg4;
+ (id)nameForPostContentType:(long long)arg1;
+ (id)rootFeedIdentifierForFeedType:(long long)arg1 feedOrder:(long long)arg2;
+ (id)nameForPostVotingSource:(long long)arg1;
+ (id)nameForPostCreationSource:(long long)arg1;
+ (id)nameForPostActionSource:(long long)arg1;
+ (void)trackClientActivityDeleteSource:(long long)arg1 postContentType:(long long)arg2 feedType:(long long)arg3 rootFeedOrder:(long long)arg4;
+ (void)trackClientActivityReasonId:(id)arg1 postContentType:(long long)arg2 source:(long long)arg3 feedType:(long long)arg4 rootFeedOrder:(long long)arg5 subreasonId:(id)arg6;
+ (void)trackClientActivityPostWithSource:(long long)arg1 postContentType:(long long)arg2 postExtras:(unsigned long long)arg3 feedType:(long long)arg4 rootFeedOrder:(long long)arg5;
+ (void)trackClientActivityVote:(_Bool)arg1 postContentType:(long long)arg2 votingSource:(long long)arg3 feedType:(long long)arg4 rootFeedOrder:(long long)arg5;
+ (void)trackClientActivityLoadMoreForFeedType:(long long)arg1 rootFeedOrder:(long long)arg2;
+ (void)trackClientActivityPullToRefreshForFeedType:(long long)arg1 rootFeedOrder:(long long)arg2;
+ (void)trackClientActivityFeedOrderChangeForFeedType:(long long)arg1 toFeedOrder:(long long)arg2;
+ (void)trackPullToRefreshWithPrefix:(id)arg1 contentName:(id)arg2 feedType:(long long)arg3 feedOrder:(long long)arg4;
+ (void)trackNewPullToRefreshForContentName:(id)arg1 feedType:(long long)arg2 feedOrder:(long long)arg3;
+ (void)trackAccessibilityEventWithSubject:(id)arg1 item:(id)arg2 subItem:(id)arg3 duration:(unsigned long long)arg4;
+ (void)trackAPNSEventWithStep:(id)arg1 context:(id)arg2;
+ (void)trackQuickAction:(id)arg1 step:(id)arg2 context:(id)arg3;
@property(retain, nonatomic) NSTimer *bgTaskTimer; // @synthesize bgTaskTimer=_bgTaskTimer;
@property(nonatomic) unsigned long long backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(nonatomic) double backgroundTaskTimeout; // @synthesize backgroundTaskTimeout=_backgroundTaskTimeout;
@property(retain, nonatomic) NSTimer *flushTimer; // @synthesize flushTimer=_flushTimer;
@property(retain, nonatomic) RLTStatsCollector *statsCollector; // @synthesize statsCollector=_statsCollector;
@property(nonatomic) _Bool verbose; // @synthesize verbose=_verbose;
@property(nonatomic) __weak id <RLTStatsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) RLTStatsConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)invalidateBackgroundTask;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)dealloc;
- (void)trackActivity:(id)arg1 type:(id)arg2 subtype:(id)arg3;
- (void)trackEvent:(id)arg1 attributes:(id)arg2 status:(long long)arg3 duration:(unsigned long long)arg4;
- (void)trackButtonTapWithLabel:(id)arg1 contentName:(id)arg2;
- (void)trackContentView:(id)arg1;
- (void)flush;
- (void)setUserIdentifier:(id)arg1;
- (void)trackEventFailure:(id)arg1 attributes:(id)arg2;
- (void)trackEvent:(id)arg1 attributes:(id)arg2 duration:(unsigned long long)arg3;
- (void)trackEvent:(id)arg1 attributes:(id)arg2;
- (void)trackEvent:(id)arg1;
- (void)setDryRun:(_Bool)arg1;
- (id)initWithConfiguration:(id)arg1 serverHost:(id)arg2 serverPort:(unsigned long long)arg3;
- (void)trackHometownEdgeCase:(id)arg1;
- (void)trackHometownDidStartSetting:(id)arg1;

@end

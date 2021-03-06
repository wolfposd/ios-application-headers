//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface RLTLocalizationAppStateHookService : NSObject
{
    _Bool _inBackground;
    CDUnknownBlockType _onDidEnterBackgroundBlock;
    CDUnknownBlockType _onBecomeActiveAfterBackgroundBlock;
    double _backgroundTaskTimeout;
    unsigned long long _backgroundTask;
    NSTimer *_bgTaskTimer;
}

@property(nonatomic) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(retain, nonatomic) NSTimer *bgTaskTimer; // @synthesize bgTaskTimer=_bgTaskTimer;
@property(nonatomic) unsigned long long backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(nonatomic) double backgroundTaskTimeout; // @synthesize backgroundTaskTimeout=_backgroundTaskTimeout;
@property(copy, nonatomic) CDUnknownBlockType onBecomeActiveAfterBackgroundBlock; // @synthesize onBecomeActiveAfterBackgroundBlock=_onBecomeActiveAfterBackgroundBlock;
@property(copy, nonatomic) CDUnknownBlockType onDidEnterBackgroundBlock; // @synthesize onDidEnterBackgroundBlock=_onDidEnterBackgroundBlock;
- (void).cxx_destruct;
- (void)invalidateBackgroundTask;
- (void)onUIApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)dealloc;
- (void)onUIApplicationDidBecomeActiveNotification:(id)arg1;
- (id)init;

@end


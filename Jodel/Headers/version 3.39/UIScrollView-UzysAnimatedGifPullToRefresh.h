//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class UzysAnimatedGifActivityIndicator;

@interface UIScrollView (UzysAnimatedGifPullToRefresh)
- (void)willMoveToSuperview:(id)arg1;
- (void)orientationChanged:(id)arg1;
- (long long)pullToRefreshActivityIndcatorStyle;
- (void)setPullToRefreshActivityIndcatorStyle:(long long)arg1;
@property(nonatomic) _Bool pullToRefreshShowVariableSize;
@property(nonatomic) _Bool pullToRefreshAlphaTransition;
@property(nonatomic) _Bool showPullToRefresh; // @dynamic showPullToRefresh;
@property(retain, nonatomic) UzysAnimatedGifActivityIndicator *pullToRefreshView; // @dynamic pullToRefreshView;
- (void)stopPullToRefreshAnimation;
- (void)triggerPullToRefresh;
- (void)removePullToRefreshActionHandler;
- (void)addTopInsetInPortrait:(double)arg1 TopInsetInLandscape:(double)arg2;
- (void)addPullToRefreshActionHandler:(CDUnknownBlockType)arg1 ProgressImages:(id)arg2 LoadingImages:(id)arg3 ProgressScrollThreshold:(long long)arg4 LoadingImagesFrameRate:(long long)arg5;

// Remaining properties
@property(nonatomic) long long activityIndcatorStyle; // @dynamic activityIndcatorStyle;
@end


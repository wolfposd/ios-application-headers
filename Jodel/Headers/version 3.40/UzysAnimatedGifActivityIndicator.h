//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIActivityIndicatorView, UIImageView, UIScrollView;

@interface UzysAnimatedGifActivityIndicator : UIView
{
    _Bool _isObserving;
    _Bool _showAlphaTransition;
    _Bool _isVariableSize;
    double _originalTopInset;
    double _landscapeTopInset;
    double _portraitTopInset;
    unsigned long long _state;
    UIScrollView *_scrollView;
    CDUnknownBlockType _pullToRefreshHandler;
    long long _activityIndicatorStyle;
    UIImageView *_imageViewProgress;
    UIImageView *_imageViewLoading;
    NSArray *_pImgArrProgress;
    NSArray *_pImgArrLoading;
    UIActivityIndicatorView *_activityIndicatorView;
    double _progress;
    long long _progressThreshold;
    long long _LoadingFrameRate;
}

@property(nonatomic) long long LoadingFrameRate; // @synthesize LoadingFrameRate=_LoadingFrameRate;
@property(nonatomic) long long progressThreshold; // @synthesize progressThreshold=_progressThreshold;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) NSArray *pImgArrLoading; // @synthesize pImgArrLoading=_pImgArrLoading;
@property(retain, nonatomic) NSArray *pImgArrProgress; // @synthesize pImgArrProgress=_pImgArrProgress;
@property(retain, nonatomic) UIImageView *imageViewLoading; // @synthesize imageViewLoading=_imageViewLoading;
@property(retain, nonatomic) UIImageView *imageViewProgress; // @synthesize imageViewProgress=_imageViewProgress;
@property(nonatomic) long long activityIndicatorStyle; // @synthesize activityIndicatorStyle=_activityIndicatorStyle;
@property(nonatomic) _Bool isVariableSize; // @synthesize isVariableSize=_isVariableSize;
@property(nonatomic) _Bool showAlphaTransition; // @synthesize showAlphaTransition=_showAlphaTransition;
@property(copy, nonatomic) CDUnknownBlockType pullToRefreshHandler; // @synthesize pullToRefreshHandler=_pullToRefreshHandler;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) double portraitTopInset; // @synthesize portraitTopInset=_portraitTopInset;
@property(nonatomic) double landscapeTopInset; // @synthesize landscapeTopInset=_landscapeTopInset;
@property(nonatomic) double originalTopInset; // @synthesize originalTopInset=_originalTopInset;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
- (void).cxx_destruct;
- (void)setActivityIndicatorViewStyle:(long long)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)manuallyTriggered;
- (void)stopIndicatorAnimation;
- (void)orientationChange:(long long)arg1;
- (void)setFrameSizeByLoadingImage;
- (void)setFrameSizeByProgressImage;
- (void)actionTriggeredState;
- (void)actionStopState;
- (void)willMoveToSuperview:(id)arg1;
- (void)scrollViewDidScroll:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1 handler:(CDUnknownBlockType)arg2 animation:(_Bool)arg3;
- (void)resetScrollViewContentInset:(CDUnknownBlockType)arg1 animation:(_Bool)arg2;
- (void)setupScrollViewContentInsetForLoadingIndicator:(CDUnknownBlockType)arg1 animation:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_initAnimationView;
- (void)_commonInit;
- (id)initWithProgressImages:(id)arg1 LoadingImages:(id)arg2 ProgressScrollThreshold:(long long)arg3 LoadingImagesFrameRate:(long long)arg4;

@end


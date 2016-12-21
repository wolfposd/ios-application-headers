//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKUIWebView.h"

@class UIActivityIndicatorView;

@interface JDLLoadingWebView : WKUIWebView
{
    UIActivityIndicatorView *_loadingIndicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
- (void).cxx_destruct;
- (void)stopRefreshing;
- (void)startRefreshing;
- (void)layoutSubviews;
- (void)adjustSizeOfLoadingIndicator;
- (void)setupLoadingIndicator;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

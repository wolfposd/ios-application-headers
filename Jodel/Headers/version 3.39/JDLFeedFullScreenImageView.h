//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIActivityIndicatorView;

@interface JDLFeedFullScreenImageView : UIImageView
{
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void).cxx_destruct;
- (void)trackShowFullScreenImage;
- (void)dismiss;
- (void)show;
- (void)stopLoading;
- (void)startLoading;
- (id)init;

@end


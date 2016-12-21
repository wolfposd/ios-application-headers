//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "JDLPreviewViewControllerDelegate.h"
#import "TLMCaptureViewControllerDelegate.h"
#import "TLMComposeViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class JDLImageCaptureViewController, NSString, SWGPost, UIColor, UINavigationController, UIScrollView;

@interface JDLReplyViewController : UIViewController <TLMComposeViewControllerDelegate, TLMCaptureViewControllerDelegate, UIViewControllerTransitioningDelegate, JDLPreviewViewControllerDelegate, UIScrollViewDelegate>
{
    SWGPost *_ancestorPost;
    long long _rootFeedOrder;
    long long _feedType;
    NSString *_hashtag;
    NSString *_channel;
    id <JDLReplyViewControllerTransitioning> _replyTransitioningLogic;
    UIScrollView *_scrollView;
    UINavigationController *_composeNavigationController;
    JDLImageCaptureViewController *_capture;
    UIColor *_postColor;
}

@property(retain, nonatomic) UIColor *postColor; // @synthesize postColor=_postColor;
@property(retain, nonatomic) JDLImageCaptureViewController *capture; // @synthesize capture=_capture;
@property(retain, nonatomic) UINavigationController *composeNavigationController; // @synthesize composeNavigationController=_composeNavigationController;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) id <JDLReplyViewControllerTransitioning> replyTransitioningLogic; // @synthesize replyTransitioningLogic=_replyTransitioningLogic;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *hashtag; // @synthesize hashtag=_hashtag;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) long long rootFeedOrder; // @synthesize rootFeedOrder=_rootFeedOrder;
@property(retain, nonatomic) SWGPost *ancestorPost; // @synthesize ancestorPost=_ancestorPost;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isReply;
- (void)handleJodelPostingWithContentType:(long long)arg1 postExtras:(unsigned long long)arg2;
- (void)composeControllerDidReceiveOpenCameraTap:(id)arg1;
- (void)closedEULA;
- (void)openedEULA;
- (_Bool)acceptedEULA;
- (void)openImagePreviewViewForImage:(id)arg1;
- (void)successfullyPostedImageJodel:(unsigned long long)arg1;
- (void)composeControllerDidPostJodel:(unsigned long long)arg1;
- (void)composeControllerDidCancel;
- (void)captureViewControllerDidCancel;
- (void)handleScrollingBehaviour;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)composeViewController;
- (void)addCaptureViewControllerToScrollView;
- (void)scrollToPage:(unsigned long long)arg1;
- (void)setupScrollView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

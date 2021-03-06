//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDLBaseTabViewController.h"

#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"

@class JDLFeedImageView, JDLModerationDecisionButton, JDLModerationViewModel, JDLWebViewControllerWithButton, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface JDLModerationViewController : JDLBaseTabViewController <UIScrollViewDelegate, UIWebViewDelegate>
{
    JDLModerationDecisionButton *_discardButton;
    UILabel *_discardLabel;
    JDLModerationDecisionButton *_skipButton;
    UILabel *_skipLabel;
    JDLModerationDecisionButton *_acceptButton;
    UILabel *_acceptLabel;
    UILabel *_textLabel;
    UIView *_postContainerView;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_activityOverlayView;
    UIButton *_rulesButton;
    UILabel *_imageHoldToViewLabel;
    JDLFeedImageView *_jodelImageView;
    NSLayoutConstraint *_splitterTopToJodelImageContraint;
    NSLayoutConstraint *_splitterTopToLabelConstraint;
    JDLModerationViewModel *_viewModel;
    JDLWebViewControllerWithButton *_rulesViewController;
    UILabel *_flagReasonLabel;
    UIView *_flagReasonContainerView;
    NSLayoutConstraint *_arrowToTextCenterConstraint;
    NSLayoutConstraint *_arrowToImageCenterConstraint;
    UIView *_dividerLine;
}

@property(nonatomic) __weak UIView *dividerLine; // @synthesize dividerLine=_dividerLine;
@property(nonatomic) __weak NSLayoutConstraint *arrowToImageCenterConstraint; // @synthesize arrowToImageCenterConstraint=_arrowToImageCenterConstraint;
@property(nonatomic) __weak NSLayoutConstraint *arrowToTextCenterConstraint; // @synthesize arrowToTextCenterConstraint=_arrowToTextCenterConstraint;
@property(nonatomic) __weak UIView *flagReasonContainerView; // @synthesize flagReasonContainerView=_flagReasonContainerView;
@property(nonatomic) __weak UILabel *flagReasonLabel; // @synthesize flagReasonLabel=_flagReasonLabel;
@property(retain, nonatomic) JDLWebViewControllerWithButton *rulesViewController; // @synthesize rulesViewController=_rulesViewController;
@property(retain, nonatomic) JDLModerationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak NSLayoutConstraint *splitterTopToLabelConstraint; // @synthesize splitterTopToLabelConstraint=_splitterTopToLabelConstraint;
@property(nonatomic) __weak NSLayoutConstraint *splitterTopToJodelImageContraint; // @synthesize splitterTopToJodelImageContraint=_splitterTopToJodelImageContraint;
@property(nonatomic) __weak JDLFeedImageView *jodelImageView; // @synthesize jodelImageView=_jodelImageView;
@property(nonatomic) __weak UILabel *imageHoldToViewLabel; // @synthesize imageHoldToViewLabel=_imageHoldToViewLabel;
@property(nonatomic) __weak UIButton *rulesButton; // @synthesize rulesButton=_rulesButton;
@property(nonatomic) __weak UIView *activityOverlayView; // @synthesize activityOverlayView=_activityOverlayView;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak UIView *postContainerView; // @synthesize postContainerView=_postContainerView;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UILabel *acceptLabel; // @synthesize acceptLabel=_acceptLabel;
@property(nonatomic) __weak JDLModerationDecisionButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(nonatomic) __weak UILabel *skipLabel; // @synthesize skipLabel=_skipLabel;
@property(nonatomic) __weak JDLModerationDecisionButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) __weak UILabel *discardLabel; // @synthesize discardLabel=_discardLabel;
@property(nonatomic) __weak JDLModerationDecisionButton *discardButton; // @synthesize discardButton=_discardButton;
- (void).cxx_destruct;
- (void)handleLongPressOnImage:(id)arg1;
- (void)setupImagePostScreen:(id)arg1;
- (void)setupMessagePostScreen:(id)arg1;
- (void)resetPostScreen;
- (void)acceptTap:(id)arg1;
- (void)openContextTap:(id)arg1;
- (void)skipTap:(id)arg1;
- (void)discardTap:(id)arg1;
- (void)rulesTap:(id)arg1;
- (void)actionButtonEnabled:(_Bool)arg1;
- (void)sendDecision:(long long)arg1;
- (void)setupPostScreen:(id)arg1;
- (void)dismissInitialRules;
- (void)showRulesModal;
- (void)showInitialRules;
- (void)setFlagReasonFor:(id)arg1;
- (void)startActivityIndicator;
- (void)stopActivityIndicator;
- (void)closeModeration;
- (void)showPictureOfTheDay;
- (void)moderationFinished;
- (void)showNoMoreItems;
- (void)showNothingToModerateAlert;
- (void)showDefaultError:(id)arg1;
- (void)setupNavigationBarItems;
- (id)karmaTitleLabelColor;
- (_Bool)updateTitleAndCoordinatesWithNewLocation;
- (void)fetchInitialModerationPosts;
- (void)setupViews;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)bindViewModel:(id)arg1;
- (void)trackButtonTapWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class JDLTriangleView, NSLayoutConstraint, UILabel;

@interface JDLLongPressTutorialPopover : UIViewController
{
    JDLTriangleView *_triangleView;
    UILabel *_tutorialText;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_rightConstraint;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_bottomConstraint;
    id <JDLLongPressPopoverDelegate> _delegate;
}

@property(nonatomic) __weak id <JDLLongPressPopoverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint=_leftConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rightConstraint; // @synthesize rightConstraint=_rightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) __weak UILabel *tutorialText; // @synthesize tutorialText=_tutorialText;
- (void).cxx_destruct;
- (void)didTapView:(id)arg1;
- (double)getEstimatedHeightForWidth:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end


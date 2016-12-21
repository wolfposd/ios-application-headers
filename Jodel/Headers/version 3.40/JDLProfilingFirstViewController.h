//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSLayoutConstraint, UIButton, UILabel;

@interface JDLProfilingFirstViewController : UIViewController
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_confirmButton;
    NSLayoutConstraint *_popupViewWidthConstraint;
    NSArray *_btns;
}

@property(retain, nonatomic) NSArray *btns; // @synthesize btns=_btns;
@property(nonatomic) __weak NSLayoutConstraint *popupViewWidthConstraint; // @synthesize popupViewWidthConstraint=_popupViewWidthConstraint;
@property(nonatomic) __weak UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (long long)userProfileTypeForButtonIndex:(unsigned long long)arg1;
- (void)confirmTap:(id)arg1;
- (void)setConfirmButtonEnabled:(_Bool)arg1;
- (void)selectTap:(id)arg1;
- (void)adjustFontsAndSizes;
- (void)viewDidLoad;

@end

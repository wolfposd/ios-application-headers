//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButtonTitleBeforeImage, UILabel;

@interface JDLSectionHeaderView : UIView
{
    UIButtonTitleBeforeImage *_navigationButton;
    UILabel *_titleLabel;
    UILabel *_detailsLabel;
}

@property(retain, nonatomic) UILabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButtonTitleBeforeImage *navigationButton; // @synthesize navigationButton=_navigationButton;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detailsTitle;
- (void)setTitleColor:(id)arg1;
- (void)addNavigationButtonWithTitle:(id)arg1;
- (void)setupViewWithFrame:(struct CGRect)arg1 title:(id)arg2 rightDetails:(id)arg3 fontSize:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 rightDetailsTitle:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 fontSize:(unsigned long long)arg3;

@end


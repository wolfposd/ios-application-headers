//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class UIColor, UILabel, UIView;

@interface JDLKarmaButtonItem : UIBarButtonItem
{
    UIColor *_karmaTitleColor;
    UILabel *_karmaValueLabel;
    UILabel *_karmaTitleLabel;
    UIView *_storedCustomView;
}

@property(retain, nonatomic) UIView *storedCustomView; // @synthesize storedCustomView=_storedCustomView;
@property(retain, nonatomic) UILabel *karmaTitleLabel; // @synthesize karmaTitleLabel=_karmaTitleLabel;
@property(retain, nonatomic) UILabel *karmaValueLabel; // @synthesize karmaValueLabel=_karmaValueLabel;
@property(retain, nonatomic) UIColor *karmaTitleColor; // @synthesize karmaTitleColor=_karmaTitleColor;
- (void).cxx_destruct;
- (id)traverseResponderChainForElement:(id)arg1;
- (void)tappedOnKarma:(id)arg1;
- (void)updateKarmaTitleLabelWithColor:(id)arg1;
- (void)updateKarmaValueLabelPosition;
- (id)customView;
- (void)updateKarmaValueLabelWithKarma:(id)arg1;
- (id)initWithCustomView:(id)arg1 andTitleColor:(id)arg2;

@end


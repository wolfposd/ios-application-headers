//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIColor;

@interface TLMColorPickerView : UIView
{
    _Bool _expanded;
    NSArray *_colorButtons;
    id <TLMColorPickerViewDelegate> _delegate;
    UIColor *_highlightedColor;
}

@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(nonatomic) id <TLMColorPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) NSArray *colorButtons; // @synthesize colorButtons=_colorButtons;
- (void).cxx_destruct;
- (void)hideButtons;
- (id)colorButtonForColor:(id)arg1;
- (void)layoutSubviews;
- (void)colorButtonPressed:(id)arg1;
- (void)contractPicker;
- (void)selectColorForButton:(id)arg1;
- (void)highlightButtonWithColor:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


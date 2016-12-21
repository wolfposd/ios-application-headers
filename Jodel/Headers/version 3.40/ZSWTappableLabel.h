//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSAttributedString, NSString, NSTextStorage, NSTimer, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface ZSWTappableLabel : UILabel <UIGestureRecognizerDelegate>
{
    id <ZSWTappableLabelTapDelegate> _tapDelegate;
    id <ZSWTappableLabelLongPressDelegate> _longPressDelegate;
    double _longPressDuration;
    NSString *_longPressAccessibilityActionName;
    NSArray *_accessibleElements;
    NSAttributedString *_unmodifiedAttributedText;
    NSTextStorage *_gestureTextStorage;
    UILongPressGestureRecognizer *_longPressGR;
    UITapGestureRecognizer *_tapGR;
    NSTimer *_longPressTriggerTimer;
    struct CGPoint _gesturePointOffset;
    struct CGRect _lastAccessibleElementsFrame;
}

@property(retain, nonatomic) NSTimer *longPressTriggerTimer; // @synthesize longPressTriggerTimer=_longPressTriggerTimer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGR; // @synthesize tapGR=_tapGR;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGR; // @synthesize longPressGR=_longPressGR;
@property(nonatomic) struct CGPoint gesturePointOffset; // @synthesize gesturePointOffset=_gesturePointOffset;
@property(retain, nonatomic) NSTextStorage *gestureTextStorage; // @synthesize gestureTextStorage=_gestureTextStorage;
@property(retain, nonatomic) NSAttributedString *unmodifiedAttributedText; // @synthesize unmodifiedAttributedText=_unmodifiedAttributedText;
@property(nonatomic) struct CGRect lastAccessibleElementsFrame; // @synthesize lastAccessibleElementsFrame=_lastAccessibleElementsFrame;
@property(retain, nonatomic) NSArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(copy, nonatomic) NSString *longPressAccessibilityActionName; // @synthesize longPressAccessibilityActionName=_longPressAccessibilityActionName;
@property(nonatomic) double longPressDuration; // @synthesize longPressDuration=_longPressDuration;
@property(nonatomic) __weak id <ZSWTappableLabelLongPressDelegate> longPressDelegate; // @synthesize longPressDelegate=_longPressDelegate;
@property(nonatomic) __weak id <ZSWTappableLabelTapDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)longPress:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)longPressForAccessibilityAction:(id)arg1;
- (void)longPressForTimer:(id)arg1;
- (void)cancelLongPressTimer;
- (void)beginLongPressAtIndex:(unsigned long long)arg1;
- (void)notifyForCharacterIndex:(unsigned long long)arg1 type:(long long)arg2;
- (void)removeHighlight;
- (void)applyHighlightAtIndex:(unsigned long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)performWithLayoutManager:(CDUnknownBlockType)arg1 ignoringGestureRecognizers:(_Bool)arg2;
- (void)destroyTextStorageIfNeeded;
- (void)createTextStorage;
- (void)tappableLabelCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

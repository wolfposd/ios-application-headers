//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLKFlexibleHeightBar.h"

@class BLKDelegateSplitter, UISegmentedControl;

@interface JDLFeedFilterView : BLKFlexibleHeightBar
{
    UISegmentedControl *_segmentedControl;
    BLKFlexibleHeightBar *_bar;
    BLKDelegateSplitter *_delegateSplitter;
}

@property(retain, nonatomic) BLKDelegateSplitter *delegateSplitter; // @synthesize delegateSplitter=_delegateSplitter;
@property(retain, nonatomic) BLKFlexibleHeightBar *bar; // @synthesize bar=_bar;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)addBottomBorder;
- (void)setupWithTableView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

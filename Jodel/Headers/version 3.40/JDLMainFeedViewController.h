//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDLFeedPostButtonViewController.h"

@class JDLMainFeedViewModel, JDLSetHomeTitleViewController;

@interface JDLMainFeedViewController : JDLFeedPostButtonViewController
{
    JDLSetHomeTitleViewController *_chooseHomeTitle;
}

@property(retain, nonatomic) JDLSetHomeTitleViewController *chooseHomeTitle; // @synthesize chooseHomeTitle=_chooseHomeTitle;
- (void).cxx_destruct;
- (void)updateTitleLabelWithHome;
- (void)updateTitleLabelWithLocation;
- (void)openSetHomeViewController;
- (void)setupHomeTitle;
- (void)removeHomeTitle;
- (void)bindViewModel:(id)arg1;
- (void)updateFeedToIsHome:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) JDLMainFeedViewModel *viewModel; // @dynamic viewModel;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "JDLPictureFeedCellDelegate.h"

@class JDLPictureFeedViewModel, NSString;

@interface JDLPictureFeedCollectionViewController : UICollectionViewController <JDLPictureFeedCellDelegate>
{
    id <JDLPictureFeedActionsProtocol> _delegate;
    JDLPictureFeedViewModel *_viewModel;
}

@property(retain, nonatomic) JDLPictureFeedViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <JDLPictureFeedActionsProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshCurrentIndex;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)close;
- (void)openPost:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)refreshActionControls;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)bindViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


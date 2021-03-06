//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDLBaseTabViewController.h"

#import "JDLScrollableContentProtocol.h"

@class JDLBaseFeedViewModel<JDLFeedViewModelFetchProtocol>, JDLFeedPullToRefresh, JDLFeedTableViewSource, JDLLoadingTableView, NSString;

@interface JDLSingleFeedViewController : JDLBaseTabViewController <JDLScrollableContentProtocol>
{
    JDLLoadingTableView *_tableView;
    JDLBaseFeedViewModel<JDLFeedViewModelFetchProtocol> *_viewModel;
    JDLFeedPullToRefresh *_pullToRefreshControl;
    JDLFeedTableViewSource *_tableSource;
    id _fullScreenPreview;
}

@property(retain, nonatomic) id fullScreenPreview; // @synthesize fullScreenPreview=_fullScreenPreview;
@property(retain, nonatomic) JDLFeedTableViewSource *tableSource; // @synthesize tableSource=_tableSource;
@property(retain, nonatomic) JDLFeedPullToRefresh *pullToRefreshControl; // @synthesize pullToRefreshControl=_pullToRefreshControl;
@property(retain, nonatomic) JDLBaseFeedViewModel<JDLFeedViewModelFetchProtocol> *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak JDLLoadingTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)reloadJodelAfterNotification:(id)arg1;
- (void)handleJodelVote:(id)arg1;
- (void)handleJodelPinUnpin:(id)arg1;
- (void)handleJodelDeletion:(id)arg1;
- (void)removePostWithId:(id)arg1;
- (void)tryToLoadMore;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)refreshAfterFetchWithError:(id)arg1;
- (void)fetchInitialData;
- (void)fetchInitialState;
- (void)setupPullToRefresh;
- (void)reloadTableView;
- (void)setupTableView;
- (void)notificationNoValidLocationFound:(id)arg1;
- (void)setupImagePreviewHandler;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)bindViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


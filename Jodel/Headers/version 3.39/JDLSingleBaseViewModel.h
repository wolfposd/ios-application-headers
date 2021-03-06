//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDLBaseFeedViewModel.h"

#import "JDLFeedViewModelFetchProtocol.h"

@class JDLFeedFetchLockTrackHelper, JDLSingleFeedDataSource, NSString;

@interface JDLSingleBaseViewModel : JDLBaseFeedViewModel <JDLFeedViewModelFetchProtocol>
{
    id <JDLSingleFeedFetchServiceProtocol> _fetchService;
    JDLFeedFetchLockTrackHelper *_fetchHelper;
}

@property(retain, nonatomic) JDLFeedFetchLockTrackHelper *fetchHelper; // @synthesize fetchHelper=_fetchHelper;
@property(retain, nonatomic) id <JDLSingleFeedFetchServiceProtocol> fetchService; // @synthesize fetchService=_fetchService;
- (void).cxx_destruct;
- (void)fetchMore:(CDUnknownBlockType)arg1;
- (_Bool)isPossibleToFetchMore;
- (void)pullToRefresh:(CDUnknownBlockType)arg1;
- (void)fetchInitialData:(CDUnknownBlockType)arg1;
- (void)openPostForPostCellViewModel:(id)arg1;
- (id)buildCellViewModelForPost:(id)arg1;
- (id)initWithFetchService:(id)arg1 feedType:(long long)arg2;

// Remaining properties
@property(retain, nonatomic) JDLSingleFeedDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


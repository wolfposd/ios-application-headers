//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JDLChannelCellFollowProtocol.h"
#import "JDLChannelsDataSourceProtocol.h"

@class JDLChannelCellViewModel, NSArray, NSString, RACSubject;

@interface JDLChannelSearchViewModel : NSObject <JDLChannelsDataSourceProtocol, JDLChannelCellFollowProtocol>
{
    RACSubject *shouldRefreshChannelsList;
    RACSubject *_searchEvent;
    JDLChannelCellViewModel *_resultCell;
    NSArray *_localSearchResults;
}

@property(retain, nonatomic) NSArray *localSearchResults; // @synthesize localSearchResults=_localSearchResults;
@property(retain, nonatomic) JDLChannelCellViewModel *resultCell; // @synthesize resultCell=_resultCell;
@property(retain) RACSubject *searchEvent; // @synthesize searchEvent=_searchEvent;
@property(retain, nonatomic) RACSubject *shouldRefreshChannelsList; // @synthesize shouldRefreshChannelsList;
- (void).cxx_destruct;
- (_Bool)shouldShowHeaderForSection:(unsigned long long)arg1;
- (_Bool)shouldShowSuggestedChannels;
- (_Bool)shouldShowEmptyCellForFirstSection;
- (long long)numberOfSections;
- (id)channelAtIndexPath:(id)arg1;
- (long long)rowsCountForSection:(unsigned long long)arg1;
- (id)footerMessage;
- (void)followToggleChannel:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (id)getCellViewModelForChannel:(id)arg1;
- (id)getCellViewModelFromChannel:(id)arg1;
- (void)calculateLocalSearch:(id)arg1;
- (void)searchFor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


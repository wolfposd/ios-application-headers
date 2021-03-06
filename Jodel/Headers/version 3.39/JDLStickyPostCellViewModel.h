//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JDLFeedCellViewModelProtocol.h"

@class NSString, SWGStickypost;

@interface JDLStickyPostCellViewModel : NSObject <JDLFeedCellViewModelProtocol>
{
    SWGStickypost *_stickyPost;
    id <JDLStickyPostCellParentProtocol> _parent;
}

@property(nonatomic) __weak id <JDLStickyPostCellParentProtocol> parent; // @synthesize parent=_parent;
@property(retain, nonatomic) SWGStickypost *stickyPost; // @synthesize stickyPost=_stickyPost;
- (void).cxx_destruct;
- (void)trackStickyAction:(id)arg1 subItem:(id)arg2;
- (void)trackStickyChannelOpen;
- (void)trackStickyPostOpen;
- (void)didSelect;
- (double)cellHeight;
- (id)cellId;
- (id)dequeueIdentifier;
- (void)openURL:(id)arg1;
- (void)openChannel:(id)arg1;
- (void)openHashtag:(id)arg1;
- (_Bool)shouldShowChannels;
- (void)upvote:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (id)color;
- (_Bool)shouldShowCloseButton;
- (_Bool)shouldShowForwardIcon;
- (_Bool)shouldShowVoting;
- (id)locationName;
- (id)message;
- (id)initWithStickyPost:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


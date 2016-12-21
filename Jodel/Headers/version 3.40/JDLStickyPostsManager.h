//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface JDLStickyPostsManager : NSObject
{
    NSArray *_visibleStickyCells;
    NSArray *_stickyCells;
}

@property(copy, nonatomic) NSArray *stickyCells; // @synthesize stickyCells=_stickyCells;
@property(copy, nonatomic) NSArray *visibleStickyCells; // @synthesize visibleStickyCells=_visibleStickyCells;
- (void).cxx_destruct;
- (id)downvoteForStickyId:(id)arg1;
- (id)upvoteForStickyId:(id)arg1;
- (void)voteFromCellViewModel:(id)arg1 upvote:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeSticky:(id)arg1;
- (void)dismissStickyPostFromCellViewModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshVisibleStickyCell;
- (void)setResponsePosts:(id)arg1 parent:(id)arg2;

@end

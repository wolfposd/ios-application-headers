//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol JDLFeedViewModelFetchProtocol <NSObject>
- (void)pullToRefresh:(void (^)(NSError *))arg1;
- (void)fetchMore:(void (^)(NSError *))arg1;
- (_Bool)isPossibleToFetchMore;
- (void)fetchInitialData:(void (^)(NSError *))arg1;
@end

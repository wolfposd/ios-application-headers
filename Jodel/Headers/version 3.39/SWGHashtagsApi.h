//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SWGApi.h"

@class NSMutableDictionary, NSString, SWGApiClient;

@interface SWGHashtagsApi : NSObject <SWGApi>
{
    SWGApiClient *_apiClient;
    NSMutableDictionary *_defaultHeaders;
}

+ (id)sharedAPI;
@property(retain, nonatomic) NSMutableDictionary *defaultHeaders; // @synthesize defaultHeaders=_defaultHeaders;
@property(nonatomic) SWGApiClient *apiClient; // @synthesize apiClient=_apiClient;
- (void).cxx_destruct;
- (id)getPopularHashtagFeedWithHashtag:(id)arg1 home:(id)arg2 skip:(id)arg3 after:(id)arg4 limit:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)getHashtagFeedWithHashtag:(id)arg1 home:(id)arg2 skip:(id)arg3 after:(id)arg4 limit:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)getDiscussedHashtagFeedWithHashtag:(id)arg1 home:(id)arg2 skip:(id)arg3 after:(id)arg4 limit:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)getComboHashtagFeedWithHashtag:(id)arg1 home:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)requestQueueSize;
- (void)setDefaultHeaderValue:(id)arg1 forKey:(id)arg2;
- (void)addHeader:(id)arg1 forKey:(id)arg2;
- (id)defaultHeaderForKey:(id)arg1;
- (id)initWithApiClient:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


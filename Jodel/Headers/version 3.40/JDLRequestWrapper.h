//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDLSWGApiClientMutableRequest, NSMutableSet, NSNumber;

@interface JDLRequestWrapper : NSObject
{
    unsigned char _numberOfRetries;
    NSNumber *_requestId;
    NSMutableSet *_childRequestIds;
    JDLSWGApiClientMutableRequest *_request;
}

@property(nonatomic) unsigned char numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(retain, nonatomic) JDLSWGApiClientMutableRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableSet *childRequestIds; // @synthesize childRequestIds=_childRequestIds;
@property(retain, nonatomic) NSNumber *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (id)initWithRequestId:(id)arg1 request:(id)arg2;

@end


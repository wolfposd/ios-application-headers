//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSString;

@interface SWGSetPushTokenRequest : SWGObject
{
    NSString *_pushToken;
    NSString *_clientId;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
- (void).cxx_destruct;
- (id)init;

@end


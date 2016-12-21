//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSNumber, NSString;

@interface SWGRegistrationResponse : SWGObject
{
    NSString *_accessToken;
    NSString *_distinctId;
    NSNumber *_expirationDate;
    NSNumber *_expiresIn;
    NSString *_refreshToken;
    NSNumber *_returning;
    NSString *_tokenType;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(retain, nonatomic) NSNumber *returning; // @synthesize returning=_returning;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSNumber *expiresIn; // @synthesize expiresIn=_expiresIn;
@property(retain, nonatomic) NSNumber *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *distinctId; // @synthesize distinctId=_distinctId;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)init;

@end

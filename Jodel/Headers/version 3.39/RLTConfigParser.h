//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RLTConfigConfiguration;

@interface RLTConfigParser : NSObject
{
    RLTConfigConfiguration *_configuration;
}

+ (id)JSONObjectFromData:(id)arg1;
+ (id)JSONObjectFromString:(id)arg1;
+ (id)parseArrayFromString:(id)arg1;
+ (id)parseDictionaryFromString:(id)arg1;
@property(retain, nonatomic) RLTConfigConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)keyOrValueFromDictObj:(id)arg1;
- (void)parse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSArray, NSString;

@interface SWGExperiment : SWGObject
{
    NSString *_name;
    NSString *_group;
    NSArray *_features;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(retain, nonatomic) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DTError : NSObject
{
}

+ (void)printErrorWithCallStack:(id)arg1;
+ (void)throwBadTypeException:(id)arg1 expectedClass:(Class)arg2;
+ (void)throwRemoveOutOfBoundsException:(long long)arg1 array:(id)arg2;
+ (void)throwInsertOutOfBoundsException:(long long)arg1 array:(id)arg2;

@end

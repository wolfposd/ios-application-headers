//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTelephonyNetworkInfo;

@interface RLTStatsReachability : NSObject
{
    id _networkReachability;
    CTTelephonyNetworkInfo *_telephonyInfo;
}

@property(retain, nonatomic) CTTelephonyNetworkInfo *telephonyInfo; // @synthesize telephonyInfo=_telephonyInfo;
@property(retain, nonatomic) id networkReachability; // @synthesize networkReachability=_networkReachability;
- (void).cxx_destruct;
- (long long)reachabilityStatusForFlags:(unsigned int)arg1;
- (id)obtainNetworkReachability;
- (id)nameForReachabilityStatus:(long long)arg1;
- (long long)currentRadioAccessTechnologyForWWanWithDefault:(long long)arg1;
- (id)currentReachabilityStatusName;
- (long long)currentReachabilityStatus;
- (void)enableInternalMonitoring;
- (id)init;

@end


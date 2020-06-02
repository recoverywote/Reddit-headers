//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface SubredditPowerupsInfo : NSObject
{
    long long _tier;
    long long _powerupsCount;
    long long _supportersCount;
    NSDate *_gracePeriodEnd;
    NSArray *_tiersInfo;
    NSArray *_mediaPacks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *mediaPacks; // @synthesize mediaPacks=_mediaPacks;
@property(readonly, nonatomic) NSArray *tiersInfo; // @synthesize tiersInfo=_tiersInfo;
@property(readonly, nonatomic) NSDate *gracePeriodEnd; // @synthesize gracePeriodEnd=_gracePeriodEnd;
@property(readonly, nonatomic) long long supportersCount; // @synthesize supportersCount=_supportersCount;
@property(readonly, nonatomic) long long powerupsCount; // @synthesize powerupsCount=_powerupsCount;
@property(readonly, nonatomic) long long tier; // @synthesize tier=_tier;
- (long long)benefits;
- (id)initWithGraphQLData:(id)arg1;

@end

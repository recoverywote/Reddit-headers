//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol LastGivenAwardCaching;

@interface GivenAwardsManager : NSObject
{
    id <LastGivenAwardCaching> _cache;
}

@property(retain, nonatomic) id <LastGivenAwardCaching> cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)lastGivenAwardIdentifierForTargetIdentifier:(id)arg1;
- (void)saveGivenAwardWithIdentifier:(id)arg1 forTargetWithIdentifier:(id)arg2;
- (id)orderedAwardingTotalsForTargetWithIdentifier:(id)arg1 awardingTotals:(id)arg2;
- (id)initWithCache:(id)arg1;

@end


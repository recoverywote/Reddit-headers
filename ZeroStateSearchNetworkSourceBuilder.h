//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RedditService;
@protocol AccountContext;

@interface ZeroStateSearchNetworkSourceBuilder : NSObject
{
    id <AccountContext> _accountContext;
}

@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void).cxx_destruct;
- (id)trendingObjectProviderForRailsContext:(id)arg1;
- (id)historyIndexProvider;
- (id)networkSourceWithRailsContext:(id)arg1;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1;

@end


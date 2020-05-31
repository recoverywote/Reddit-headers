//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ListingNetworkSourceDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"

@class NSArray, NSString, RedditService, SubredditsNetworkSource;

@interface AccountSubscriptionDataSource : NSObject <ListingNetworkSourceDelegate, ObjectObserverProtocol>
{
    _Bool _hasPendingUpdate;
    NSArray *_subscriptions;
    RedditService *_service;
    SubredditsNetworkSource *_subscriptionNetworkSource;
}

@property(nonatomic) _Bool hasPendingUpdate; // @synthesize hasPendingUpdate=_hasPendingUpdate;
@property(retain, nonatomic) SubredditsNetworkSource *subscriptionNetworkSource; // @synthesize subscriptionNetworkSource=_subscriptionNetworkSource;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(copy, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void).cxx_destruct;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (_Bool)listingNetworkSourceShouldFilterObject:(id)arg1;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (void)subredditSubscriptionDidChange:(id)arg1;
- (void)didChangeFavoriteStateOfSubreddit:(id)arg1 error:(id)arg2;
- (void)toggleFavoriteStateOfSubreddit:(id)arg1;
- (void)saveToCache;
- (id)cachedSubscriptions;
- (void)didLoadSubscriptions:(_Bool)arg1;
- (void)loadSubscriptionData;
@property(readonly, nonatomic) _Bool isLoading;
- (void)dealloc;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


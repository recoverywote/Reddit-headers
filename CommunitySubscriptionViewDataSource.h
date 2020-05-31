//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommunityViewDataSource.h"

#import "ListingNetworkSourceDelegate-Protocol.h"

@class NSString, SubredditsNetworkSource;

@interface CommunitySubscriptionViewDataSource : CommunityViewDataSource <ListingNetworkSourceDelegate>
{
    NSString *_fetchURLString;
    long long _thingType;
    SubredditsNetworkSource *_subscriptionNetworkSource;
}

+ (id)currentCachedSubscriptions;
@property(retain, nonatomic) SubredditsNetworkSource *subscriptionNetworkSource; // @synthesize subscriptionNetworkSource=_subscriptionNetworkSource;
@property(nonatomic) long long thingType; // @synthesize thingType=_thingType;
@property(copy, nonatomic) NSString *fetchURLString; // @synthesize fetchURLString=_fetchURLString;
- (void).cxx_destruct;
- (id)indexes;
- (void)didTapFavoriteButton:(id)arg1;
- (void)saveCurrentSubscriptionsToCache;
- (void)refreshSubscriptions;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (_Bool)listingNetworkSourceShouldFilterObject:(id)arg1;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (_Bool)tableView:(id)arg1 handleDidSelectRowAtIndexPath:(id)arg2;
- (id)viewControllerForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)sortedAndFilteredSubscriptions:(id)arg1;
- (void)sortAndReload;
@property(readonly, nonatomic) _Bool isFetchingMoreContent;
- (id)parameterForThingType:(long long)arg1;
- (void)configureWithURLString:(id)arg1;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DiscoveryUnitViewModelDataProviderDelegate-Protocol.h"
#import "ListingNetworkSourceDelegate-Protocol.h"
#import "SearchDataSource-Protocol.h"

@class NSString, RailsContext, RedditService, TrendingRailsListingNetworkSource;

@interface RailsSearchDataSource : NSObject <ListingNetworkSourceDelegate, DiscoveryUnitViewModelDataProviderDelegate, SearchDataSource>
{
    TrendingRailsListingNetworkSource *_trendingRailsListingNetworkSource;
    CDUnknownBlockType _headerContentView;
    CDUnknownBlockType _searchTabProviderBlock;
    RailsContext *_railsContext;
    RedditService *_service;
    NSString *_query;
    NSString *_analyticsPageType;
    CDUnknownBlockType _completionBlock;
}

+ (id)processedSearchQueryWithQuery:(id)arg1 withHistorySubreddit:(id)arg2 withPostFlair:(id)arg3 withCategory:(id)arg4 forTypeahead:(_Bool)arg5;
+ (_Bool)needsRailsEndpointFetchForRailsContext:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *analyticsPageType; // @synthesize analyticsPageType=_analyticsPageType;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(retain, nonatomic) RailsContext *railsContext; // @synthesize railsContext=_railsContext;
@property(copy, nonatomic) CDUnknownBlockType searchTabProviderBlock; // @synthesize searchTabProviderBlock=_searchTabProviderBlock;
@property(copy, nonatomic) CDUnknownBlockType headerContentView; // @synthesize headerContentView=_headerContentView;
@property(retain, nonatomic) TrendingRailsListingNetworkSource *trendingRailsListingNetworkSource; // @synthesize trendingRailsListingNetworkSource=_trendingRailsListingNetworkSource;
- (void).cxx_destruct;
- (void)convertToPillViewsForSearchViewController:(id)arg1 withRailsContext:(id)arg2;
- (unsigned long long)surfaceType;
- (id)valueForTemplateName:(id)arg1;
- (_Bool)discoveryUnitViewModelEnabled:(id)arg1 withDiscoveryUnit:(id)arg2;
- (id)surfaceKeyHiddenByUser;
- (id)createViewModelForDiscoveryUnit:(id)arg1;
- (_Bool)shouldFetchDiscoveryUnit:(id)arg1;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (void)fetchDataForSearchViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithRedditService:(id)arg1 railsContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


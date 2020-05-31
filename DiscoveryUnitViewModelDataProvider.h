//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataProvider-Protocol.h"

@class DiscoveryLayout, DiscoverySurface, DiscoveryUnitFetcher, ListingDistributor, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, NSUUID, RedditService;
@protocol DiscoveryUnitViewModelDataProviderDelegate;

@interface DiscoveryUnitViewModelDataProvider : NSObject <DataProvider>
{
    _Bool _isFetched;
    _Bool _insertSeparators;
    _Bool _deduplication;
    NSMutableDictionary *_discoveryUnitViewModels;
    DiscoverySurface *_discoverySurface;
    NSString *_sectionIdentifier;
    RedditService *_service;
    NSObject<DiscoveryUnitViewModelDataProviderDelegate> *_delegate;
    NSMutableDictionary *_unitsToFetch;
    NSMutableArray *_discoveryUnitViewModelsToFetch;
    ListingDistributor *_discoveryUnitViewModelDistributor;
    NSUUID *_fetchToken;
    NSHashTable *_loadedDiscoveryUnitViewModels;
    DiscoveryUnitFetcher *_discoveryUnitFetcher;
    DiscoveryLayout *_calculatedLayout;
    CDUnknownBlockType _preprocessObjectsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType preprocessObjectsBlock; // @synthesize preprocessObjectsBlock=_preprocessObjectsBlock;
@property(retain, nonatomic) DiscoveryLayout *calculatedLayout; // @synthesize calculatedLayout=_calculatedLayout;
@property(retain, nonatomic) DiscoveryUnitFetcher *discoveryUnitFetcher; // @synthesize discoveryUnitFetcher=_discoveryUnitFetcher;
@property(retain) NSHashTable *loadedDiscoveryUnitViewModels; // @synthesize loadedDiscoveryUnitViewModels=_loadedDiscoveryUnitViewModels;
@property(retain) NSUUID *fetchToken; // @synthesize fetchToken=_fetchToken;
@property(retain) ListingDistributor *discoveryUnitViewModelDistributor; // @synthesize discoveryUnitViewModelDistributor=_discoveryUnitViewModelDistributor;
@property(retain, nonatomic) NSMutableArray *discoveryUnitViewModelsToFetch; // @synthesize discoveryUnitViewModelsToFetch=_discoveryUnitViewModelsToFetch;
@property(retain) NSMutableDictionary *unitsToFetch; // @synthesize unitsToFetch=_unitsToFetch;
@property __weak NSObject<DiscoveryUnitViewModelDataProviderDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(retain, nonatomic) DiscoverySurface *discoverySurface; // @synthesize discoverySurface=_discoverySurface;
@property(nonatomic) _Bool deduplication; // @synthesize deduplication=_deduplication;
@property(nonatomic) _Bool insertSeparators; // @synthesize insertSeparators=_insertSeparators;
@property(nonatomic) _Bool isFetched; // @synthesize isFetched=_isFetched;
@property(retain, nonatomic) NSMutableDictionary *discoveryUnitViewModels; // @synthesize discoveryUnitViewModels=_discoveryUnitViewModels;
- (void).cxx_destruct;
- (_Bool)isDiscoveryUnitEnabled:(id)arg1;
- (void)exposeForDiscoveryUnit:(id)arg1;
- (void)logFetchedDiscoveryUnitViewModels:(id)arg1;
- (id)generateDiscoveryUnitViewModelDistributor;
- (id)spacedDiscoveryUnitViewModels:(id)arg1;
- (id)createDiscoveryUnitViewModelIfNeededForDiscoveryUnit:(id)arg1;
- (void)fetchDiscoveryUnitViewModelsWithDiscoveryUnitViewModelIndices:(id)arg1 currentObjects:(id)arg2 fromIndex:(long long)arg3 trace:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)processObjects:(id)arg1 currentCount:(long long)arg2;
- (id)applyAwayFromAdsRuleForObjects:(id)arg1 range:(struct _NSRange)arg2;
- (id)distributedObjects:(id)arg1 currentCount:(long long)arg2;
- (void)fetchFromCurrentObjects:(id)arg1 fetchingMore:(_Bool)arg2 pageSize:(long long)arg3 trace:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)reset;
- (void)invalidate;
- (id)initWithService:(id)arg1 dataProviderDelegate:(id)arg2;
- (id)initWithService:(id)arg1 dataProviderDelegate:(id)arg2 preprocessObjectsBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


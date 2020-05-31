//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class ListingAnalyticsLogger, NSArray, NSDictionary, NSError, NSString, NSUUID, RedditService;
@protocol ListingNetworkSourceDelegate, OS_dispatch_queue;

@interface ListingNetworkSource : NSObject <NSCopying>
{
    _Bool _hasFinishedFirstFetch;
    _Bool _hasFinishedFirstSuccessfulFetch;
    _Bool _isFetching;
    _Bool _isFetchingMore;
    _Bool _manualFetch;
    _Bool _ignoreNetworkError;
    RedditService *_service;
    NSObject<OS_dispatch_queue> *_parsingQueue;
    NSObject<ListingNetworkSourceDelegate> *_delegate;
    NSString *_fetchURLString;
    NSError *_lastError;
    ListingAnalyticsLogger *_analyticsLogger;
    NSDictionary *_parameters;
    NSArray *_objects;
    NSString *_afterID;
    NSString *_beforeID;
    NSDictionary *_paginationData;
    NSArray *_dataProviders;
    NSUUID *_parentCorrelationId;
    NSString *_tracingLabelOverride;
}

@property(retain, nonatomic) NSString *tracingLabelOverride; // @synthesize tracingLabelOverride=_tracingLabelOverride;
@property(retain, nonatomic) NSUUID *parentCorrelationId; // @synthesize parentCorrelationId=_parentCorrelationId;
@property(copy, nonatomic) NSArray *dataProviders; // @synthesize dataProviders=_dataProviders;
@property(copy, nonatomic) NSDictionary *paginationData; // @synthesize paginationData=_paginationData;
@property(copy, nonatomic) NSString *beforeID; // @synthesize beforeID=_beforeID;
@property(copy, nonatomic) NSString *afterID; // @synthesize afterID=_afterID;
@property(copy) NSArray *objects; // @synthesize objects=_objects;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool ignoreNetworkError; // @synthesize ignoreNetworkError=_ignoreNetworkError;
@property(nonatomic) __weak ListingAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) _Bool manualFetch; // @synthesize manualFetch=_manualFetch;
@property(nonatomic) _Bool isFetchingMore; // @synthesize isFetchingMore=_isFetchingMore;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(copy, nonatomic) NSString *fetchURLString; // @synthesize fetchURLString=_fetchURLString;
@property(nonatomic) _Bool hasFinishedFirstSuccessfulFetch; // @synthesize hasFinishedFirstSuccessfulFetch=_hasFinishedFirstSuccessfulFetch;
@property(nonatomic) _Bool hasFinishedFirstFetch; // @synthesize hasFinishedFirstFetch=_hasFinishedFirstFetch;
@property __weak NSObject<ListingNetworkSourceDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *parsingQueue; // @synthesize parsingQueue=_parsingQueue;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)notifyWillFetchDataForDataProvider:(id)arg1 correlationId:(id)arg2 parentId:(id)arg3;
- (void)notifyDataProviderParentDidFetchDataWithParentId:(id)arg1;
- (_Bool)shouldPostNotifications;
- (id)tags;
- (void)fetchDataWithParameters:(id)arg1 correlationId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)processObjects:(id)arg1 currentCount:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)removeObject:(id)arg1;
- (void)removeObjects:(id)arg1;
- (id)paginationStringForKey:(id)arg1;
@property(readonly, nonatomic) NSString *beforePaginationString;
@property(readonly, nonatomic) NSString *afterPaginationString;
- (id)debugDescription;
- (id)dynamicParameters;
@property(readonly, copy, nonatomic) NSDictionary *defaultParameters;
@property(readonly, nonatomic) _Bool hasMoreContent;
- (void)fetchListingDataWithParameters:(id)arg1 correlationId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)requestForParameters:(id)arg1;
@property(readonly, nonatomic) _Bool shouldProcessURLs;
- (void)fetchMoreData;
@property(readonly, nonatomic) _Bool shouldFetchMoreData;
- (void)fetchData;
- (void)parseMoreData:(id)arg1;
- (void)parseData:(id)arg1;
- (void)invalidate;
- (id)initWithService:(id)arg1 fetchURLString:(id)arg2 parameters:(id)arg3;
- (id)initWithService:(id)arg1 fetchURLString:(id)arg2;
- (id)initWithService:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


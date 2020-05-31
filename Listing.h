//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString, PageInfo, RedditService;

@interface Listing : NSObject <NSCopying>
{
    _Bool _isFetching;
    _Bool _didLastFetchFail;
    NSArray *_objects;
    long long _pageSize;
    PageInfo *_pageInfo;
    RedditService *_service;
    NSString *_queryName;
    NSDictionary *_variables;
    NSString *_resourceKeyPath;
    CDUnknownBlockType _parseObjectBlock;
}

+ (id)keyPathsForValuesAffectingHasFetched;
+ (id)keyPathsForValuesAffectingHasNextPage;
@property(copy, nonatomic) CDUnknownBlockType parseObjectBlock; // @synthesize parseObjectBlock=_parseObjectBlock;
@property(copy, nonatomic) NSString *resourceKeyPath; // @synthesize resourceKeyPath=_resourceKeyPath;
@property(copy, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(copy, nonatomic) NSString *queryName; // @synthesize queryName=_queryName;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(retain, nonatomic) PageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) _Bool didLastFetchFail; // @synthesize didLastFetchFail=_didLastFetchFail;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)notifyParseEndWithCorrelationId:(id)arg1;
- (void)notifyParseStartWithCorrelationId:(id)arg1;
- (void)notifyFetchEndWithCorrelationId:(id)arg1 elapsedTime:(double)arg2;
- (void)notifyFetchStartWithCorrelationId:(id)arg1 request:(id)arg2;
@property(readonly, nonatomic) _Bool hasFetched;
@property(readonly, nonatomic) _Bool hasNextPage;
- (id)parsePageInfo:(id)arg1;
- (void)fetchNextPageWithCorrelationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNextPage:(CDUnknownBlockType)arg1;
- (id)clone;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithService:(id)arg1 queryName:(id)arg2 variables:(id)arg3 resourceKeyPath:(id)arg4 parseObjectBlock:(CDUnknownBlockType)arg5;

@end


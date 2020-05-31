//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Channel, NSArray, RedditService;
@protocol ChannelHistorySourceDelegate;

@interface ChannelHistorySource : NSObject
{
    _Bool _hasFinishedFirstFetch;
    _Bool _hasFinishedFirstSuccessfulFetch;
    _Bool _noMoreData;
    _Bool _isFetching;
    _Bool _isCancelled;
    NSArray *_objects;
    id <ChannelHistorySourceDelegate> _delegate;
    Channel *_channel;
    RedditService *_service;
}

@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
@property(nonatomic) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
@property(nonatomic) _Bool hasFinishedFirstSuccessfulFetch; // @synthesize hasFinishedFirstSuccessfulFetch=_hasFinishedFirstSuccessfulFetch;
@property(nonatomic) _Bool hasFinishedFirstFetch; // @synthesize hasFinishedFirstFetch=_hasFinishedFirstFetch;
@property(nonatomic) __weak id <ChannelHistorySourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (id)sortedMessages:(id)arg1;
- (id)mergeNewObjects:(id)arg1;
- (void)markEarliestMessage:(id)arg1;
- (_Bool)shouldMergeMessages:(id)arg1;
- (_Bool)historyContainsMessage:(id)arg1;
- (void)removeObjectsWithIds:(id)arg1;
- (void)removeObjectsWithId:(long long)arg1;
- (void)removeObject:(id)arg1;
- (void)insertNewObject:(id)arg1;
- (void)fetchMoreHistory;
- (void)fetchData;
- (void)cancelLoading;
- (void)configureWithChannel:(id)arg1;
- (id)initWithService:(id)arg1;

@end


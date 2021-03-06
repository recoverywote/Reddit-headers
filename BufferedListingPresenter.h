//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingPresenter.h"

#import "ListingViewBatchUpdateProtocol-Protocol.h"
#import "LiveNetworkSourceDelegate-Protocol.h"

@class ListingBuffer, NSArray, NSMutableArray, NSString, NSTimer;
@protocol BufferedListingPresentable;

@interface BufferedListingPresenter : ListingPresenter <LiveNetworkSourceDelegate, ListingViewBatchUpdateProtocol>
{
    _Bool _flushing;
    _Bool _isCurrentQueueBusy;
    NSMutableArray *_currentUpdateQueue;
    ListingBuffer *_listingBuffer;
    double _queueBufferTime;
    NSTimer *_bufferTimer;
    NSArray *_dataSourceObjects;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCurrentQueueBusy; // @synthesize isCurrentQueueBusy=_isCurrentQueueBusy;
@property(copy, nonatomic) NSArray *dataSourceObjects; // @synthesize dataSourceObjects=_dataSourceObjects;
@property(retain, nonatomic) NSTimer *bufferTimer; // @synthesize bufferTimer=_bufferTimer;
@property(nonatomic) _Bool flushing; // @synthesize flushing=_flushing;
@property(nonatomic) double queueBufferTime; // @synthesize queueBufferTime=_queueBufferTime;
@property(retain, nonatomic) ListingBuffer *listingBuffer; // @synthesize listingBuffer=_listingBuffer;
@property(retain, nonatomic) NSMutableArray *currentUpdateQueue; // @synthesize currentUpdateQueue=_currentUpdateQueue;
- (id)currentObjects;
@property(readonly, nonatomic) unsigned long long bufferedSectionIndex;
- (void)liveNetworkSource:(id)arg1 didParseEmbedForUpdate:(id)arg2;
- (void)updateContentViewsWhenLoadingMoreFinishes;
- (void)updateContentViewsWhenReloadFinishes;
- (void)triggerDeferredViewUpdates;
- (void)queueNewObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadDataSafelyWithObjects:(id)arg1 objectCompletion:(CDUnknownBlockType)arg2;
- (void)reloadDataSafelyWithCompletion:(CDUnknownBlockType)arg1;
- (void)markQueueAsFreeAndTriggerNextUpdate;
- (void)stopBufferTimer;
- (void)startBufferTimer;
- (void)flushBufferObjects;
- (void)commitBuffer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <BufferedListingPresentable> presentable; // @dynamic presentable;
@property(readonly) Class superclass;

@end


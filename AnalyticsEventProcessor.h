//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASIdentifierManager, Account, AnalyticsAPIClient, NSDate, NSNotificationCenter, NSString, PersistedSet, RedditService, SessionTracker;
@protocol AnalyticsProcessorDelegate, OS_dispatch_queue;

@interface AnalyticsEventProcessor : NSObject
{
    _Bool _isProcessingPendingEvents;
    _Bool _isSendingEvents;
    id <AnalyticsProcessorDelegate> _delegate;
    PersistedSet *_eventsSet;
    NSNotificationCenter *_notificationCenter;
    NSString *_referrerUrlString;
    NSString *_referrerDomain;
    ASIdentifierManager *_adSupportManager;
    long long _eventBatchSize;
    double _backoffSeconds;
    NSDate *_backoffTimestamp;
    NSObject<OS_dispatch_queue> *_queue;
    AnalyticsAPIClient *_apiClient;
    PersistedSet *_pendingEventsSet;
    SessionTracker *_sessionTracker;
}

@property(readonly, nonatomic) SessionTracker *sessionTracker; // @synthesize sessionTracker=_sessionTracker;
@property(readonly, nonatomic) PersistedSet *pendingEventsSet; // @synthesize pendingEventsSet=_pendingEventsSet;
@property(readonly, nonatomic) AnalyticsAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool isSendingEvents; // @synthesize isSendingEvents=_isSendingEvents;
@property(retain) NSDate *backoffTimestamp; // @synthesize backoffTimestamp=_backoffTimestamp;
@property double backoffSeconds; // @synthesize backoffSeconds=_backoffSeconds;
@property long long eventBatchSize; // @synthesize eventBatchSize=_eventBatchSize;
@property(nonatomic) _Bool isProcessingPendingEvents; // @synthesize isProcessingPendingEvents=_isProcessingPendingEvents;
@property(retain, nonatomic) ASIdentifierManager *adSupportManager; // @synthesize adSupportManager=_adSupportManager;
@property(copy) NSString *referrerDomain; // @synthesize referrerDomain=_referrerDomain;
@property(copy) NSString *referrerUrlString; // @synthesize referrerUrlString=_referrerUrlString;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) PersistedSet *eventsSet; // @synthesize eventsSet=_eventsSet;
@property(nonatomic) __weak id <AnalyticsProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateWithReferrerUrlString:(id)arg1 referrerDomain:(id)arg2;
- (id)analyticsNameForTheme:(id)arg1;
- (id)analyticsNameForFontContentSize:(id)arg1;
- (void)addCommonPayload:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)handleError:(id)arg1 statusCode:(long long)arg2 sendingEvents:(id)arg3;
- (void)incrementBackoff;
- (void)sendEventsToServerUsingBackgroundTask:(unsigned long long)arg1;
- (void)requeuePendingEvent:(id)arg1;
- (void)updateSessionIdForEvent:(id)arg1;
@property(readonly, nonatomic) NSString *backgroundTaskName;
@property(readonly, nonatomic) Account *account;
@property(readonly, nonatomic) RedditService *redditService;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (void)endBackgroundTask:(unsigned long long)arg1;
- (unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (void)sendEventsToServer;
- (void)flushPendingEvents;
- (void)processEvents;
- (void)startHeartbeat;
- (id)initWithEventsSet:(id)arg1 pendingEventsSet:(id)arg2 apiClient:(id)arg3 redditSession:(id)arg4 notificationCenter:(id)arg5 adSupportManager:(id)arg6;

@end


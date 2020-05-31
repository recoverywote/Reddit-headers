//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSMutableSet, PINRemoteLock;

@interface PINRemoteImageDownloadQueue : NSObject
{
    PINRemoteLock *_lock;
    NSMutableOrderedSet *_highPriorityQueuedOperations;
    NSMutableOrderedSet *_defaultPriorityQueuedOperations;
    NSMutableOrderedSet *_lowPriorityQueuedOperations;
    NSMutableSet *_runningTasks;
    unsigned long long _maxNumberOfConcurrentDownloads;
}

+ (id)queueWithMaxConcurrentDownloads:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)setQueuePriority:(unsigned long long)arg1 forTask:(id)arg2 addIfNecessary:(_Bool)arg3;
- (void)setQueuePriority:(unsigned long long)arg1 forTask:(id)arg2;
- (_Bool)removeDownloadTaskFromQueue:(id)arg1;
- (void)scheduleDownloadsIfNeeded;
- (id)addDownloadWithSessionManager:(id)arg1 request:(id)arg2 priority:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) unsigned long long maxNumberOfConcurrentDownloads; // @synthesize maxNumberOfConcurrentDownloads=_maxNumberOfConcurrentDownloads;
- (id)initWithMaxConcurrentDownloads:(unsigned long long)arg1;

@end


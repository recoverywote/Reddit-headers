//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ASMainSerialQueue : NSObject
{
    // Error parsing type: {Mutex="_recursive"B""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_m"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]})}, name: _serialQueueLock
    NSMutableArray *_blocks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)runBlocks;
- (void)performBlockOnMainThread:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long numberOfScheduledBlocks;
- (id)init;

@end


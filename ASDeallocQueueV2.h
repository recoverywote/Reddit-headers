//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDeallocQueue.h>

@interface ASDeallocQueueV2 : ASDeallocQueue
{
    struct vector<const void *, std::__1::allocator<const void *>> _queue;
    // Error parsing type: {Mutex="_recursive"B""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_m"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]})}, name: _lock
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drain;
- (void)releaseObjectInBackground:(id *)arg1;
- (void)dealloc;

@end


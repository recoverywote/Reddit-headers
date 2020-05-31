//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL, NSURLSessionTask;

@interface ASBasicImageDownloaderContext : NSObject
{
    _Bool _invalid;
    // Error parsing type: {RecursiveMutex="_recursive"B""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_m"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]})}, name: __instanceLock__
    NSURL *_URL;
    NSURLSessionTask *_sessionTask;
    NSMutableArray *_callbackDatas;
}

+ (void)cancelContextWithURL:(id)arg1;
+ (id)contextForURL:(id)arg1;
@property(retain, nonatomic) NSMutableArray *callbackDatas; // @synthesize callbackDatas=_callbackDatas;
@property(nonatomic) __weak NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createSessionTaskIfNecessaryWithBlock:(CDUnknownBlockType)arg1;
- (void)completeWithImage:(id)arg1 error:(id)arg2;
- (void)performProgressBlocks:(double)arg1;
- (void)addCallbackData:(id)arg1;
- (_Bool)isCancelled;
- (void)cancel;
- (id)initWithURL:(id)arg1;

@end


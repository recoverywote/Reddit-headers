//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSObject, NSRunLoop;
@protocol OS_dispatch_group;

@interface SendBird_SRRunLoopThread : NSThread
{
    NSObject<OS_dispatch_group> *_waitGroup;
    NSRunLoop *_runLoop;
}

+ (id)sharedThread;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void).cxx_destruct;
- (void)main;
- (id)init;

@end


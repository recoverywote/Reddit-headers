//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASConfiguration;
@protocol OS_dispatch_queue;

@interface ASConfigurationManager : NSObject
{
    ASConfiguration *_config;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    // Error parsing type: AQ, name: _activatedExperiments
}

+ (void)test_resetWithConfiguration:(id)arg1;
+ (id)defaultConfiguration;
+ (void *)sharedInstance;
- (void).cxx_destruct;
- (_Bool)activateExperimentalFeature:(unsigned long long)arg1;
- (id)init;

@end


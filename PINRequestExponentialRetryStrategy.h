//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PINRemoteImage/PINRequestRetryStrategy-Protocol.h>

@interface PINRequestExponentialRetryStrategy : NSObject <PINRequestRetryStrategy>
{
    int _retryMaxCount;
    int _retryCount;
    int _delayBase;
}

+ (_Bool)retriableError:(id)arg1;
@property(nonatomic) int delayBase; // @synthesize delayBase=_delayBase;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) int retryMaxCount; // @synthesize retryMaxCount=_retryMaxCount;
- (void)incrementRetryCount;
- (int)nextDelay;
- (_Bool)shouldRetryWithError:(id)arg1;
- (int)numberOfRetries;
- (id)initWithRetryMaxCount:(int)arg1 delayBase:(int)arg2;

@end


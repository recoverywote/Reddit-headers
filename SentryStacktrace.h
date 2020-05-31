//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sentry/SentrySerializable-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SentryStacktrace : NSObject <SentrySerializable>
{
    NSArray *_frames;
    NSDictionary *_registers;
}

@property(retain, nonatomic) NSDictionary *registers; // @synthesize registers=_registers;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
- (void).cxx_destruct;
- (id)serialize;
- (void)fixDuplicateFrames;
- (id)initWithFrames:(id)arg1 registers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

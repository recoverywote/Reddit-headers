//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/BaseStoreObservation-Protocol.h>

@class NSString;

@interface BaseStoreObservation : NSObject <BaseStoreObservation>
{
    NSString *_identifier;
    CDUnknownBlockType _observer;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType observer; // @synthesize observer=_observer;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 observer:(CDUnknownBlockType)arg2;

@end


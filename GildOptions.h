//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GildOptions : NSObject
{
    _Bool _isAnonymous;
    _Bool _isWithCoinsPurchase;
    NSString *_awardId;
    NSString *_message;
}

@property(readonly, nonatomic) _Bool isWithCoinsPurchase; // @synthesize isWithCoinsPurchase=_isWithCoinsPurchase;
@property(readonly, nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *awardId; // @synthesize awardId=_awardId;
- (void).cxx_destruct;
- (id)gildInputWithNodeId:(id)arg1 correlationId:(id)arg2;
- (id)networkParameters;
- (id)initWithAwardId:(id)arg1 message:(id)arg2 isAnonymous:(_Bool)arg3 isWithCoinsPurchase:(_Bool)arg4;

@end


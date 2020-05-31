//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Branch/BNCServerRequest.h>

@class NSString;

@interface BranchCreditHistoryRequest : BNCServerRequest
{
    CDUnknownBlockType _callback;
    NSString *_bucket;
    NSString *_creditTransactionId;
    long long _length;
    unsigned long long _order;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSString *creditTransactionId; // @synthesize creditTransactionId=_creditTransactionId;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)processResponse:(id)arg1 error:(id)arg2;
- (void)makeRequest:(id)arg1 key:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initWithBucket:(id)arg1 creditTransactionId:(id)arg2 length:(long long)arg3 order:(unsigned long long)arg4 callback:(CDUnknownBlockType)arg5;

@end


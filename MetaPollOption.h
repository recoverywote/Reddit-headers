//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MetaPollOption : NSObject
{
    long long _optionId;
    NSString *_text;
    long long _order;
}

@property(readonly, nonatomic) long long order; // @synthesize order=_order;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long optionId; // @synthesize optionId=_optionId;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGProfileProtocol-Protocol.h>

@class NSDate, NSString;

@interface IBGBattery : NSObject <IBGProfileProtocol>
{
    _Bool _isPlugged;
    double _percentage;
    NSDate *_date;
}

@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool isPlugged; // @synthesize isPlugged=_isPlugged;
@property(nonatomic) double percentage; // @synthesize percentage=_percentage;
- (void).cxx_destruct;
- (id)profileDataDate;
- (id)toDictionaryWithTime:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


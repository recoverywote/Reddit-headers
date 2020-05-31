//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSDictionary, NSString;

@interface BranchEvent : NSObject
{
    NSString *_alias;
    NSString *_transactionID;
    NSString *_currency;
    NSDecimalNumber *_revenue;
    NSDecimalNumber *_shipping;
    NSDecimalNumber *_tax;
    NSString *_coupon;
    NSString *_affiliation;
    NSString *_eventDescription;
    NSString *_searchQuery;
    long long _adType;
    NSArray *_contentItems;
    NSDictionary *_customData;
    NSString *_eventName;
}

+ (id)standardEvents;
+ (id)customEventWithName:(id)arg1 contentItem:(id)arg2;
+ (id)customEventWithName:(id)arg1;
+ (id)standardEvent:(id)arg1 withContentItem:(id)arg2;
+ (id)standardEvent:(id)arg1;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(copy, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(retain, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) NSString *eventDescription; // @synthesize eventDescription=_eventDescription;
@property(retain, nonatomic) NSString *affiliation; // @synthesize affiliation=_affiliation;
@property(retain, nonatomic) NSString *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) NSDecimalNumber *tax; // @synthesize tax=_tax;
@property(retain, nonatomic) NSDecimalNumber *shipping; // @synthesize shipping=_shipping;
@property(retain, nonatomic) NSDecimalNumber *revenue; // @synthesize revenue=_revenue;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (void).cxx_destruct;
- (id)description;
- (id)buildEventDictionary;
- (id)buildRequestWithEventDictionary:(id)arg1;
- (void)logEvent;
- (id)dictionary;
- (id)jsonStringForAdType:(long long)arg1;
- (id)initWithName:(id)arg1;

@end


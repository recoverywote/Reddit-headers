//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface Award : NSObject
{
    _Bool _isNew;
    NSString *_identifier;
    NSString *_name;
    long long _awardType;
    long long _awardSubType;
    NSArray *_awardIcons;
    NSNumber *_coinPrice;
    NSNumber *_daysOfPremium;
    NSString *_awardDescription;
    NSDate *_endDate;
}

+ (id)awardIconsResolutionsGraphQLKeys;
+ (id)awardIconsResolutions;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSString *awardDescription; // @synthesize awardDescription=_awardDescription;
@property(readonly, nonatomic) NSNumber *daysOfPremium; // @synthesize daysOfPremium=_daysOfPremium;
@property(readonly, nonatomic) NSNumber *coinPrice; // @synthesize coinPrice=_coinPrice;
@property(readonly, nonatomic) NSArray *awardIcons; // @synthesize awardIcons=_awardIcons;
@property(readonly, nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(readonly, nonatomic) long long awardSubType; // @synthesize awardSubType=_awardSubType;
@property(readonly, nonatomic) long long awardType; // @synthesize awardType=_awardType;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)mediaSourceForAwardIconSize:(long long)arg1;
- (id)initWithGraphQLData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 awardIcons:(id)arg3 awardType:(long long)arg4 awardSubType:(long long)arg5 isNewAward:(_Bool)arg6 coinPrice:(id)arg7 daysOfPremium:(id)arg8 awardDescription:(id)arg9 endDate:(id)arg10;

@end

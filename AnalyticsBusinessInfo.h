//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsBusinessInfo : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _nameIsSet;
    _Bool _industryIsSet;
    _Bool _subverticalIsSet;
    _Bool _countryIsSet;
    NSString *_name;
    NSString *_industry;
    NSString *_subvertical;
    NSString *_country;
}

@property(nonatomic) _Bool countryIsSet; // @synthesize countryIsSet=_countryIsSet;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) _Bool subverticalIsSet; // @synthesize subverticalIsSet=_subverticalIsSet;
@property(copy, nonatomic) NSString *subvertical; // @synthesize subvertical=_subvertical;
@property(nonatomic) _Bool industryIsSet; // @synthesize industryIsSet=_industryIsSet;
@property(copy, nonatomic) NSString *industry; // @synthesize industry=_industry;
@property(nonatomic) _Bool nameIsSet; // @synthesize nameIsSet=_nameIsSet;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetCountry;
- (void)unsetSubvertical;
- (void)unsetIndustry;
- (void)unsetName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 industry:(id)arg2 subvertical:(id)arg3 country:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


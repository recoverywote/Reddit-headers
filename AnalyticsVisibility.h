//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface AnalyticsVisibility : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _seen;
    _Bool _seenIsSet;
    _Bool _seen_itemsIsSet;
    _Bool _number_itemsIsSet;
    _Bool _number_seen_itemsIsSet;
    _Bool _number_scrolled_pagesIsSet;
    _Bool _on_screen_timestampIsSet;
    _Bool _off_screen_timestampIsSet;
    NSMutableArray *_seen_items;
    long long _number_items;
    long long _number_seen_items;
    long long _number_scrolled_pages;
    long long _on_screen_timestamp;
    long long _off_screen_timestamp;
}

@property(nonatomic) _Bool off_screen_timestampIsSet; // @synthesize off_screen_timestampIsSet=_off_screen_timestampIsSet;
@property(nonatomic) long long off_screen_timestamp; // @synthesize off_screen_timestamp=_off_screen_timestamp;
@property(nonatomic) _Bool on_screen_timestampIsSet; // @synthesize on_screen_timestampIsSet=_on_screen_timestampIsSet;
@property(nonatomic) long long on_screen_timestamp; // @synthesize on_screen_timestamp=_on_screen_timestamp;
@property(nonatomic) _Bool number_scrolled_pagesIsSet; // @synthesize number_scrolled_pagesIsSet=_number_scrolled_pagesIsSet;
@property(nonatomic) long long number_scrolled_pages; // @synthesize number_scrolled_pages=_number_scrolled_pages;
@property(nonatomic) _Bool number_seen_itemsIsSet; // @synthesize number_seen_itemsIsSet=_number_seen_itemsIsSet;
@property(nonatomic) long long number_seen_items; // @synthesize number_seen_items=_number_seen_items;
@property(nonatomic) _Bool number_itemsIsSet; // @synthesize number_itemsIsSet=_number_itemsIsSet;
@property(nonatomic) long long number_items; // @synthesize number_items=_number_items;
@property(nonatomic) _Bool seen_itemsIsSet; // @synthesize seen_itemsIsSet=_seen_itemsIsSet;
@property(retain, nonatomic) NSMutableArray *seen_items; // @synthesize seen_items=_seen_items;
@property(nonatomic) _Bool seenIsSet; // @synthesize seenIsSet=_seenIsSet;
@property(nonatomic) _Bool seen; // @synthesize seen=_seen;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetOff_screen_timestamp;
- (void)unsetOn_screen_timestamp;
- (void)unsetNumber_scrolled_pages;
- (void)unsetNumber_seen_items;
- (void)unsetNumber_items;
- (void)unsetSeen_items;
- (void)unsetSeen;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeen:(_Bool)arg1 seen_items:(id)arg2 number_items:(long long)arg3 number_seen_items:(long long)arg4 number_scrolled_pages:(long long)arg5 on_screen_timestamp:(long long)arg6 off_screen_timestamp:(long long)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


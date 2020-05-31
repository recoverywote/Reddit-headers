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

@interface AnalyticsThirdPartyBadge : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _titleIsSet;
    _Bool _target_user_idIsSet;
    NSString *_id;
    NSString *_title;
    NSString *_target_user_id;
}

@property(nonatomic) _Bool target_user_idIsSet; // @synthesize target_user_idIsSet=_target_user_idIsSet;
@property(copy, nonatomic) NSString *target_user_id; // @synthesize target_user_id=_target_user_id;
@property(nonatomic) _Bool titleIsSet; // @synthesize titleIsSet=_titleIsSet;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetTarget_user_id;
- (void)unsetTitle;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 title:(id)arg2 target_user_id:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


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

@interface AnalyticsReddarTicketContent : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _reported_urlIsSet;
    _Bool _target_idIsSet;
    _Bool _target_typeIsSet;
    _Bool _statusIsSet;
    _Bool _status_reasonIsSet;
    _Bool _post_nsfw;
    _Bool _post_nsfwIsSet;
    _Bool _removed_by_moderator;
    _Bool _removed_by_moderatorIsSet;
    _Bool _content_typeIsSet;
    _Bool _target_created_timestampIsSet;
    NSString *_id;
    NSString *_reported_url;
    NSString *_target_id;
    NSString *_target_type;
    NSString *_status;
    NSString *_status_reason;
    NSString *_content_type;
    long long _target_created_timestamp;
}

@property(nonatomic) _Bool target_created_timestampIsSet; // @synthesize target_created_timestampIsSet=_target_created_timestampIsSet;
@property(nonatomic) long long target_created_timestamp; // @synthesize target_created_timestamp=_target_created_timestamp;
@property(nonatomic) _Bool content_typeIsSet; // @synthesize content_typeIsSet=_content_typeIsSet;
@property(copy, nonatomic) NSString *content_type; // @synthesize content_type=_content_type;
@property(nonatomic) _Bool removed_by_moderatorIsSet; // @synthesize removed_by_moderatorIsSet=_removed_by_moderatorIsSet;
@property(nonatomic) _Bool removed_by_moderator; // @synthesize removed_by_moderator=_removed_by_moderator;
@property(nonatomic) _Bool post_nsfwIsSet; // @synthesize post_nsfwIsSet=_post_nsfwIsSet;
@property(nonatomic) _Bool post_nsfw; // @synthesize post_nsfw=_post_nsfw;
@property(nonatomic) _Bool status_reasonIsSet; // @synthesize status_reasonIsSet=_status_reasonIsSet;
@property(copy, nonatomic) NSString *status_reason; // @synthesize status_reason=_status_reason;
@property(nonatomic) _Bool statusIsSet; // @synthesize statusIsSet=_statusIsSet;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) _Bool target_typeIsSet; // @synthesize target_typeIsSet=_target_typeIsSet;
@property(copy, nonatomic) NSString *target_type; // @synthesize target_type=_target_type;
@property(nonatomic) _Bool target_idIsSet; // @synthesize target_idIsSet=_target_idIsSet;
@property(copy, nonatomic) NSString *target_id; // @synthesize target_id=_target_id;
@property(nonatomic) _Bool reported_urlIsSet; // @synthesize reported_urlIsSet=_reported_urlIsSet;
@property(copy, nonatomic) NSString *reported_url; // @synthesize reported_url=_reported_url;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetTarget_created_timestamp;
- (void)unsetContent_type;
- (void)unsetRemoved_by_moderator;
- (void)unsetPost_nsfw;
- (void)unsetStatus_reason;
- (void)unsetStatus;
- (void)unsetTarget_type;
- (void)unsetTarget_id;
- (void)unsetReported_url;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 reported_url:(id)arg2 target_id:(id)arg3 target_type:(id)arg4 status:(id)arg5 status_reason:(id)arg6 post_nsfw:(_Bool)arg7 removed_by_moderator:(_Bool)arg8 content_type:(id)arg9 target_created_timestamp:(long long)arg10;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


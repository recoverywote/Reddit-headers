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

@interface AnalyticsChat : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _blocked_user_idIsSet;
    _Bool _idIsSet;
    _Bool _typeIsSet;
    _Bool _existing_channel;
    _Bool _existing_channelIsSet;
    _Bool _image_upload_methodIsSet;
    _Bool _user_added_methodIsSet;
    _Bool _invitation_idIsSet;
    _Bool _invitation_typeIsSet;
    _Bool _membersIsSet;
    _Bool _invitation_preview_typeIsSet;
    _Bool _message_typeIsSet;
    _Bool _number_channelsIsSet;
    _Bool _number_pending_invitesIsSet;
    _Bool _number_membersIsSet;
    _Bool _number_unreadsIsSet;
    _Bool _reported_user_idIsSet;
    _Bool _sender_user_idIsSet;
    _Bool _invitation_timestampIsSet;
    _Bool _message_lengthIsSet;
    _Bool _recipient_user_idIsSet;
    _Bool _number_blocked_usersIsSet;
    _Bool _request_nameIsSet;
    _Bool _is_member;
    _Bool _is_memberIsSet;
    _Bool _shown_history;
    _Bool _shown_historyIsSet;
    _Bool _message_idIsSet;
    _Bool _report_reasonIsSet;
    _Bool _message_bodyIsSet;
    _Bool _channel_nameIsSet;
    NSString *_blocked_user_id;
    NSString *_id;
    NSString *_type;
    NSString *_image_upload_method;
    NSString *_user_added_method;
    NSString *_invitation_id;
    NSString *_invitation_type;
    NSMutableArray *_members;
    NSString *_invitation_preview_type;
    NSString *_message_type;
    long long _number_channels;
    long long _number_pending_invites;
    long long _number_members;
    long long _number_unreads;
    NSString *_reported_user_id;
    NSString *_sender_user_id;
    long long _invitation_timestamp;
    long long _message_length;
    NSString *_recipient_user_id;
    long long _number_blocked_users;
    NSString *_request_name;
    long long _message_id;
    NSString *_report_reason;
    NSString *_message_body;
    NSString *_channel_name;
}

@property(nonatomic) _Bool channel_nameIsSet; // @synthesize channel_nameIsSet=_channel_nameIsSet;
@property(copy, nonatomic) NSString *channel_name; // @synthesize channel_name=_channel_name;
@property(nonatomic) _Bool message_bodyIsSet; // @synthesize message_bodyIsSet=_message_bodyIsSet;
@property(copy, nonatomic) NSString *message_body; // @synthesize message_body=_message_body;
@property(nonatomic) _Bool report_reasonIsSet; // @synthesize report_reasonIsSet=_report_reasonIsSet;
@property(copy, nonatomic) NSString *report_reason; // @synthesize report_reason=_report_reason;
@property(nonatomic) _Bool message_idIsSet; // @synthesize message_idIsSet=_message_idIsSet;
@property(nonatomic) long long message_id; // @synthesize message_id=_message_id;
@property(nonatomic) _Bool shown_historyIsSet; // @synthesize shown_historyIsSet=_shown_historyIsSet;
@property(nonatomic) _Bool shown_history; // @synthesize shown_history=_shown_history;
@property(nonatomic) _Bool is_memberIsSet; // @synthesize is_memberIsSet=_is_memberIsSet;
@property(nonatomic) _Bool is_member; // @synthesize is_member=_is_member;
@property(nonatomic) _Bool request_nameIsSet; // @synthesize request_nameIsSet=_request_nameIsSet;
@property(copy, nonatomic) NSString *request_name; // @synthesize request_name=_request_name;
@property(nonatomic) _Bool number_blocked_usersIsSet; // @synthesize number_blocked_usersIsSet=_number_blocked_usersIsSet;
@property(nonatomic) long long number_blocked_users; // @synthesize number_blocked_users=_number_blocked_users;
@property(nonatomic) _Bool recipient_user_idIsSet; // @synthesize recipient_user_idIsSet=_recipient_user_idIsSet;
@property(copy, nonatomic) NSString *recipient_user_id; // @synthesize recipient_user_id=_recipient_user_id;
@property(nonatomic) _Bool message_lengthIsSet; // @synthesize message_lengthIsSet=_message_lengthIsSet;
@property(nonatomic) long long message_length; // @synthesize message_length=_message_length;
@property(nonatomic) _Bool invitation_timestampIsSet; // @synthesize invitation_timestampIsSet=_invitation_timestampIsSet;
@property(nonatomic) long long invitation_timestamp; // @synthesize invitation_timestamp=_invitation_timestamp;
@property(nonatomic) _Bool sender_user_idIsSet; // @synthesize sender_user_idIsSet=_sender_user_idIsSet;
@property(copy, nonatomic) NSString *sender_user_id; // @synthesize sender_user_id=_sender_user_id;
@property(nonatomic) _Bool reported_user_idIsSet; // @synthesize reported_user_idIsSet=_reported_user_idIsSet;
@property(copy, nonatomic) NSString *reported_user_id; // @synthesize reported_user_id=_reported_user_id;
@property(nonatomic) _Bool number_unreadsIsSet; // @synthesize number_unreadsIsSet=_number_unreadsIsSet;
@property(nonatomic) long long number_unreads; // @synthesize number_unreads=_number_unreads;
@property(nonatomic) _Bool number_membersIsSet; // @synthesize number_membersIsSet=_number_membersIsSet;
@property(nonatomic) long long number_members; // @synthesize number_members=_number_members;
@property(nonatomic) _Bool number_pending_invitesIsSet; // @synthesize number_pending_invitesIsSet=_number_pending_invitesIsSet;
@property(nonatomic) long long number_pending_invites; // @synthesize number_pending_invites=_number_pending_invites;
@property(nonatomic) _Bool number_channelsIsSet; // @synthesize number_channelsIsSet=_number_channelsIsSet;
@property(nonatomic) long long number_channels; // @synthesize number_channels=_number_channels;
@property(nonatomic) _Bool message_typeIsSet; // @synthesize message_typeIsSet=_message_typeIsSet;
@property(copy, nonatomic) NSString *message_type; // @synthesize message_type=_message_type;
@property(nonatomic) _Bool invitation_preview_typeIsSet; // @synthesize invitation_preview_typeIsSet=_invitation_preview_typeIsSet;
@property(copy, nonatomic) NSString *invitation_preview_type; // @synthesize invitation_preview_type=_invitation_preview_type;
@property(nonatomic) _Bool membersIsSet; // @synthesize membersIsSet=_membersIsSet;
@property(retain, nonatomic) NSMutableArray *members; // @synthesize members=_members;
@property(nonatomic) _Bool invitation_typeIsSet; // @synthesize invitation_typeIsSet=_invitation_typeIsSet;
@property(copy, nonatomic) NSString *invitation_type; // @synthesize invitation_type=_invitation_type;
@property(nonatomic) _Bool invitation_idIsSet; // @synthesize invitation_idIsSet=_invitation_idIsSet;
@property(copy, nonatomic) NSString *invitation_id; // @synthesize invitation_id=_invitation_id;
@property(nonatomic) _Bool user_added_methodIsSet; // @synthesize user_added_methodIsSet=_user_added_methodIsSet;
@property(copy, nonatomic) NSString *user_added_method; // @synthesize user_added_method=_user_added_method;
@property(nonatomic) _Bool image_upload_methodIsSet; // @synthesize image_upload_methodIsSet=_image_upload_methodIsSet;
@property(copy, nonatomic) NSString *image_upload_method; // @synthesize image_upload_method=_image_upload_method;
@property(nonatomic) _Bool existing_channelIsSet; // @synthesize existing_channelIsSet=_existing_channelIsSet;
@property(nonatomic) _Bool existing_channel; // @synthesize existing_channel=_existing_channel;
@property(nonatomic) _Bool typeIsSet; // @synthesize typeIsSet=_typeIsSet;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(nonatomic) _Bool blocked_user_idIsSet; // @synthesize blocked_user_idIsSet=_blocked_user_idIsSet;
@property(copy, nonatomic) NSString *blocked_user_id; // @synthesize blocked_user_id=_blocked_user_id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetChannel_name;
- (void)unsetMessage_body;
- (void)unsetReport_reason;
- (void)unsetMessage_id;
- (void)unsetShown_history;
- (void)unsetIs_member;
- (void)unsetRequest_name;
- (void)unsetNumber_blocked_users;
- (void)unsetRecipient_user_id;
- (void)unsetMessage_length;
- (void)unsetInvitation_timestamp;
- (void)unsetSender_user_id;
- (void)unsetReported_user_id;
- (void)unsetNumber_unreads;
- (void)unsetNumber_members;
- (void)unsetNumber_pending_invites;
- (void)unsetNumber_channels;
- (void)unsetMessage_type;
- (void)unsetInvitation_preview_type;
- (void)unsetMembers;
- (void)unsetInvitation_type;
- (void)unsetInvitation_id;
- (void)unsetUser_added_method;
- (void)unsetImage_upload_method;
- (void)unsetExisting_channel;
- (void)unsetType;
- (void)unsetId;
- (void)unsetBlocked_user_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBlocked_user_id:(id)arg1 id:(id)arg2 type:(id)arg3 existing_channel:(_Bool)arg4 image_upload_method:(id)arg5 user_added_method:(id)arg6 invitation_id:(id)arg7 invitation_type:(id)arg8 members:(id)arg9 invitation_preview_type:(id)arg10 message_type:(id)arg11 number_channels:(long long)arg12 number_pending_invites:(long long)arg13 number_members:(long long)arg14 number_unreads:(long long)arg15 reported_user_id:(id)arg16 sender_user_id:(id)arg17 invitation_timestamp:(long long)arg18 message_length:(long long)arg19 recipient_user_id:(id)arg20 number_blocked_users:(long long)arg21 request_name:(id)arg22 is_member:(_Bool)arg23 shown_history:(_Bool)arg24 message_id:(long long)arg25 report_reason:(id)arg26 message_body:(id)arg27 channel_name:(id)arg28;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


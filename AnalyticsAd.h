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

@interface AnalyticsAd : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _nameIsSet;
    _Bool _click_urlIsSet;
    _Bool _third_party_trackersIsSet;
    _Bool _configured_statusIsSet;
    _Bool _effective_statusIsSet;
    _Bool _admin_approvalIsSet;
    _Bool _click_trackersIsSet;
    _Bool _classificationsIsSet;
    _Bool _rejection_reasonIsSet;
    _Bool _preview_expiry_timestampIsSet;
    NSString *_id;
    NSString *_name;
    NSString *_click_url;
    NSMutableArray *_third_party_trackers;
    NSString *_configured_status;
    NSString *_effective_status;
    NSString *_admin_approval;
    NSMutableArray *_click_trackers;
    NSMutableArray *_classifications;
    NSString *_rejection_reason;
    long long _preview_expiry_timestamp;
}

@property(nonatomic) _Bool preview_expiry_timestampIsSet; // @synthesize preview_expiry_timestampIsSet=_preview_expiry_timestampIsSet;
@property(nonatomic) long long preview_expiry_timestamp; // @synthesize preview_expiry_timestamp=_preview_expiry_timestamp;
@property(nonatomic) _Bool rejection_reasonIsSet; // @synthesize rejection_reasonIsSet=_rejection_reasonIsSet;
@property(copy, nonatomic) NSString *rejection_reason; // @synthesize rejection_reason=_rejection_reason;
@property(nonatomic) _Bool classificationsIsSet; // @synthesize classificationsIsSet=_classificationsIsSet;
@property(retain, nonatomic) NSMutableArray *classifications; // @synthesize classifications=_classifications;
@property(nonatomic) _Bool click_trackersIsSet; // @synthesize click_trackersIsSet=_click_trackersIsSet;
@property(retain, nonatomic) NSMutableArray *click_trackers; // @synthesize click_trackers=_click_trackers;
@property(nonatomic) _Bool admin_approvalIsSet; // @synthesize admin_approvalIsSet=_admin_approvalIsSet;
@property(copy, nonatomic) NSString *admin_approval; // @synthesize admin_approval=_admin_approval;
@property(nonatomic) _Bool effective_statusIsSet; // @synthesize effective_statusIsSet=_effective_statusIsSet;
@property(copy, nonatomic) NSString *effective_status; // @synthesize effective_status=_effective_status;
@property(nonatomic) _Bool configured_statusIsSet; // @synthesize configured_statusIsSet=_configured_statusIsSet;
@property(copy, nonatomic) NSString *configured_status; // @synthesize configured_status=_configured_status;
@property(nonatomic) _Bool third_party_trackersIsSet; // @synthesize third_party_trackersIsSet=_third_party_trackersIsSet;
@property(retain, nonatomic) NSMutableArray *third_party_trackers; // @synthesize third_party_trackers=_third_party_trackers;
@property(nonatomic) _Bool click_urlIsSet; // @synthesize click_urlIsSet=_click_urlIsSet;
@property(copy, nonatomic) NSString *click_url; // @synthesize click_url=_click_url;
@property(nonatomic) _Bool nameIsSet; // @synthesize nameIsSet=_nameIsSet;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetPreview_expiry_timestamp;
- (void)unsetRejection_reason;
- (void)unsetClassifications;
- (void)unsetClick_trackers;
- (void)unsetAdmin_approval;
- (void)unsetEffective_status;
- (void)unsetConfigured_status;
- (void)unsetThird_party_trackers;
- (void)unsetClick_url;
- (void)unsetName;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 name:(id)arg2 click_url:(id)arg3 third_party_trackers:(id)arg4 configured_status:(id)arg5 effective_status:(id)arg6 admin_approval:(id)arg7 click_trackers:(id)arg8 classifications:(id)arg9 rejection_reason:(id)arg10 preview_expiry_timestamp:(long long)arg11;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


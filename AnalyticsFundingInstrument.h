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

@interface AnalyticsFundingInstrument : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _created_timestampIsSet;
    _Bool _last_modified_timestampIsSet;
    _Bool _user_idIsSet;
    _Bool _typeIsSet;
    _Bool _start_timestampIsSet;
    _Bool _end_timestampIsSet;
    _Bool _nameIsSet;
    _Bool _line_item_idIsSet;
    _Bool _authorize_payment_profile_idIsSet;
    _Bool _authorize_profile_idIsSet;
    _Bool _servable;
    _Bool _servableIsSet;
    _Bool _admin_idIsSet;
    _Bool _credit_line_microsIsSet;
    _Bool _balance_microsIsSet;
    _Bool _billing_threshold_microsIsSet;
    _Bool _total_spending_microsIsSet;
    _Bool _total_payment_microsIsSet;
    _Bool _spent_freebies_microsIsSet;
    _Bool _available_freebies_microsIsSet;
    _Bool _overdelivery_microsIsSet;
    _Bool _total_refund_microsIsSet;
    _Bool _overwrite;
    _Bool _overwriteIsSet;
    _Bool _payment_idIsSet;
    _Bool _original_payment_idIsSet;
    _Bool _legacy_transaction_idIsSet;
    _Bool _active;
    _Bool _activeIsSet;
    _Bool _is_effective;
    _Bool _is_effectiveIsSet;
    _Bool _levelIsSet;
    _Bool _netsuite_customer_internal_idIsSet;
    _Bool _max_billing_threshold_microsIsSet;
    _Bool _estimated_spending_microsIsSet;
    _Bool _writeoff_microsIsSet;
    _Bool _adzerk_lifetime_microsIsSet;
    _Bool _rollup_timestampIsSet;
    long long _id;
    long long _created_timestamp;
    long long _last_modified_timestamp;
    NSString *_user_id;
    NSString *_type;
    long long _start_timestamp;
    long long _end_timestamp;
    NSString *_name;
    NSString *_line_item_id;
    NSString *_authorize_payment_profile_id;
    NSString *_authorize_profile_id;
    NSString *_admin_id;
    long long _credit_line_micros;
    long long _balance_micros;
    long long _billing_threshold_micros;
    long long _total_spending_micros;
    long long _total_payment_micros;
    long long _spent_freebies_micros;
    long long _available_freebies_micros;
    long long _overdelivery_micros;
    long long _total_refund_micros;
    NSString *_payment_id;
    NSString *_original_payment_id;
    NSString *_legacy_transaction_id;
    NSString *_level;
    NSString *_netsuite_customer_internal_id;
    long long _max_billing_threshold_micros;
    long long _estimated_spending_micros;
    long long _writeoff_micros;
    long long _adzerk_lifetime_micros;
    long long _rollup_timestamp;
}

@property(nonatomic) _Bool rollup_timestampIsSet; // @synthesize rollup_timestampIsSet=_rollup_timestampIsSet;
@property(nonatomic) long long rollup_timestamp; // @synthesize rollup_timestamp=_rollup_timestamp;
@property(nonatomic) _Bool adzerk_lifetime_microsIsSet; // @synthesize adzerk_lifetime_microsIsSet=_adzerk_lifetime_microsIsSet;
@property(nonatomic) long long adzerk_lifetime_micros; // @synthesize adzerk_lifetime_micros=_adzerk_lifetime_micros;
@property(nonatomic) _Bool writeoff_microsIsSet; // @synthesize writeoff_microsIsSet=_writeoff_microsIsSet;
@property(nonatomic) long long writeoff_micros; // @synthesize writeoff_micros=_writeoff_micros;
@property(nonatomic) _Bool estimated_spending_microsIsSet; // @synthesize estimated_spending_microsIsSet=_estimated_spending_microsIsSet;
@property(nonatomic) long long estimated_spending_micros; // @synthesize estimated_spending_micros=_estimated_spending_micros;
@property(nonatomic) _Bool max_billing_threshold_microsIsSet; // @synthesize max_billing_threshold_microsIsSet=_max_billing_threshold_microsIsSet;
@property(nonatomic) long long max_billing_threshold_micros; // @synthesize max_billing_threshold_micros=_max_billing_threshold_micros;
@property(nonatomic) _Bool netsuite_customer_internal_idIsSet; // @synthesize netsuite_customer_internal_idIsSet=_netsuite_customer_internal_idIsSet;
@property(copy, nonatomic) NSString *netsuite_customer_internal_id; // @synthesize netsuite_customer_internal_id=_netsuite_customer_internal_id;
@property(nonatomic) _Bool levelIsSet; // @synthesize levelIsSet=_levelIsSet;
@property(copy, nonatomic) NSString *level; // @synthesize level=_level;
@property(nonatomic) _Bool is_effectiveIsSet; // @synthesize is_effectiveIsSet=_is_effectiveIsSet;
@property(nonatomic) _Bool is_effective; // @synthesize is_effective=_is_effective;
@property(nonatomic) _Bool activeIsSet; // @synthesize activeIsSet=_activeIsSet;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool legacy_transaction_idIsSet; // @synthesize legacy_transaction_idIsSet=_legacy_transaction_idIsSet;
@property(copy, nonatomic) NSString *legacy_transaction_id; // @synthesize legacy_transaction_id=_legacy_transaction_id;
@property(nonatomic) _Bool original_payment_idIsSet; // @synthesize original_payment_idIsSet=_original_payment_idIsSet;
@property(copy, nonatomic) NSString *original_payment_id; // @synthesize original_payment_id=_original_payment_id;
@property(nonatomic) _Bool payment_idIsSet; // @synthesize payment_idIsSet=_payment_idIsSet;
@property(copy, nonatomic) NSString *payment_id; // @synthesize payment_id=_payment_id;
@property(nonatomic) _Bool overwriteIsSet; // @synthesize overwriteIsSet=_overwriteIsSet;
@property(nonatomic) _Bool overwrite; // @synthesize overwrite=_overwrite;
@property(nonatomic) _Bool total_refund_microsIsSet; // @synthesize total_refund_microsIsSet=_total_refund_microsIsSet;
@property(nonatomic) long long total_refund_micros; // @synthesize total_refund_micros=_total_refund_micros;
@property(nonatomic) _Bool overdelivery_microsIsSet; // @synthesize overdelivery_microsIsSet=_overdelivery_microsIsSet;
@property(nonatomic) long long overdelivery_micros; // @synthesize overdelivery_micros=_overdelivery_micros;
@property(nonatomic) _Bool available_freebies_microsIsSet; // @synthesize available_freebies_microsIsSet=_available_freebies_microsIsSet;
@property(nonatomic) long long available_freebies_micros; // @synthesize available_freebies_micros=_available_freebies_micros;
@property(nonatomic) _Bool spent_freebies_microsIsSet; // @synthesize spent_freebies_microsIsSet=_spent_freebies_microsIsSet;
@property(nonatomic) long long spent_freebies_micros; // @synthesize spent_freebies_micros=_spent_freebies_micros;
@property(nonatomic) _Bool total_payment_microsIsSet; // @synthesize total_payment_microsIsSet=_total_payment_microsIsSet;
@property(nonatomic) long long total_payment_micros; // @synthesize total_payment_micros=_total_payment_micros;
@property(nonatomic) _Bool total_spending_microsIsSet; // @synthesize total_spending_microsIsSet=_total_spending_microsIsSet;
@property(nonatomic) long long total_spending_micros; // @synthesize total_spending_micros=_total_spending_micros;
@property(nonatomic) _Bool billing_threshold_microsIsSet; // @synthesize billing_threshold_microsIsSet=_billing_threshold_microsIsSet;
@property(nonatomic) long long billing_threshold_micros; // @synthesize billing_threshold_micros=_billing_threshold_micros;
@property(nonatomic) _Bool balance_microsIsSet; // @synthesize balance_microsIsSet=_balance_microsIsSet;
@property(nonatomic) long long balance_micros; // @synthesize balance_micros=_balance_micros;
@property(nonatomic) _Bool credit_line_microsIsSet; // @synthesize credit_line_microsIsSet=_credit_line_microsIsSet;
@property(nonatomic) long long credit_line_micros; // @synthesize credit_line_micros=_credit_line_micros;
@property(nonatomic) _Bool admin_idIsSet; // @synthesize admin_idIsSet=_admin_idIsSet;
@property(copy, nonatomic) NSString *admin_id; // @synthesize admin_id=_admin_id;
@property(nonatomic) _Bool servableIsSet; // @synthesize servableIsSet=_servableIsSet;
@property(nonatomic) _Bool servable; // @synthesize servable=_servable;
@property(nonatomic) _Bool authorize_profile_idIsSet; // @synthesize authorize_profile_idIsSet=_authorize_profile_idIsSet;
@property(copy, nonatomic) NSString *authorize_profile_id; // @synthesize authorize_profile_id=_authorize_profile_id;
@property(nonatomic) _Bool authorize_payment_profile_idIsSet; // @synthesize authorize_payment_profile_idIsSet=_authorize_payment_profile_idIsSet;
@property(copy, nonatomic) NSString *authorize_payment_profile_id; // @synthesize authorize_payment_profile_id=_authorize_payment_profile_id;
@property(nonatomic) _Bool line_item_idIsSet; // @synthesize line_item_idIsSet=_line_item_idIsSet;
@property(copy, nonatomic) NSString *line_item_id; // @synthesize line_item_id=_line_item_id;
@property(nonatomic) _Bool nameIsSet; // @synthesize nameIsSet=_nameIsSet;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool end_timestampIsSet; // @synthesize end_timestampIsSet=_end_timestampIsSet;
@property(nonatomic) long long end_timestamp; // @synthesize end_timestamp=_end_timestamp;
@property(nonatomic) _Bool start_timestampIsSet; // @synthesize start_timestampIsSet=_start_timestampIsSet;
@property(nonatomic) long long start_timestamp; // @synthesize start_timestamp=_start_timestamp;
@property(nonatomic) _Bool typeIsSet; // @synthesize typeIsSet=_typeIsSet;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool user_idIsSet; // @synthesize user_idIsSet=_user_idIsSet;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(nonatomic) _Bool last_modified_timestampIsSet; // @synthesize last_modified_timestampIsSet=_last_modified_timestampIsSet;
@property(nonatomic) long long last_modified_timestamp; // @synthesize last_modified_timestamp=_last_modified_timestamp;
@property(nonatomic) _Bool created_timestampIsSet; // @synthesize created_timestampIsSet=_created_timestampIsSet;
@property(nonatomic) long long created_timestamp; // @synthesize created_timestamp=_created_timestamp;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetRollup_timestamp;
- (void)unsetAdzerk_lifetime_micros;
- (void)unsetWriteoff_micros;
- (void)unsetEstimated_spending_micros;
- (void)unsetMax_billing_threshold_micros;
- (void)unsetNetsuite_customer_internal_id;
- (void)unsetLevel;
- (void)unsetIs_effective;
- (void)unsetActive;
- (void)unsetLegacy_transaction_id;
- (void)unsetOriginal_payment_id;
- (void)unsetPayment_id;
- (void)unsetOverwrite;
- (void)unsetTotal_refund_micros;
- (void)unsetOverdelivery_micros;
- (void)unsetAvailable_freebies_micros;
- (void)unsetSpent_freebies_micros;
- (void)unsetTotal_payment_micros;
- (void)unsetTotal_spending_micros;
- (void)unsetBilling_threshold_micros;
- (void)unsetBalance_micros;
- (void)unsetCredit_line_micros;
- (void)unsetAdmin_id;
- (void)unsetServable;
- (void)unsetAuthorize_profile_id;
- (void)unsetAuthorize_payment_profile_id;
- (void)unsetLine_item_id;
- (void)unsetName;
- (void)unsetEnd_timestamp;
- (void)unsetStart_timestamp;
- (void)unsetType;
- (void)unsetUser_id;
- (void)unsetLast_modified_timestamp;
- (void)unsetCreated_timestamp;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(long long)arg1 created_timestamp:(long long)arg2 last_modified_timestamp:(long long)arg3 user_id:(id)arg4 type:(id)arg5 start_timestamp:(long long)arg6 end_timestamp:(long long)arg7 name:(id)arg8 line_item_id:(id)arg9 authorize_payment_profile_id:(id)arg10 authorize_profile_id:(id)arg11 servable:(_Bool)arg12 admin_id:(id)arg13 credit_line_micros:(long long)arg14 balance_micros:(long long)arg15 billing_threshold_micros:(long long)arg16 total_spending_micros:(long long)arg17 total_payment_micros:(long long)arg18 spent_freebies_micros:(long long)arg19 available_freebies_micros:(long long)arg20 overdelivery_micros:(long long)arg21 total_refund_micros:(long long)arg22 overwrite:(_Bool)arg23 payment_id:(id)arg24 original_payment_id:(id)arg25 legacy_transaction_id:(id)arg26 active:(_Bool)arg27 is_effective:(_Bool)arg28 level:(id)arg29 netsuite_customer_internal_id:(id)arg30 max_billing_threshold_micros:(long long)arg31 estimated_spending_micros:(long long)arg32 writeoff_micros:(long long)arg33 adzerk_lifetime_micros:(long long)arg34 rollup_timestamp:(long long)arg35;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


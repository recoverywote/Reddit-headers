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

@interface AnalyticsOnboarding : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _action_sourceIsSet;
    _Bool _process_notesIsSet;
    _Bool _number_subreddits_selectedIsSet;
    _Bool _subreddits_selectedIsSet;
    _Bool _user_nameIsSet;
    _Bool _recommended_user_name;
    _Bool _recommended_user_nameIsSet;
    _Bool _start_timestampIsSet;
    _Bool _end_timestampIsSet;
    _Bool _category_positionIsSet;
    _Bool _category_nameIsSet;
    _Bool _subreddit_nameIsSet;
    _Bool _subreddit_positionIsSet;
    _Bool _subreddit_is_selected;
    _Bool _subreddit_is_selectedIsSet;
    _Bool _subreddits_already_selectedIsSet;
    _Bool _successful;
    _Bool _successfulIsSet;
    _Bool _semantic_versionIsSet;
    _Bool _landing_pageIsSet;
    _Bool _valid_email_submitted;
    _Bool _valid_email_submittedIsSet;
    _Bool _pre_selected;
    _Bool _pre_selectedIsSet;
    _Bool _passed_captcha;
    _Bool _passed_captchaIsSet;
    _Bool _captcha_num_screensIsSet;
    _Bool _personalized_subredditsIsSet;
    _Bool _similar_subredditsIsSet;
    _Bool _number_subredditsIsSet;
    _Bool _is_similar_subreddit;
    _Bool _is_similar_subredditIsSet;
    NSString *_id;
    NSString *_action_source;
    NSString *_process_notes;
    long long _number_subreddits_selected;
    NSMutableArray *_subreddits_selected;
    NSString *_user_name;
    long long _start_timestamp;
    long long _end_timestamp;
    long long _category_position;
    NSString *_category_name;
    NSString *_subreddit_name;
    long long _subreddit_position;
    long long _subreddits_already_selected;
    NSString *_semantic_version;
    NSString *_landing_page;
    long long _captcha_num_screens;
    long long _personalized_subreddits;
    NSMutableArray *_similar_subreddits;
    long long _number_subreddits;
}

@property(nonatomic) _Bool is_similar_subredditIsSet; // @synthesize is_similar_subredditIsSet=_is_similar_subredditIsSet;
@property(nonatomic) _Bool is_similar_subreddit; // @synthesize is_similar_subreddit=_is_similar_subreddit;
@property(nonatomic) _Bool number_subredditsIsSet; // @synthesize number_subredditsIsSet=_number_subredditsIsSet;
@property(nonatomic) long long number_subreddits; // @synthesize number_subreddits=_number_subreddits;
@property(nonatomic) _Bool similar_subredditsIsSet; // @synthesize similar_subredditsIsSet=_similar_subredditsIsSet;
@property(retain, nonatomic) NSMutableArray *similar_subreddits; // @synthesize similar_subreddits=_similar_subreddits;
@property(nonatomic) _Bool personalized_subredditsIsSet; // @synthesize personalized_subredditsIsSet=_personalized_subredditsIsSet;
@property(nonatomic) long long personalized_subreddits; // @synthesize personalized_subreddits=_personalized_subreddits;
@property(nonatomic) _Bool captcha_num_screensIsSet; // @synthesize captcha_num_screensIsSet=_captcha_num_screensIsSet;
@property(nonatomic) long long captcha_num_screens; // @synthesize captcha_num_screens=_captcha_num_screens;
@property(nonatomic) _Bool passed_captchaIsSet; // @synthesize passed_captchaIsSet=_passed_captchaIsSet;
@property(nonatomic) _Bool passed_captcha; // @synthesize passed_captcha=_passed_captcha;
@property(nonatomic) _Bool pre_selectedIsSet; // @synthesize pre_selectedIsSet=_pre_selectedIsSet;
@property(nonatomic) _Bool pre_selected; // @synthesize pre_selected=_pre_selected;
@property(nonatomic) _Bool valid_email_submittedIsSet; // @synthesize valid_email_submittedIsSet=_valid_email_submittedIsSet;
@property(nonatomic) _Bool valid_email_submitted; // @synthesize valid_email_submitted=_valid_email_submitted;
@property(nonatomic) _Bool landing_pageIsSet; // @synthesize landing_pageIsSet=_landing_pageIsSet;
@property(copy, nonatomic) NSString *landing_page; // @synthesize landing_page=_landing_page;
@property(nonatomic) _Bool semantic_versionIsSet; // @synthesize semantic_versionIsSet=_semantic_versionIsSet;
@property(copy, nonatomic) NSString *semantic_version; // @synthesize semantic_version=_semantic_version;
@property(nonatomic) _Bool successfulIsSet; // @synthesize successfulIsSet=_successfulIsSet;
@property(nonatomic) _Bool successful; // @synthesize successful=_successful;
@property(nonatomic) _Bool subreddits_already_selectedIsSet; // @synthesize subreddits_already_selectedIsSet=_subreddits_already_selectedIsSet;
@property(nonatomic) long long subreddits_already_selected; // @synthesize subreddits_already_selected=_subreddits_already_selected;
@property(nonatomic) _Bool subreddit_is_selectedIsSet; // @synthesize subreddit_is_selectedIsSet=_subreddit_is_selectedIsSet;
@property(nonatomic) _Bool subreddit_is_selected; // @synthesize subreddit_is_selected=_subreddit_is_selected;
@property(nonatomic) _Bool subreddit_positionIsSet; // @synthesize subreddit_positionIsSet=_subreddit_positionIsSet;
@property(nonatomic) long long subreddit_position; // @synthesize subreddit_position=_subreddit_position;
@property(nonatomic) _Bool subreddit_nameIsSet; // @synthesize subreddit_nameIsSet=_subreddit_nameIsSet;
@property(copy, nonatomic) NSString *subreddit_name; // @synthesize subreddit_name=_subreddit_name;
@property(nonatomic) _Bool category_nameIsSet; // @synthesize category_nameIsSet=_category_nameIsSet;
@property(copy, nonatomic) NSString *category_name; // @synthesize category_name=_category_name;
@property(nonatomic) _Bool category_positionIsSet; // @synthesize category_positionIsSet=_category_positionIsSet;
@property(nonatomic) long long category_position; // @synthesize category_position=_category_position;
@property(nonatomic) _Bool end_timestampIsSet; // @synthesize end_timestampIsSet=_end_timestampIsSet;
@property(nonatomic) long long end_timestamp; // @synthesize end_timestamp=_end_timestamp;
@property(nonatomic) _Bool start_timestampIsSet; // @synthesize start_timestampIsSet=_start_timestampIsSet;
@property(nonatomic) long long start_timestamp; // @synthesize start_timestamp=_start_timestamp;
@property(nonatomic) _Bool recommended_user_nameIsSet; // @synthesize recommended_user_nameIsSet=_recommended_user_nameIsSet;
@property(nonatomic) _Bool recommended_user_name; // @synthesize recommended_user_name=_recommended_user_name;
@property(nonatomic) _Bool user_nameIsSet; // @synthesize user_nameIsSet=_user_nameIsSet;
@property(copy, nonatomic) NSString *user_name; // @synthesize user_name=_user_name;
@property(nonatomic) _Bool subreddits_selectedIsSet; // @synthesize subreddits_selectedIsSet=_subreddits_selectedIsSet;
@property(retain, nonatomic) NSMutableArray *subreddits_selected; // @synthesize subreddits_selected=_subreddits_selected;
@property(nonatomic) _Bool number_subreddits_selectedIsSet; // @synthesize number_subreddits_selectedIsSet=_number_subreddits_selectedIsSet;
@property(nonatomic) long long number_subreddits_selected; // @synthesize number_subreddits_selected=_number_subreddits_selected;
@property(nonatomic) _Bool process_notesIsSet; // @synthesize process_notesIsSet=_process_notesIsSet;
@property(copy, nonatomic) NSString *process_notes; // @synthesize process_notes=_process_notes;
@property(nonatomic) _Bool action_sourceIsSet; // @synthesize action_sourceIsSet=_action_sourceIsSet;
@property(copy, nonatomic) NSString *action_source; // @synthesize action_source=_action_source;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetIs_similar_subreddit;
- (void)unsetNumber_subreddits;
- (void)unsetSimilar_subreddits;
- (void)unsetPersonalized_subreddits;
- (void)unsetCaptcha_num_screens;
- (void)unsetPassed_captcha;
- (void)unsetPre_selected;
- (void)unsetValid_email_submitted;
- (void)unsetLanding_page;
- (void)unsetSemantic_version;
- (void)unsetSuccessful;
- (void)unsetSubreddits_already_selected;
- (void)unsetSubreddit_is_selected;
- (void)unsetSubreddit_position;
- (void)unsetSubreddit_name;
- (void)unsetCategory_name;
- (void)unsetCategory_position;
- (void)unsetEnd_timestamp;
- (void)unsetStart_timestamp;
- (void)unsetRecommended_user_name;
- (void)unsetUser_name;
- (void)unsetSubreddits_selected;
- (void)unsetNumber_subreddits_selected;
- (void)unsetProcess_notes;
- (void)unsetAction_source;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 action_source:(id)arg2 process_notes:(id)arg3 number_subreddits_selected:(long long)arg4 subreddits_selected:(id)arg5 user_name:(id)arg6 recommended_user_name:(_Bool)arg7 start_timestamp:(long long)arg8 end_timestamp:(long long)arg9 category_position:(long long)arg10 category_name:(id)arg11 subreddit_name:(id)arg12 subreddit_position:(long long)arg13 subreddit_is_selected:(_Bool)arg14 subreddits_already_selected:(long long)arg15 successful:(_Bool)arg16 semantic_version:(id)arg17 landing_page:(id)arg18 valid_email_submitted:(_Bool)arg19 pre_selected:(_Bool)arg20 passed_captcha:(_Bool)arg21 captcha_num_screens:(long long)arg22 personalized_subreddits:(long long)arg23 similar_subreddits:(id)arg24 number_subreddits:(long long)arg25 is_similar_subreddit:(_Bool)arg26;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


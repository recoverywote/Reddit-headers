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

@interface AnalyticsRequest : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _user_agentIsSet;
    _Bool _domainIsSet;
    _Bool _base_urlIsSet;
    _Bool _client_ipIsSet;
    _Bool _known_botIsSet;
    _Bool _header_signatureIsSet;
    _Bool _cookies_present;
    _Bool _cookies_presentIsSet;
    _Bool _accept_encoding;
    _Bool _accept_encodingIsSet;
    _Bool _accept_language;
    _Bool _accept_languageIsSet;
    _Bool _reddaidIsSet;
    _Bool _google_aaidIsSet;
    _Bool _amazon_aidIsSet;
    _Bool _apple_ios_aidIsSet;
    _Bool _isp_organizationIsSet;
    _Bool _accept_language_headerIsSet;
    _Bool _parametersIsSet;
    _Bool _canonical_urlIsSet;
    _Bool _loginbot;
    _Bool _loginbotIsSet;
    _Bool _robots_meta_tagIsSet;
    NSString *_user_agent;
    NSString *_domain;
    NSString *_base_url;
    NSString *_client_ip;
    NSString *_known_bot;
    NSString *_header_signature;
    NSString *_reddaid;
    NSString *_google_aaid;
    NSString *_amazon_aid;
    NSString *_apple_ios_aid;
    NSString *_isp_organization;
    NSString *_accept_language_header;
    NSString *_parameters;
    NSString *_canonical_url;
    NSString *_robots_meta_tag;
}

@property(nonatomic) _Bool robots_meta_tagIsSet; // @synthesize robots_meta_tagIsSet=_robots_meta_tagIsSet;
@property(copy, nonatomic) NSString *robots_meta_tag; // @synthesize robots_meta_tag=_robots_meta_tag;
@property(nonatomic) _Bool loginbotIsSet; // @synthesize loginbotIsSet=_loginbotIsSet;
@property(nonatomic) _Bool loginbot; // @synthesize loginbot=_loginbot;
@property(nonatomic) _Bool canonical_urlIsSet; // @synthesize canonical_urlIsSet=_canonical_urlIsSet;
@property(copy, nonatomic) NSString *canonical_url; // @synthesize canonical_url=_canonical_url;
@property(nonatomic) _Bool parametersIsSet; // @synthesize parametersIsSet=_parametersIsSet;
@property(copy, nonatomic) NSString *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool accept_language_headerIsSet; // @synthesize accept_language_headerIsSet=_accept_language_headerIsSet;
@property(copy, nonatomic) NSString *accept_language_header; // @synthesize accept_language_header=_accept_language_header;
@property(nonatomic) _Bool isp_organizationIsSet; // @synthesize isp_organizationIsSet=_isp_organizationIsSet;
@property(copy, nonatomic) NSString *isp_organization; // @synthesize isp_organization=_isp_organization;
@property(nonatomic) _Bool apple_ios_aidIsSet; // @synthesize apple_ios_aidIsSet=_apple_ios_aidIsSet;
@property(copy, nonatomic) NSString *apple_ios_aid; // @synthesize apple_ios_aid=_apple_ios_aid;
@property(nonatomic) _Bool amazon_aidIsSet; // @synthesize amazon_aidIsSet=_amazon_aidIsSet;
@property(copy, nonatomic) NSString *amazon_aid; // @synthesize amazon_aid=_amazon_aid;
@property(nonatomic) _Bool google_aaidIsSet; // @synthesize google_aaidIsSet=_google_aaidIsSet;
@property(copy, nonatomic) NSString *google_aaid; // @synthesize google_aaid=_google_aaid;
@property(nonatomic) _Bool reddaidIsSet; // @synthesize reddaidIsSet=_reddaidIsSet;
@property(copy, nonatomic) NSString *reddaid; // @synthesize reddaid=_reddaid;
@property(nonatomic) _Bool accept_languageIsSet; // @synthesize accept_languageIsSet=_accept_languageIsSet;
@property(nonatomic) _Bool accept_language; // @synthesize accept_language=_accept_language;
@property(nonatomic) _Bool accept_encodingIsSet; // @synthesize accept_encodingIsSet=_accept_encodingIsSet;
@property(nonatomic) _Bool accept_encoding; // @synthesize accept_encoding=_accept_encoding;
@property(nonatomic) _Bool cookies_presentIsSet; // @synthesize cookies_presentIsSet=_cookies_presentIsSet;
@property(nonatomic) _Bool cookies_present; // @synthesize cookies_present=_cookies_present;
@property(nonatomic) _Bool header_signatureIsSet; // @synthesize header_signatureIsSet=_header_signatureIsSet;
@property(copy, nonatomic) NSString *header_signature; // @synthesize header_signature=_header_signature;
@property(nonatomic) _Bool known_botIsSet; // @synthesize known_botIsSet=_known_botIsSet;
@property(copy, nonatomic) NSString *known_bot; // @synthesize known_bot=_known_bot;
@property(nonatomic) _Bool client_ipIsSet; // @synthesize client_ipIsSet=_client_ipIsSet;
@property(copy, nonatomic) NSString *client_ip; // @synthesize client_ip=_client_ip;
@property(nonatomic) _Bool base_urlIsSet; // @synthesize base_urlIsSet=_base_urlIsSet;
@property(copy, nonatomic) NSString *base_url; // @synthesize base_url=_base_url;
@property(nonatomic) _Bool domainIsSet; // @synthesize domainIsSet=_domainIsSet;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool user_agentIsSet; // @synthesize user_agentIsSet=_user_agentIsSet;
@property(copy, nonatomic) NSString *user_agent; // @synthesize user_agent=_user_agent;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetRobots_meta_tag;
- (void)unsetLoginbot;
- (void)unsetCanonical_url;
- (void)unsetParameters;
- (void)unsetAccept_language_header;
- (void)unsetIsp_organization;
- (void)unsetApple_ios_aid;
- (void)unsetAmazon_aid;
- (void)unsetGoogle_aaid;
- (void)unsetReddaid;
- (void)unsetAccept_language;
- (void)unsetAccept_encoding;
- (void)unsetCookies_present;
- (void)unsetHeader_signature;
- (void)unsetKnown_bot;
- (void)unsetClient_ip;
- (void)unsetBase_url;
- (void)unsetDomain;
- (void)unsetUser_agent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser_agent:(id)arg1 domain:(id)arg2 base_url:(id)arg3 client_ip:(id)arg4 known_bot:(id)arg5 header_signature:(id)arg6 cookies_present:(_Bool)arg7 accept_encoding:(_Bool)arg8 accept_language:(_Bool)arg9 reddaid:(id)arg10 google_aaid:(id)arg11 amazon_aid:(id)arg12 apple_ios_aid:(id)arg13 isp_organization:(id)arg14 accept_language_header:(id)arg15 parameters:(id)arg16 canonical_url:(id)arg17 loginbot:(_Bool)arg18 robots_meta_tag:(id)arg19;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


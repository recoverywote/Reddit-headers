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

@interface AnalyticsUrlParsed : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _shared_timestampIsSet;
    _Bool _utm_sourceIsSet;
    _Bool _utm_nameIsSet;
    _Bool _shared_hashIsSet;
    _Bool _utm_campaignIsSet;
    _Bool _utm_contentIsSet;
    _Bool _utm_mediumIsSet;
    _Bool _utm_termIsSet;
    long long _shared_timestamp;
    NSString *_utm_source;
    NSString *_utm_name;
    NSString *_shared_hash;
    NSString *_utm_campaign;
    NSString *_utm_content;
    NSString *_utm_medium;
    NSString *_utm_term;
}

@property(nonatomic) _Bool utm_termIsSet; // @synthesize utm_termIsSet=_utm_termIsSet;
@property(copy, nonatomic) NSString *utm_term; // @synthesize utm_term=_utm_term;
@property(nonatomic) _Bool utm_mediumIsSet; // @synthesize utm_mediumIsSet=_utm_mediumIsSet;
@property(copy, nonatomic) NSString *utm_medium; // @synthesize utm_medium=_utm_medium;
@property(nonatomic) _Bool utm_contentIsSet; // @synthesize utm_contentIsSet=_utm_contentIsSet;
@property(copy, nonatomic) NSString *utm_content; // @synthesize utm_content=_utm_content;
@property(nonatomic) _Bool utm_campaignIsSet; // @synthesize utm_campaignIsSet=_utm_campaignIsSet;
@property(copy, nonatomic) NSString *utm_campaign; // @synthesize utm_campaign=_utm_campaign;
@property(nonatomic) _Bool shared_hashIsSet; // @synthesize shared_hashIsSet=_shared_hashIsSet;
@property(copy, nonatomic) NSString *shared_hash; // @synthesize shared_hash=_shared_hash;
@property(nonatomic) _Bool utm_nameIsSet; // @synthesize utm_nameIsSet=_utm_nameIsSet;
@property(copy, nonatomic) NSString *utm_name; // @synthesize utm_name=_utm_name;
@property(nonatomic) _Bool utm_sourceIsSet; // @synthesize utm_sourceIsSet=_utm_sourceIsSet;
@property(copy, nonatomic) NSString *utm_source; // @synthesize utm_source=_utm_source;
@property(nonatomic) _Bool shared_timestampIsSet; // @synthesize shared_timestampIsSet=_shared_timestampIsSet;
@property(nonatomic) long long shared_timestamp; // @synthesize shared_timestamp=_shared_timestamp;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetUtm_term;
- (void)unsetUtm_medium;
- (void)unsetUtm_content;
- (void)unsetUtm_campaign;
- (void)unsetShared_hash;
- (void)unsetUtm_name;
- (void)unsetUtm_source;
- (void)unsetShared_timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShared_timestamp:(long long)arg1 utm_source:(id)arg2 utm_name:(id)arg3 shared_hash:(id)arg4 utm_campaign:(id)arg5 utm_content:(id)arg6 utm_medium:(id)arg7 utm_term:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


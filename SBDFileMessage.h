//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SendBirdSDK/SBDBaseMessage.h>

@class NSArray, NSString, SBDUser;

@interface SBDFileMessage : SBDBaseMessage
{
    _Bool _isBlocked;
    _Bool _requireAuth;
    SBDUser *_sender;
    NSString *_name;
    unsigned long long _size;
    NSString *_type;
    NSString *_data;
    NSString *_requestId;
    NSString *_customType;
    NSArray *_thumbnails;
    NSString *_url;
}

+ (id)buildWithFileMessageParams:(id)arg1 requestId:(id)arg2 channel:(id)arg3 sender:(id)arg4;
+ (id)buildWithFileUrl:(id)arg1 name:(id)arg2 size:(unsigned long long)arg3 type:(id)arg4 data:(id)arg5 requestId:(id)arg6 sender:(id)arg7 channel:(id)arg8 customType:(id)arg9 thumbnailSizes:(id)arg10;
+ (id)buildWithFileUrl:(id)arg1 name:(id)arg2 size:(unsigned long long)arg3 type:(id)arg4 data:(id)arg5 requestId:(id)arg6 sender:(id)arg7 channel:(id)arg8 customType:(id)arg9;
@property(getter=isRequiredAuth) _Bool requireAuth; // @synthesize requireAuth=_requireAuth;
@property _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(retain, nonatomic, getter=url) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSArray *thumbnails; // @synthesize thumbnails=_thumbnails;
@property(retain, nonatomic) NSString *customType; // @synthesize customType=_customType;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic, getter=sender) SBDUser *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)_toDictionary;
- (id)serialize;
- (id)description;

@end


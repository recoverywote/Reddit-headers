//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, SBDBaseChannel;

@interface SBDUserListQuery : NSObject
{
    _Bool _hasNext;
    _Bool _loading;
    SBDBaseChannel *_channel;
    unsigned long long _queryType;
    unsigned long long _limit;
    NSString *_token;
    NSMutableArray *_userIds;
    NSString *_metaDataKey;
    NSArray *_metaDataValues;
}

@property(retain) NSArray *metaDataValues; // @synthesize metaDataValues=_metaDataValues;
@property(retain) NSString *metaDataKey; // @synthesize metaDataKey=_metaDataKey;
@property(retain, nonatomic) NSMutableArray *userIds; // @synthesize userIds=_userIds;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property _Bool hasNext; // @synthesize hasNext=_hasNext;
@property unsigned long long limit; // @synthesize limit=_limit;
@property unsigned long long queryType; // @synthesize queryType=_queryType;
@property(retain) SBDBaseChannel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)loadBannedUserListNextPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadMutedUserListNextPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadParticipantListNextPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadBlockedUserListNextPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFilteredUserListNextPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadAllUserListNextPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadNextPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setMetaDataFilterWithKey:(id)arg1 values:(id)arg2;
- (id)initWithUserIds:(id)arg1;
- (id)initWithQueryType:(unsigned long long)arg1 channel:(id)arg2;
- (id)initWithQueryType:(unsigned long long)arg1 channel:(id)arg2 userIds:(id)arg3;

@end


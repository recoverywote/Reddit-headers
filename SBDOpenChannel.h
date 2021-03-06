//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SendBirdSDK/SBDBaseChannel.h>

@class NSMutableArray;

@interface SBDOpenChannel : SBDBaseChannel
{
    long long _participantCount;
    NSMutableArray *_operators;
}

+ (id)enteredChannels;
+ (_Bool)isEnteredChannel:(id)arg1;
+ (void)removeChannelFromCacheWithChannelUrl:(id)arg1;
+ (void)clearEnteredChannels;
+ (void)clearCache;
+ (id)buildFromSerializedData:(id)arg1;
+ (id)getChannelFromCacheWithChannelUrl:(id)arg1;
+ (void)getChannelWithUrl:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)createChannelWithName:(id)arg1 coverImage:(id)arg2 coverImageName:(id)arg3 data:(id)arg4 operatorUsers:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)createChannelWithName:(id)arg1 coverUrl:(id)arg2 data:(id)arg3 operatorUsers:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)createChannelWithName:(id)arg1 channelUrl:(id)arg2 coverImage:(id)arg3 coverImageName:(id)arg4 data:(id)arg5 operatorUserIds:(id)arg6 customType:(id)arg7 progressHandler:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (void)createChannelWithName:(id)arg1 coverImage:(id)arg2 coverImageName:(id)arg3 data:(id)arg4 operatorUserIds:(id)arg5 customType:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (void)createChannelWithName:(id)arg1 channelUrl:(id)arg2 coverImageFilePath:(id)arg3 data:(id)arg4 operatorUserIds:(id)arg5 customType:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (void)createChannelWithName:(id)arg1 coverImageFilePath:(id)arg2 data:(id)arg3 operatorUserIds:(id)arg4 customType:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)createChannelWithName:(id)arg1 coverImage:(id)arg2 coverImageName:(id)arg3 data:(id)arg4 operatorUserIds:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)createChannelWithName:(id)arg1 channelUrl:(id)arg2 coverUrl:(id)arg3 data:(id)arg4 operatorUserIds:(id)arg5 customType:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)createChannelWithName:(id)arg1 coverUrl:(id)arg2 data:(id)arg3 operatorUserIds:(id)arg4 customType:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)createChannelWithName:(id)arg1 coverUrl:(id)arg2 data:(id)arg3 operatorUserIds:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)createChannelWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)createOpenChannelListQuery;
+ (void)upsertCacheWithChannel:(id)arg1;
@property(retain, nonatomic) NSMutableArray *operators; // @synthesize operators=_operators;
@property(nonatomic) long long participantCount; // @synthesize participantCount=_participantCount;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 isDirty:(_Bool)arg2;
- (id)_toDictionary;
- (id)serialize;
- (_Bool)isOperatorWithUserId:(id)arg1;
- (_Bool)isOperatorWithUser:(id)arg1;
- (void)unmuteUserWithUserId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unmuteUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)muteUserWithUserId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)muteUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unbanUserWithUserId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unbanUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)banUserWithUserId:(id)arg1 seconds:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)banUser:(id)arg1 seconds:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)overwriteWithChannel:(id)arg1;
- (id)createBannedUserListQuery;
- (id)createMutedUserListQuery;
- (id)createParticipantListQuery;
- (void)exitChannelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enterChannelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateChannelWithName:(id)arg1 coverImage:(id)arg2 coverImageName:(id)arg3 data:(id)arg4 operatorUsers:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)updateChannelWithName:(id)arg1 coverUrl:(id)arg2 data:(id)arg3 operatorUsers:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateChannelWithName:(id)arg1 coverImage:(id)arg2 coverImageName:(id)arg3 data:(id)arg4 operatorUserIds:(id)arg5 customType:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)updateChannelWithName:(id)arg1 coverImageFilePath:(id)arg2 data:(id)arg3 operatorUserIds:(id)arg4 customType:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)updateChannelWithName:(id)arg1 coverImage:(id)arg2 coverImageName:(id)arg3 data:(id)arg4 operatorUserIds:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)updateChannelWithName:(id)arg1 coverUrl:(id)arg2 data:(id)arg3 operatorUserIds:(id)arg4 customType:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)updateChannelWithName:(id)arg1 coverUrl:(id)arg2 data:(id)arg3 operatorUserIds:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end


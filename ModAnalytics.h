//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ModAnalytics : NSObject
{
}

+ (id)modToolsButtonClickEventWithSubreddit:(id)arg1 pageType:(id)arg2 moderatorUserPermissions:(unsigned long long)arg3;
+ (id)modToolsClickEventWithNoun:(id)arg1 subreddit:(id)arg2 pageType:(id)arg3 moderatorUserPermissions:(unsigned long long)arg4;
+ (id)subredditWithName:(id)arg1 id:(id)arg2;
+ (void)sendEvent:(id)arg1 withSubreddit:(id)arg2;
+ (void)sendModModeEventWithSubreddit:(id)arg1 post:(id)arg2 comment:(id)arg3 noun:(id)arg4;
+ (void)modModeUndistinguishComment:(id)arg1 post:(id)arg2 subreddit:(id)arg3;
+ (void)modModeDistinguishComment:(id)arg1 isPinned:(_Bool)arg2 post:(id)arg3 subreddit:(id)arg4;
+ (void)modModeUnlockComment:(id)arg1 post:(id)arg2 subreddit:(id)arg3;
+ (void)modModeLockComment:(id)arg1 post:(id)arg2 subreddit:(id)arg3;
+ (void)modModeSpamComment:(id)arg1 post:(id)arg2 subreddit:(id)arg3;
+ (void)modModeRemoveComment:(id)arg1 post:(id)arg2 subreddit:(id)arg3;
+ (void)modModeUncollapseComment:(id)arg1 post:(id)arg2 subreddit:(id)arg3;
+ (void)modModeApproveComment:(id)arg1 post:(id)arg2 subreddit:(id)arg3;
+ (void)modModeUndistinguishPost:(id)arg1 subreddit:(id)arg2;
+ (void)modModeDistinguishPost:(id)arg1 subreddit:(id)arg2;
+ (void)modModeRemovePost:(id)arg1 asSpam:(_Bool)arg2 subreddit:(id)arg3;
+ (void)modModeApprovePost:(id)arg1 subreddit:(id)arg2;
+ (void)modModeClickEventForModModeStatus:(_Bool)arg1 subreddit:(id)arg2;
+ (void)modmailClickEventWithNoun:(id)arg1 subreddit:(id)arg2;
+ (void)modQueueBulkPostEventWithNoun:(id)arg1 objects:(id)arg2;
+ (void)modQueueCommentEventWithNoun:(id)arg1 comment:(id)arg2;
+ (void)modQueuePostEventWithNoun:(id)arg1 post:(id)arg2;
+ (void)modQueueClickEventWithNoun:(id)arg1 subreddit:(id)arg2;
+ (void)modQueueViewEventWithNoun:(id)arg1 subreddit:(id)arg2;
+ (void)contributorListEventWithNoun:(id)arg1 subreddit:(id)arg2;
+ (void)modInviteEvent:(id)arg1;
+ (void)modListEventWithNoun:(id)arg1 subreddit:(id)arg2;
+ (void)muteListEventWithNoun:(id)arg1 subreddit:(id)arg2;
+ (void)banListEventWithNoun:(id)arg1 subreddit:(id)arg2;

@end


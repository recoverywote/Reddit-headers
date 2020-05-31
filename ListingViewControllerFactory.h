//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ListingViewControllerFactory : NSObject
{
}

+ (id)addSubredditsToMultiViewControllerWithMulti:(id)arg1 accountContext:(id)arg2;
+ (id)customFeedListViewControllerWithAccountContext:(id)arg1;
+ (id)multiSubredditListViewControllerWithAccountContext:(id)arg1;
+ (id)approvedUsersViewControllerWithAccountContext:(id)arg1 subreddit:(id)arg2;
+ (id)mutedUsersViewControllerWithAccountContext:(id)arg1 subreddit:(id)arg2;
+ (id)bannedUsersViewControllerWithAccountContext:(id)arg1 subreddit:(id)arg2;
+ (id)modUserListViewControllerWithAccountContext:(id)arg1 withSubreddit:(id)arg2;
+ (id)moderatorsViewControllerWithAccountContext:(id)arg1 withSubredditName:(id)arg2 withType:(unsigned long long)arg3;
+ (id)moderatorsViewControllerWithAccountContext:(id)arg1 withSubreddit:(id)arg2 withType:(unsigned long long)arg3;
+ (id)modWidgetFullListViewControllerWithAccountContext:(id)arg1 subreddit:(id)arg2;
+ (id)shareToChatViewControllerWithAccountContext:(id)arg1 withPost:(id)arg2 fromVC:(id)arg3;
+ (id)messageRepliesViewControllerWithAccountContext:(id)arg1;
+ (id)liveViewControllerWithAccountContext:(id)arg1;
+ (id)chatSubredditMembersViewControllerWithAccountContext:(id)arg1 channel:(id)arg2;
+ (id)chatRequestViewControllerWithAccountContext:(id)arg1;
+ (id)chatSubredditChannelListViewControllerWithAccountContext:(id)arg1;
+ (id)chatPostPickerViewControllerWithAccountContext:(id)arg1;
+ (id)chatInboxListingViewControllerWithAccountContext:(id)arg1 type:(unsigned long long)arg2;
+ (id)chatAddressBookViewControllerWithMode:(unsigned long long)arg1 initialContacts:(id)arg2 accountContext:(id)arg3;
+ (id)mailListViewControllerWithAccountContext:(id)arg1;
+ (id)activityViewControllerWithAccountContext:(id)arg1;

@end


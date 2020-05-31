//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ListingViewControllerFactory : NSObject
{
}

+ (id)addSubredditsToMultiViewControllerWithMulti:(id)arg1 redditService:(id)arg2;
+ (id)customFeedListViewControllerWithRedditService:(id)arg1;
+ (id)multiSubredditListViewControllerWithRedditService:(id)arg1;
+ (id)approvedUsersViewControllerWithRedditSevice:(id)arg1 withSubreddit:(id)arg2;
+ (id)mutedUsersViewControllerWithRedditSevice:(id)arg1 withSubreddit:(id)arg2;
+ (id)bannedUsersViewControllerWithRedditSevice:(id)arg1 withSubreddit:(id)arg2;
+ (id)modUserListViewControllerWithRedditSevice:(id)arg1 withSubreddit:(id)arg2;
+ (id)moderatorsViewControllerWithRedditSevice:(id)arg1 withSubredditName:(id)arg2 withType:(unsigned long long)arg3;
+ (id)moderatorsViewControllerWithRedditSevice:(id)arg1 withSubreddit:(id)arg2 withType:(unsigned long long)arg3;
+ (id)modWidgetFullListViewControllerWithRedditSevice:(id)arg1 withSubreddit:(id)arg2;
+ (id)shareToChatViewControllerWithRedditService:(id)arg1 withPost:(id)arg2 fromVC:(id)arg3;
+ (id)messageRepliesViewControllerWithRedditService:(id)arg1;
+ (id)liveViewControllerWithRedditService:(id)arg1;
+ (id)chatSubredditMembersViewControllerWithRedditService:(id)arg1 channel:(id)arg2;
+ (id)chatRequestViewControllerWithRedditService:(id)arg1;
+ (id)chatSubredditChannelListViewControllerWithRedditService:(id)arg1;
+ (id)chatPostPickerViewControllerWithRedditService:(id)arg1;
+ (id)chatInboxListingViewControllerWithRedditService:(id)arg1 type:(unsigned long long)arg2;
+ (id)chatAddressBookViewControllerWithMode:(unsigned long long)arg1 initialContacts:(id)arg2 redditService:(id)arg3;
+ (id)mailListViewControllerWithRedditService:(id)arg1;
+ (id)activityViewControllerWithRedditService:(id)arg1;

@end


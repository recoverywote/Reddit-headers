//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class Subreddit, User;

@protocol _TtP6Reddit12UserCardView_
- (void)configureWithUser:(User *)arg1 subreddit:(Subreddit *)arg2;
- (void)showChatActions;
- (void)showChangeFlairAction:(_Bool)arg1;
- (void)showMuteActionForStateWithUserIsMuted:(_Bool)arg1;
- (void)showBanActionForStateWithUserIsBanned:(_Bool)arg1;
- (void)loadingActionStatesWithIsLoading:(_Bool)arg1;
@end


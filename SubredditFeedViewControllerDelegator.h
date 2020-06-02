//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedViewControllerDelegator.h"

#import "DownToChatBannerNodeDelegate-Protocol.h"
#import "_TtP6Reddit26PowerupsBannerNodeDelegate_-Protocol.h"
#import "_TtP6Reddit36MetaMembershipBannerCellNodeDelegate_-Protocol.h"

@class NSString, TextureSubredditFeedViewController;

@interface SubredditFeedViewControllerDelegator : FeedViewControllerDelegator <_TtP6Reddit36MetaMembershipBannerCellNodeDelegate_, DownToChatBannerNodeDelegate, _TtP6Reddit26PowerupsBannerNodeDelegate_>
{
}

- (void)removeModelObject:(id)arg1;
- (void)powerupsBannerNodeDidTapCallToActionWithNode:(id)arg1;
- (void)powerupsBannerNodeDidTapDismissWithNode:(id)arg1;
- (void)downToChatBannerNodeDidTapDismiss:(id)arg1;
- (void)downToChatBannerNodeDidTapCallToAction:(id)arg1;
- (void)metaMembershipBannerCellNodeDidTapClose:(id)arg1;
- (void)metaMembershipBannerCellNode:(id)arg1 didTapBadge:(id)arg2 correlationID:(id)arg3;
- (void)metaMembershipBannerCellNode:(id)arg1 didTapURL:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CDUnknownBlockType)collectionNode:(id)arg1 nodeBlockForItemAtIndexPath:(id)arg2;
@property(readonly, nonatomic) TextureSubredditFeedViewController *subredditFeedVC;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


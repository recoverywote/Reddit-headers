//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedViewControllerDelegator.h"

@interface PopularFeedViewControllerDelegator : FeedViewControllerDelegator
{
}

- (void)presentTooltipOnceForNode:(id)arg1;
- (void)collectionNode:(id)arg1 willDisplayItemWithNode:(id)arg2;
- (void)presentTooltipOnceForCell:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)showBottomToolTipType:(unsigned long long)arg1 fromView:(id)arg2;
- (void)showTopToolTipType:(unsigned long long)arg1 fromView:(id)arg2;
- (void)attemptShowingToolTipsFromSortBar:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)popularPresenter;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingViewController.h"

#import "PagedTabControllerProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BaseCollectionView, NSString, RedditService, Subreddit, UIScrollView;
@protocol PagedTabControllerParentCallback;

@interface ChatSubredditChannelListViewController : ListingViewController <UICollectionViewDelegate, UICollectionViewDataSource, PagedTabControllerProtocol>
{
    id <PagedTabControllerParentCallback> _pagedTabControllerParent;
    BaseCollectionView *_collectionView;
    Subreddit *_subreddit;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <PagedTabControllerParentCallback> pagedTabControllerParent; // @synthesize pagedTabControllerParent=_pagedTabControllerParent;
- (id)pageItemId;
- (id)pageItemText;
- (void)scrollDidStopScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (void)updateContentView;
- (void)updateContentViewsWhenLoadingMoreFinishes;
- (void)updateContentViewsWhenReloadFinishes;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)configureWithRecommendedChannels:(id)arg1;
- (void)configureWithSubreddit:(id)arg1 initialChannels:(id)arg2;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


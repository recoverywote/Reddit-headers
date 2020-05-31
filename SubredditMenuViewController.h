//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "PagedTabControllerProtocol-Protocol.h"

@class FeedSpinnerView, NSString, Subreddit, SubredditMenuSet, UIScrollView;
@protocol PagedTabControllerParentCallback;

@interface SubredditMenuViewController : BaseTableViewController <PagedTabControllerProtocol>
{
    id <PagedTabControllerParentCallback> _pagedTabControllerParent;
    SubredditMenuSet *_menuSet;
    Subreddit *_subreddit;
    FeedSpinnerView *_firstLoadSpinner;
}

@property(retain, nonatomic) FeedSpinnerView *firstLoadSpinner; // @synthesize firstLoadSpinner=_firstLoadSpinner;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) SubredditMenuSet *menuSet; // @synthesize menuSet=_menuSet;
@property(nonatomic) __weak id <PagedTabControllerParentCallback> pagedTabControllerParent; // @synthesize pagedTabControllerParent=_pagedTabControllerParent;
- (void).cxx_destruct;
- (id)analyticsPageType;
- (id)analyticsScreenViewName;
- (id)screenViewAnalyticsEvent;
- (id)pageItemId;
- (id)pageItemText;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (void)scrollDidStopScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)navigateToURL:(id)arg1;
- (void)reloadData;
- (void)showFailureState;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)configureWithSubreddit:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


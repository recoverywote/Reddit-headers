//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AddSubredditsToMultiViewControllerDelegate-Protocol.h"
#import "CommunitySubscriptionTableViewCellDelegate-Protocol.h"
#import "ListingStateControllerDelegate-Protocol.h"
#import "MultiCommunityListHeaderViewDelegate-Protocol.h"
#import "PagedTabControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BaseTableView, EmptyCustomFeedView, Listing, ListingStateController, Multi, MultiCommunityListHeaderView, NSArray, NSMutableArray, NSString, RedditService, UIScrollView;
@protocol MultiSubredditListDelegate, PagedTabControllerParentCallback;

@interface MultiSubredditListViewController : BaseViewController <CommunitySubscriptionTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource, MultiCommunityListHeaderViewDelegate, AddSubredditsToMultiViewControllerDelegate, ListingStateControllerDelegate, PagedTabControllerProtocol>
{
    _Bool _isOwner;
    id <MultiSubredditListDelegate> _delegate;
    id <PagedTabControllerParentCallback> _pagedTabParentDelegate;
    RedditService *_service;
    Listing *_listing;
    NSMutableArray *_subreddits;
    ListingStateController *_listingStateController;
    BaseTableView *_tableView;
    Multi *_multi;
    NSArray *_unsubscribedSubreddits;
    NSArray *_indexes;
    MultiCommunityListHeaderView *_headerView;
    EmptyCustomFeedView *_emptyCustomFeedView;
}

@property(retain, nonatomic) EmptyCustomFeedView *emptyCustomFeedView; // @synthesize emptyCustomFeedView=_emptyCustomFeedView;
@property(retain, nonatomic) MultiCommunityListHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(readonly, nonatomic) NSArray *indexes; // @synthesize indexes=_indexes;
@property(copy, nonatomic) NSArray *unsubscribedSubreddits; // @synthesize unsubscribedSubreddits=_unsubscribedSubreddits;
@property(retain, nonatomic) Multi *multi; // @synthesize multi=_multi;
@property(retain, nonatomic) BaseTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ListingStateController *listingStateController; // @synthesize listingStateController=_listingStateController;
@property(retain, nonatomic) NSMutableArray *subreddits; // @synthesize subreddits=_subreddits;
@property(retain, nonatomic) Listing *listing; // @synthesize listing=_listing;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <PagedTabControllerParentCallback> pagedTabParentDelegate; // @synthesize pagedTabParentDelegate=_pagedTabParentDelegate;
@property(nonatomic) __weak id <MultiSubredditListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (id)pageItemText;
- (id)pageItemSelectedImage;
- (id)pageItemImage;
- (void)multiCommunityListHeaderViewDidTapJoinAllButton:(id)arg1;
- (void)multiCommunityListHeaderViewDidTapDoneButton:(id)arg1;
- (void)multiCommunityListHeaderViewDidTapEditButton:(id)arg1;
- (void)multiCommunityListHeaderViewDidTapTitle:(id)arg1;
- (void)addSubredditsToMultiViewController:(id)arg1 didFinishWithMulti:(id)arg2;
- (void)communitySubscriptionTableViewCellDidTapSupplementaryButton:(id)arg1;
- (void)communitySubscriptionTableViewCellDidTapSubscribeButton:(id)arg1;
- (void)removeSubredditAtIndexPath:(id)arg1;
- (void)subredditSubscriptionDidChange:(id)arg1;
- (void)subscribeToAllSubreddits;
- (void)didTapAddCommunitiesButton;
- (void)updateHeader;
- (void)presentAddSubredditsToMultiVC;
- (void)insertSubreddit:(id)arg1 atIndexPath:(id)arg2;
- (void)removeCellAndDataAtIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)listingStateController:(id)arg1 didTapLoadingSpinner:(id)arg2;
- (void)listingStateController:(id)arg1 didPullToRefresh:(id)arg2;
- (void)fetchNextPage;
- (void)refetchListing;
- (void)configureWithMulti:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


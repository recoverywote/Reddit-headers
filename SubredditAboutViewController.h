//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AttributedLabelDelegate-Protocol.h"
#import "AttributedLabelRegularDelegate-Protocol.h"
#import "CommunitySubscriptionCollectionViewCellProtocol-Protocol.h"
#import "PagedTabControllerProtocol-Protocol.h"
#import "SubredditImageWidgetCollectionViewCellDelegate-Protocol.h"
#import "SubredditWidgetButtonCollectionViewCellDelegate-Protocol.h"
#import "SubredditWidgetSizerProtocol-Protocol.h"
#import "TheatreViewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BaseCollectionView, EmptyDogeView, FeedSpinnerView, NSArray, NSString, PillStyle, Subreddit, SubredditImageWidget, SubredditWidgetSet, UIScrollView;
@protocol AccountContext, PagedTabControllerParentCallback;

@interface SubredditAboutViewController : BaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, AttributedLabelDelegate, AttributedLabelRegularDelegate, CommunitySubscriptionCollectionViewCellProtocol, SubredditImageWidgetCollectionViewCellDelegate, SubredditWidgetSizerProtocol, SubredditWidgetButtonCollectionViewCellDelegate, TheatreViewControllerDelegate, PagedTabControllerProtocol>
{
    id <PagedTabControllerParentCallback> _pagedTabControllerParent;
    id <AccountContext> _accountContext;
    BaseCollectionView *_collectionView;
    Subreddit *_subreddit;
    SubredditWidgetSet *_widgetSet;
    NSArray *_viewModels;
    FeedSpinnerView *_firstLoadSpinner;
    EmptyDogeView *_emptyView;
    SubredditImageWidget *_lastClickedImageWidget;
    long long _lastClickedImageWidgetSection;
    PillStyle *_pillStyle;
}

@property(retain, nonatomic) PillStyle *pillStyle; // @synthesize pillStyle=_pillStyle;
@property(nonatomic) long long lastClickedImageWidgetSection; // @synthesize lastClickedImageWidgetSection=_lastClickedImageWidgetSection;
@property(retain, nonatomic) SubredditImageWidget *lastClickedImageWidget; // @synthesize lastClickedImageWidget=_lastClickedImageWidget;
@property(retain, nonatomic) EmptyDogeView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) FeedSpinnerView *firstLoadSpinner; // @synthesize firstLoadSpinner=_firstLoadSpinner;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) SubredditWidgetSet *widgetSet; // @synthesize widgetSet=_widgetSet;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak id <PagedTabControllerParentCallback> pagedTabControllerParent; // @synthesize pagedTabControllerParent=_pagedTabControllerParent;
- (void).cxx_destruct;
- (void)presentAnonymousBrowsingExitDialog;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)analyticsPageType;
- (id)analyticsScreenViewName;
- (id)screenViewAnalyticsEvent;
- (void)linkedImageCollectionViewCellDidTapLinkButton:(id)arg1;
- (void)updateSubscribeButtons:(id)arg1;
- (void)subredditSubscriptionDidChange:(id)arg1;
- (void)communitySubscriptionCollectionViewCellDidTapFollowButton:(id)arg1;
- (double)cellHeightForRuleWidgetDescriptionText:(id)arg1 currentRule:(id)arg2 isRuleExpanded:(_Bool)arg3 rowWidth:(double)arg4;
- (double)cellHeightForButtonWidgetDescriptionText:(id)arg1 rowWidth:(double)arg2;
- (double)cellHeightForTextAreaWidgetText:(id)arg1 rowWidth:(double)arg2;
- (double)cellHeightForCalendarWidget:(id)arg1 currentEventTitle:(id)arg2 currentEventDescription:(id)arg3 rowWidth:(double)arg4;
- (void)subredditWidgetButtonCollectionViewCell:(id)arg1 didTapButton:(id)arg2 withURL:(id)arg3;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)attributedLabelRegular:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)theatreViewDidClickBottomBarLink;
- (void)theatreViewDidClose;
- (void)updateEmptyWelcomeView;
- (void)removeEmptyWelcomeView;
- (void)displayEmptyWelcomeView;
- (void)updateEmptyFrameFromScrollView:(id)arg1;
- (void)didTapImageWidget:(id)arg1 inSection:(long long)arg2;
- (void)viewAllModerators;
- (void)messageTheMods;
- (void)userSelected:(id)arg1;
- (void)navigateToURL:(id)arg1;
- (void)reloadData;
- (void)configureRuleWidgetLayoutForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)showFailureState;
- (void)configureWithSubreddit:(id)arg1;
- (id)pageItemId;
- (id)pageItemText;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (void)scrollDidStopScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)updateContentScrollViewInsets;
- (void)contentScrollViewContentInsetsDidChange;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)collectionViewWidth;
- (void)registerCollectionViewCells;
- (void)configureWidgetDataSource;
- (id)subredditAboutWidgets;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


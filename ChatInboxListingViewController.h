//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingViewController.h"

#import "ChatAddressBookViewControllerDelegate-Protocol.h"
#import "ChatInboxPresentable-Protocol.h"
#import "ChatInboxSubredditDelegatorDelegate-Protocol.h"
#import "ChatNetworkManagerObserver-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"
#import "PagedTabControllerProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BaseBarButtonItem, BaseCollectionView, Channel, ChatInboxNetworkSource, ChatInboxSubredditDelegator, NSArray, NSMutableDictionary, NSString, NSURL, RedditService, UIScrollView;

@interface ChatInboxListingViewController : ListingViewController <UICollectionViewDelegate, UICollectionViewDataSource, ChatAddressBookViewControllerDelegate, ObjectObserverProtocol, ChatNetworkManagerObserver, ChatInboxSubredditDelegatorDelegate, ChatInboxPresentable, PagedTabControllerProtocol>
{
    NSArray *_currentRequestObjects;
    NSArray *_currentChannelObjects;
    BaseCollectionView *_collectionView;
    BaseBarButtonItem *_chatButton;
    ChatInboxSubredditDelegator *_subredditDelegator;
    unsigned long long _type;
    NSMutableDictionary *_preloadingSources;
    Channel *_currentlyOpenedChannel;
}

@property(retain, nonatomic) Channel *currentlyOpenedChannel; // @synthesize currentlyOpenedChannel=_currentlyOpenedChannel;
@property(retain, nonatomic) NSMutableDictionary *preloadingSources; // @synthesize preloadingSources=_preloadingSources;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) ChatInboxSubredditDelegator *subredditDelegator; // @synthesize subredditDelegator=_subredditDelegator;
@property(retain, nonatomic) BaseBarButtonItem *chatButton; // @synthesize chatButton=_chatButton;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSArray *currentChannelObjects; // @synthesize currentChannelObjects=_currentChannelObjects;
@property(copy, nonatomic) NSArray *currentRequestObjects; // @synthesize currentRequestObjects=_currentRequestObjects;
- (void).cxx_destruct;
- (void)updateContentViews;
@property(readonly, nonatomic) ChatInboxNetworkSource *inboxNetworkSource;
- (void)trackAnalyticEventWithAction:(id)arg1 noun:(id)arg2;
@property(readonly, nonatomic) NSString *analyticsScreenViewName;
- (void)pagedTabControllerDidFinishTransition;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)chatInboxSubredditDelegator:(id)arg1 didTapRequest:(id)arg2;
- (void)chatInboxSubredditDelegator:(id)arg1 didTapChannel:(id)arg2;
- (void)chatInboxSubredditDelegator:(id)arg1 didTapPopularChannel:(id)arg2;
- (void)chatNetworkManager:(id)arg1 messageWasDeleted:(long long)arg2;
- (void)chatNetworkManager:(id)arg1 connectionStatusDidChange:(unsigned long long)arg2;
- (void)chatNetworkManager:(id)arg1 userWasBanned:(id)arg2;
- (void)chatNetworkManager:(id)arg1 didReceiveInvitationToChannel:(id)arg2;
- (void)chatNetworkManager:(id)arg1 didReceiveMessage:(id)arg2 channel:(id)arg3;
- (void)chatAddressBookViewController:(id)arg1 didFinishWithChannel:(id)arg2;
- (void)pushViewControllerForChannel:(id)arg1;
- (void)preloadDataForChannel:(id)arg1;
- (void)didReceivePushNotification:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (unsigned long long)inboxNetworkSourceType;
- (void)didTapChatButton:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)heightForNormalCell;
- (double)heightForSeeAllRequestsCell;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateContentViewsWhenLoadingMoreFinishes;
- (void)updateContentViewsWhenReloadFinishes;
- (id)objectForIndexPath:(id)arg1;
- (void)setupEmptyView;
- (void)updateNetworkSource;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithPresenter:(id)arg1 type:(unsigned long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) NSString *analyticsPageType;
@property(copy, nonatomic) NSString *analyticsReason;
@property(copy, nonatomic) NSURL *analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isViewLoaded;
@property(readonly, nonatomic) _Bool screenViewLoggingEnabled;
@property(readonly) Class superclass;

@end


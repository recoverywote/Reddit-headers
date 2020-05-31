//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "PostViewControllerDelegate-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class BaseButton, BaseViewController, ChatHomePagedTabViewController, CommunityTabViewController, HomeViewController, InboxViewController, NSArray, NSString, RedditService, UINavigationController, _TtC6Reddit22CoinSaleEntryContainer, _TtC6Reddit22ForcePasswordResetView, _TtC6Reddit29CommunityCreateFlowController;
@protocol AccountContext, MainTabBarControllerDelegate;

@interface MainTabBarController : UITabBarController <UITabBarControllerDelegate, RUIThemeUpdateCallbackProtocol, PostViewControllerDelegate>
{
    id <MainTabBarControllerDelegate> _mainTabDelegate;
    UINavigationController *_currentViewController;
    HomeViewController *_homeViewController;
    CommunityTabViewController *_communityViewController;
    InboxViewController *_inboxViewController;
    ChatHomePagedTabViewController *_chatHomeController;
    BaseViewController *_postButtonPlaceholderViewController;
    NSArray *_controllers;
    id <AccountContext> _accountContext;
    RedditService *_service;
    BaseButton *_postButton;
    _TtC6Reddit22ForcePasswordResetView *_forcePasswordResetView;
    _TtC6Reddit29CommunityCreateFlowController *_flowController;
    _TtC6Reddit22CoinSaleEntryContainer *_coinSaleContainer;
}

@property(retain, nonatomic) _TtC6Reddit22CoinSaleEntryContainer *coinSaleContainer; // @synthesize coinSaleContainer=_coinSaleContainer;
@property(retain, nonatomic) _TtC6Reddit29CommunityCreateFlowController *flowController; // @synthesize flowController=_flowController;
@property(retain, nonatomic) _TtC6Reddit22ForcePasswordResetView *forcePasswordResetView; // @synthesize forcePasswordResetView=_forcePasswordResetView;
@property(retain, nonatomic) BaseButton *postButton; // @synthesize postButton=_postButton;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) NSArray *controllers; // @synthesize controllers=_controllers;
@property(retain, nonatomic) BaseViewController *postButtonPlaceholderViewController; // @synthesize postButtonPlaceholderViewController=_postButtonPlaceholderViewController;
@property(retain, nonatomic) ChatHomePagedTabViewController *chatHomeController; // @synthesize chatHomeController=_chatHomeController;
@property(retain, nonatomic) InboxViewController *inboxViewController; // @synthesize inboxViewController=_inboxViewController;
@property(retain, nonatomic) CommunityTabViewController *communityViewController; // @synthesize communityViewController=_communityViewController;
@property(retain, nonatomic) HomeViewController *homeViewController; // @synthesize homeViewController=_homeViewController;
@property(retain, nonatomic) UINavigationController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak id <MainTabBarControllerDelegate> mainTabDelegate; // @synthesize mainTabDelegate=_mainTabDelegate;
- (void).cxx_destruct;
- (void)presentAnonymousBrowsingExitDialog;
- (void)showCommunityCreationViewController;
- (id)viewControllerAtTab:(unsigned long long)arg1;
- (id)tabBarItemViewForTabType:(unsigned long long)arg1;
- (void)showCoinsMarketingController;
- (id)coinSaleNavigationButton;
- (void)addNavigationButtons;
- (void)switchToTab:(unsigned long long)arg1 andPopToRootandPushVC:(id)arg2;
- (void)switchToTab:(unsigned long long)arg1 andPushViewController:(id)arg2;
- (void)showChatViewController:(id)arg1 forChatURL:(id)arg2;
- (void)showDeeplinkURL:(id)arg1;
- (void)showMainTabForURL:(id)arg1;
- (void)showViewControllerForURL:(id)arg1;
- (id)findRequestToNavigateViewIfAvailable;
- (void)handleNavigatingToURL:(id)arg1;
- (void)postViewController:(id)arg1 didSubmitPostWithURL:(id)arg2;
- (void)postViewController:(id)arg1 didFinishWithPost:(id)arg2;
- (void)presentPostMenuViewController;
- (void)updatePostButton;
- (void)didTapPostButton:(id)arg1;
- (void)addForcePasswordResetView;
- (id)currentSubredditContext;
- (void)cancelSubredditContextChangeObservation;
- (void)observeSubredditContextChange;
- (void)addPostButton;
- (void)accountDataUpdated;
- (void)themeDidChange:(id)arg1;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)presentPostMenuIfPossible;
- (void)switchToChatTab;
- (void)switchToInboxTab;
- (void)switchToCommunityTabAndStartSearch;
- (void)switchToCommunityTab;
- (void)switchToMainFeedTabAndShowPopular;
- (void)switchToMainFeedTab;
- (void)dismissPostViewController:(id)arg1;
- (void)showPendingPostViewController;
- (void)updateCurrentViewController;
@property(readonly, nonatomic) NSArray *mainViewControllers;
- (void)createViewControllers;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)setTabBarHidden:(_Bool)arg1 updateInsetsForViewController:(id)arg2;
- (void)setTabBarHidden:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id)initWithAccountContext:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


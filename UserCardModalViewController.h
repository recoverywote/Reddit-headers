//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "FlairSelectionSourceViewProtocol-Protocol.h"
#import "ModFormViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "_TtP6Reddit20UserCardViewDelegate_-Protocol.h"

@class BaseView, NSLayoutConstraint, NSString, NSURL, Subreddit, UIPercentDrivenInteractiveTransition, UIViewController, User;
@protocol AccountContext, _TtP6Reddit12UserCardView_;

@interface UserCardModalViewController : BaseViewController <UINavigationControllerDelegate, _TtP6Reddit20UserCardViewDelegate_, ModFormViewControllerDelegate, FlairSelectionSourceViewProtocol, UIViewControllerTransitioningDelegate>
{
    NSString *_username;
    id <AccountContext> _accountContext;
    UIViewController *_fromVC;
    BaseView *_transparentBackground;
    BaseView<_TtP6Reddit12UserCardView_> *_modalView;
    User *_user;
    Subreddit *_subreddit;
    NSString *_modContext;
    NSString *_fromVCPageType;
    unsigned long long _modPermissions;
    NSLayoutConstraint *_modalViewLeadingConstraint;
    NSLayoutConstraint *_modalViewTrailingConstraint;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

+ (id)currentUserModalNavigationControllerWithAccount:(id)arg1 fromVC:(id)arg2;
+ (id)userCardModalNavigationControllerWithAccountContext:(id)arg1 targetUsername:(id)arg2 subreddit:(id)arg3 thingPk:(id)arg4 fromVC:(id)arg5 fromVCPageType:(id)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(retain, nonatomic) NSLayoutConstraint *modalViewTrailingConstraint; // @synthesize modalViewTrailingConstraint=_modalViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *modalViewLeadingConstraint; // @synthesize modalViewLeadingConstraint=_modalViewLeadingConstraint;
@property(nonatomic) unsigned long long modPermissions; // @synthesize modPermissions=_modPermissions;
@property(retain, nonatomic) NSString *fromVCPageType; // @synthesize fromVCPageType=_fromVCPageType;
@property(retain, nonatomic) NSString *modContext; // @synthesize modContext=_modContext;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(retain, nonatomic) BaseView<_TtP6Reddit12UserCardView_> *modalView; // @synthesize modalView=_modalView;
@property(retain, nonatomic) BaseView *transparentBackground; // @synthesize transparentBackground=_transparentBackground;
@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)presentLoginViewControllerWithSource:(unsigned long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)logShowHovercardAnalyticsEventWithModPermsSet:(_Bool)arg1;
- (id)commentContext;
- (id)postContext;
- (id)screenViewAnalyticsEvent;
- (void)trackInitiatingChatEvent;
@property(readonly, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, nonatomic) NSString *analyticsPageType;
- (id)getAuthorFlair;
- (_Bool)shouldShowChangeFlairAction;
- (void)form:(id)arg1 completed:(_Bool)arg2 context:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)isUserMe:(id)arg1;
- (void)userCardViewDidRequestInvite:(id)arg1;
- (void)userCardViewDidRequestStartChat:(id)arg1;
- (void)userCardViewDidRequestViewProfile:(id)arg1;
- (void)userCardViewDidRequestChangeFlair:(id)arg1;
- (void)userCardViewDidRequestUnmute:(id)arg1;
- (void)userCardViewDidRequestMute:(id)arg1;
- (void)userCardViewDidRequestBlock:(id)arg1;
- (void)userCardViewDidRequestUnban:(id)arg1;
- (void)userCardViewDidRequestBan:(id)arg1;
- (void)userCardViewDidRequestClose:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (void)userDidPanView:(id)arg1;
- (void)closeUserModal;
- (_Bool)prefersTabBarHidden;
- (void)configureViewAppearance;
- (void)fetchModActionStatesForUser:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchModPermissionsForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUserWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureWithUserName:(id)arg1 subreddit:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidLoad;
- (id)service;
- (id)initWithAccountContext:(id)arg1 targetUsername:(id)arg2 subreddit:(id)arg3 thingPk:(id)arg4 fromVC:(id)arg5 fromVCPageType:(id)arg6;

// Remaining properties
@property(copy, nonatomic) NSString *analyticsReason;
@property(copy, nonatomic) NSURL *analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool screenViewLoggingEnabled;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PagedTabViewController.h"

#import "ComposeMessageViewControllerDelegate-Protocol.h"
#import "CompositeInboxViewController-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"

@class ActivityViewController, MailListViewController, NSString, RedditService;
@protocol AccountContext;

@interface InboxViewController : PagedTabViewController <ComposeMessageViewControllerDelegate, RUIActionSheetViewControllerDelegate, RUIThemeUpdateCallbackProtocol, ObjectObserverProtocol, CompositeInboxViewController>
{
    id <AccountContext> _accountContext;
    MailListViewController *_mailController;
    ActivityViewController *_activityController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ActivityViewController *activityController; // @synthesize activityController=_activityController;
@property(retain, nonatomic) MailListViewController *mailController; // @synthesize mailController=_mailController;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void)navigateToNotificationSettingsViewController;
- (void)logAnalyticsEventWithAction:(id)arg1 noun:(id)arg2;
- (void)updateContentViewsForData:(id)arg1;
- (void)themeDidChange:(id)arg1;
- (void)pagedTabViewController:(id)arg1 transitionCompleted:(_Bool)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 navigationMethod:(long long)arg5;
- (void)reloadOtherInboxesWithTriggeringViewController:(id)arg1;
- (void)composeMessageViewController:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)updateBadges;
- (void)updateBadgesIfNeeded;
- (_Bool)needsToUpdateBadges;
- (void)setupTabBarItem;
- (void)tappedNewMessage;
- (void)tappedMarkAllAsRead;
- (void)showNotificationSettingsTooltip;
- (void)createViewControllersIfNeeded;
- (void)markAllAsReadOnServerSide;
- (void)refetchAllInboxes;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)didReceivePushNotification:(id)arg1;
- (void)locallyMarkAllAsRead;
- (void)didTapOverflowButton:(id)arg1;
- (void)setupNavBarItems;
- (void)viewDidAppear:(_Bool)arg1;
- (void)forceFetchIfFailed:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "AppsFlyerTrackerDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"
#import "REDToastControllerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class AccountManager, AppRating, NSString, RootViewController, ThemeManager, UIWindow, _TtC6Reddit20AnonymousModeManager;

@interface AppDelegate : UIResponder <UNUserNotificationCenterDelegate, ObjectObserverProtocol, REDToastControllerDelegate, AppsFlyerTrackerDelegate, UIApplicationDelegate>
{
    _Bool _isFirstLaunch;
    _Bool _wasLaunchedInBackground;
    _Bool _didShowWelcomeBack;
    ThemeManager *_themeManager;
    _TtC6Reddit20AnonymousModeManager *_anonymousModeManager;
    UIWindow *_window;
    NSString *_forcedAdId;
    AccountManager *_accountManager;
    unsigned long long _currentBGTaskID;
    AppRating *_appRating;
}

@property(retain, nonatomic) AppRating *appRating; // @synthesize appRating=_appRating;
@property(nonatomic) unsigned long long currentBGTaskID; // @synthesize currentBGTaskID=_currentBGTaskID;
@property(nonatomic) _Bool didShowWelcomeBack; // @synthesize didShowWelcomeBack=_didShowWelcomeBack;
@property(retain, nonatomic) AccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(copy, nonatomic) NSString *forcedAdId; // @synthesize forcedAdId=_forcedAdId;
@property(nonatomic) _Bool wasLaunchedInBackground; // @synthesize wasLaunchedInBackground=_wasLaunchedInBackground;
@property(nonatomic) _Bool isFirstLaunch; // @synthesize isFirstLaunch=_isFirstLaunch;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) _TtC6Reddit20AnonymousModeManager *anonymousModeManager; // @synthesize anonymousModeManager=_anonymousModeManager;
@property(retain, nonatomic) ThemeManager *themeManager; // @synthesize themeManager=_themeManager;
- (void).cxx_destruct;
- (void)onAppOpenAttributionFailure:(id)arg1;
- (void)onAppOpenAttribution:(id)arg1;
- (void)onConversionDataFail:(id)arg1;
- (void)onConversionDataSuccess:(id)arg1;
- (void)toastController:(id)arg1 cancelFetchOperationForToken:(id)arg2;
- (void)toastController:(id)arg1 fetchIconForConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3 token:(CDUnknownBlockType)arg4;
- (id)toastController:(id)arg1 parentViewForToastConfiguration:(id)arg2;
@property(readonly, nonatomic) RootViewController *rootViewController;
- (void)redditServiceDidFinishTask:(id)arg1;
- (void)redditServiceWillStartTask:(id)arg1;
- (void)migrateAppDataIfNeeded;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)setupRootViewController;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (double)toastController:(id)arg1 keyboardPaddingForConfiguration:(id)arg2;
- (struct UIEdgeInsets)toastController:(id)arg1 layoutMarginsForToastConfiguration:(id)arg2;
- (void)checkForNewBuild;
- (void)setupForcedAdFromDeeplinkURL:(id)arg1;
- (void)setupForcedAdFromLaunchOptions:(id)arg1;
- (void)handleTokenRefreshFailure:(id)arg1;
- (void)handleMissingToken:(id)arg1;
- (void)cleanupPersistedData;
- (void)warmUpAccountSpecificManagers;
- (void)accountDidChange:(id)arg1;
- (void)warmUpModules;
- (void)warmUpMiscSingletons;
- (void)setupAFNetworking;
- (void)setupAnalyticsWithLaunchOptions:(id)arg1 isFirstLaunch:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


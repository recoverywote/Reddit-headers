//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AnalyticsViewProtocol-Protocol.h"
#import "PagedTabControllerProtocol-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, NSURL, UILayoutGuide, UIScrollView, UIView;

@interface BaseViewController : UIViewController <UINavigationControllerDelegate, AnalyticsViewProtocol, PagedTabControllerProtocol>
{
    _Bool _prefersTabBarHidden;
    _Bool _isViewCurrentlyDisplayed;
    UILayoutGuide *_contentLayoutGuide;
    NSURL *_analyticsReferringURL;
    NSString *_analyticsReason;
    NSString *_analyticsCorrelationKey;
    NSString *_analyticsSource;
    NSString *_pageItemText;
    NSString *_pageItemId;
    BaseViewController *_parentContentViewController;
    UIView *_fakeNavBarView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *fakeNavBarView; // @synthesize fakeNavBarView=_fakeNavBarView;
@property(nonatomic) __weak BaseViewController *parentContentViewController; // @synthesize parentContentViewController=_parentContentViewController;
@property(nonatomic) _Bool isViewCurrentlyDisplayed; // @synthesize isViewCurrentlyDisplayed=_isViewCurrentlyDisplayed;
@property(copy, nonatomic) NSString *pageItemId; // @synthesize pageItemId=_pageItemId;
@property(copy, nonatomic) NSString *pageItemText; // @synthesize pageItemText=_pageItemText;
@property(copy, nonatomic) NSString *analyticsSource; // @synthesize analyticsSource=_analyticsSource;
@property(copy, nonatomic) NSString *analyticsCorrelationKey; // @synthesize analyticsCorrelationKey=_analyticsCorrelationKey;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(nonatomic) _Bool prefersTabBarHidden; // @synthesize prefersTabBarHidden=_prefersTabBarHidden;
@property(retain, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
- (void)configureNavigationBarAppearance;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigateToViewController:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSString *analyticsPageType;
@property(readonly, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, nonatomic) _Bool screenViewLoggingEnabled;
- (_Bool)shouldAutorotate;
- (_Bool)attemptScrollMainContentViewToTop;
- (void)configureViewAppearance;
- (_Bool)prefersNavigationBarHidden;
@property(readonly, nonatomic) struct UIEdgeInsets preferredContentInset;
- (struct UIEdgeInsets)preferredContentInsetWithHorizontalPadding;
- (struct UIEdgeInsets)preferredContentInsetWithHorizontalPaddingForSize:(struct CGSize)arg1;
@property(readonly, nonatomic) UIView *majorContentView;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)calculateAnalyticsReason;
- (void)didMoveToParentViewController:(id)arg1;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupContentLayoutGuide;
- (void)viewDidLoad;
- (void)handleAppDidEnterBackgroundIgnoringViewControllerVisibility;
- (void)handleAppDidEnterBackgroundWhenViewControllerIsOnTheTop;
- (void)handleAppDidEnterForegroundIgnoringViewControllerVisibility;
- (void)handleAppDidEnterForegroundWhenViewControllerIsOnTheTop;
- (id)init;
- (_Bool)openMetaPaywall:(id)arg1 forSubreddit:(id)arg2 accountContext:(id)arg3;
- (_Bool)openMetaBadgePreviewModal:(id)arg1 forSubreddit:(id)arg2 post:(id)arg3 comment:(id)arg4 accountContext:(id)arg5;
- (_Bool)openMetaBadgePreviewModalWithBadges:(id)arg1 forSubreddit:(id)arg2 accountContext:(id)arg3 correlationID:(id)arg4;
- (void)sendScreenViewEventFromBackground:(_Bool)arg1;
- (id)screenViewAnalyticsEvent;
- (void)fireDisappearAnalyticsEvents;
- (void)observeHlsPlayerEvent:(id)arg1;
- (void)addHlsEventNotificationHandler;
- (id)handleLinkUrl:(id)arg1 fromPost:(id)arg2 accountContext:(id)arg3;
- (_Bool)openUserModModal:(id)arg1 forSubreddit:(id)arg2 withContext:(id)arg3 accountContext:(id)arg4;
- (id)handleLinkUrlOfPost:(id)arg1 accountContext:(id)arg2;
- (_Bool)openMetaTransferWithURL:(id)arg1 accountContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
@property(readonly) Class superclass;

@end


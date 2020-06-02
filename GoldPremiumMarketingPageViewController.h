//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AttributedLabelRegularDelegate-Protocol.h"
#import "GoldPremiumPurchaseSuccessViewControllerDelegate-Protocol.h"
#import "InAppPurchaseManagerDelegate-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class GoldProduct, NSArray, NSLayoutConstraint, NSString, PremiumMarketingEventLogger, RedditService, UIButton, UICollectionView, UILabel, UIPageControl, UIScrollView, UIStackView, UIView;
@protocol AccountContext;

@interface GoldPremiumMarketingPageViewController : BaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, RUIThemeUpdateCallbackProtocol, InAppPurchaseManagerDelegate, AttributedLabelRegularDelegate, GoldPremiumPurchaseSuccessViewControllerDelegate>
{
    _Bool _disableSwipeToGoBackGesture;
    _Bool _wasReferredFromInFeedUnit;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIStackView *_contentStackView;
    UIView *_headerView;
    UIView *_footerView;
    UIView *_titleView;
    UIView *_premiumBenefitContentView;
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    UIButton *_actionButton;
    UILabel *_subscriptionInfoLabel;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_contentStackViewWidthConstraint;
    NSArray *_benefitViewModels;
    GoldProduct *_premiumProduct;
    id <AccountContext> _accountContext;
    NSString *_correlationId;
    PremiumMarketingEventLogger *_eventLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PremiumMarketingEventLogger *eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) _Bool wasReferredFromInFeedUnit; // @synthesize wasReferredFromInFeedUnit=_wasReferredFromInFeedUnit;
@property(readonly, nonatomic) NSString *correlationId; // @synthesize correlationId=_correlationId;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) GoldProduct *premiumProduct; // @synthesize premiumProduct=_premiumProduct;
@property(retain, nonatomic) NSArray *benefitViewModels; // @synthesize benefitViewModels=_benefitViewModels;
@property(retain, nonatomic) NSLayoutConstraint *contentStackViewWidthConstraint; // @synthesize contentStackViewWidthConstraint=_contentStackViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) UILabel *subscriptionInfoLabel; // @synthesize subscriptionInfoLabel=_subscriptionInfoLabel;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *premiumBenefitContentView; // @synthesize premiumBenefitContentView=_premiumBenefitContentView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool disableSwipeToGoBackGesture; // @synthesize disableSwipeToGoBackGesture=_disableSwipeToGoBackGesture;
- (void)presentLoginViewController;
- (void)goldPremiumPurchaseSuccessViewController:(id)arg1 didTapLinkUrl:(id)arg2;
- (void)attributedLabelRegular:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)inAppPurchaseManager:(id)arg1 didRefreshReceiptWithError:(id)arg2;
- (void)inAppPurchaseManager:(id)arg1 encounteredUninishedTransactionForDifferentAccount:(id)arg2 transactionId:(id)arg3 productId:(id)arg4 correlationId:(id)arg5 removalHandler:(CDUnknownBlockType)arg6;
- (void)inAppPurchaseManager:(id)arg1 transactionDidFailWithId:(id)arg2 correlationId:(id)arg3 error:(id)arg4;
- (void)inAppPurchaseManager:(id)arg1 transactionDidDeferWithId:(id)arg2 correlationId:(id)arg3;
- (void)inAppPurchaseManager:(id)arg1 transactionDidCancelWithCorrelationId:(id)arg2;
- (void)inAppPurchaseManager:(id)arg1 transactionDidSucceedWithId:(id)arg2 correlationId:(id)arg3;
- (void)inAppPurchaseManager:(id)arg1 transactionDidBeginValidationWithId:(id)arg2 correlationId:(id)arg3;
- (void)inAppPurchaseManagerDidBeginTransaction:(id)arg1 correlationId:(id)arg2;
- (void)updateThemeProperty;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)actionButtonDidTap:(id)arg1;
- (void)handleFetchFailure;
- (void)handleFetchSuccess;
- (void)showValidationFailureDialog;
- (void)hidePurchasingModalIfPresented;
- (void)fetchGoldProductsIfNecessary;
- (void)updateSubscriptionInfoLabel;
- (void)updateBenefitsInfo;
- (void)updateActionButton;
- (_Bool)isSubscribed;
- (void)updatePremiumProduct;
- (double)estimatedCollectionViewHeight;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 correlationId:(id)arg2 wasReferredFromInFeedUnit:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


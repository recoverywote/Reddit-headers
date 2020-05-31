//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PopupViewController.h"

#import "AttributedLabelRegularDelegate-Protocol.h"

@class AttributedLabelRegular, Award, BaseButton, BaseView, GoldProduct, NSString, UILabel, _TtC6Reddit25AnimatableRemoteImageView;
@protocol AccountContext, GoldCoinPurchaseConfirmationViewControllerDelegate;

@interface GoldCoinPurchaseConfirmationViewController : PopupViewController <AttributedLabelRegularDelegate>
{
    id <GoldCoinPurchaseConfirmationViewControllerDelegate> _delegate;
    id <AccountContext> _accountContext;
    Award *_award;
    GoldProduct *_purchasingProduct;
    BaseView *_dialogContentView;
    BaseButton *_actionButton;
    _TtC6Reddit25AnimatableRemoteImageView *_gildIconImageView;
    UILabel *_confirmationTitleLabel;
    UILabel *_confirmationMessageLabel;
    AttributedLabelRegular *_userAgreementLabel;
}

@property(retain, nonatomic) AttributedLabelRegular *userAgreementLabel; // @synthesize userAgreementLabel=_userAgreementLabel;
@property(retain, nonatomic) UILabel *confirmationMessageLabel; // @synthesize confirmationMessageLabel=_confirmationMessageLabel;
@property(retain, nonatomic) UILabel *confirmationTitleLabel; // @synthesize confirmationTitleLabel=_confirmationTitleLabel;
@property(retain, nonatomic) _TtC6Reddit25AnimatableRemoteImageView *gildIconImageView; // @synthesize gildIconImageView=_gildIconImageView;
@property(retain, nonatomic) BaseButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) BaseView *dialogContentView; // @synthesize dialogContentView=_dialogContentView;
@property(retain, nonatomic) GoldProduct *purchasingProduct; // @synthesize purchasingProduct=_purchasingProduct;
@property(retain, nonatomic) Award *award; // @synthesize award=_award;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak id <GoldCoinPurchaseConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupViews;
- (void)attributedLabelRegular:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)closeButtonDidTap:(id)arg1;
- (void)actionButtonDidTap:(id)arg1;
- (void)didDismissByTappingDimmer;
- (void)viewDidLoad;
- (id)initWithAward:(id)arg1 purchasingProduct:(id)arg2 accountContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Economy/GoldProductTableViewCell.h>

@class BaseLabel, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;

@interface GoldPremiumProductTableViewCell : GoldProductTableViewCell
{
    UIView *_containerView;
    UIImageView *_premiumLogoImageView;
    BaseLabel *_bonusLabel;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_purchaseButton;
    NSLayoutConstraint *_descriptionToContainerConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *descriptionToContainerConstraint; // @synthesize descriptionToContainerConstraint=_descriptionToContainerConstraint;
@property(retain, nonatomic) UIButton *purchaseButton; // @synthesize purchaseButton=_purchaseButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) BaseLabel *bonusLabel; // @synthesize bonusLabel=_bonusLabel;
@property(retain, nonatomic) UIImageView *premiumLogoImageView; // @synthesize premiumLogoImageView=_premiumLogoImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)setupViews;
- (void)setBonusLabelHidden:(_Bool)arg1;
- (void)handleCellDidTap:(id)arg1;
- (void)configureWithProduct:(id)arg1 forAccount:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


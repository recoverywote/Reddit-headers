//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class BaseButton, BaseImageView, RUITheme, UILabel;

@interface EmptyDogeView : BaseView
{
    _Bool _useButton;
    RUITheme *_themeOverride;
    BaseImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    BaseButton *_button;
    double _contentHeight;
}

@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) BaseButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) BaseImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) RUITheme *themeOverride; // @synthesize themeOverride=_themeOverride;
@property(nonatomic) _Bool useButton; // @synthesize useButton=_useButton;
- (void).cxx_destruct;
- (void)setDescription:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1 withTintColor:(id)arg2;
- (void)setImage:(id)arg1;
- (void)configureTheme;
- (void)centerVerticallyElements;
- (void)arrangeElements;
- (void)layoutSubviews;
- (void)commonInit;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1 themeOverride:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


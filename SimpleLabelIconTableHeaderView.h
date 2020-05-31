//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BaseButton, BaseLabel, BaseView;

@interface SimpleLabelIconTableHeaderView : UIView
{
    BaseLabel *_titleLabel;
    BaseButton *_actionButton;
    BaseView *_dividerView;
}

@property(retain, nonatomic) BaseView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) BaseButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configureActionButtonWithImage:(id)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end


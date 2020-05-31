//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILayoutGuide, UIView;

@interface BaseTableViewCell : UITableViewCell
{
    UIView *_mainContentView;
    NSLayoutConstraint *_widthConstraint;
    UILayoutGuide *_contentAreaGuide;
}

@property(retain, nonatomic) UILayoutGuide *contentAreaGuide; // @synthesize contentAreaGuide=_contentAreaGuide;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) UIView *mainContentView; // @synthesize mainContentView=_mainContentView;
- (void).cxx_destruct;
- (double)maxContentWidthWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) double maxContentWidth;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


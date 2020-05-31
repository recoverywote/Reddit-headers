//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IBGSurveyMCQLayoutAttributes, UIImageView, UILabel;

@interface IBGMCQCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIImageView *_tickImageView;
    IBGSurveyMCQLayoutAttributes *_layoutAttributes;
}

@property(retain, nonatomic) IBGSurveyMCQLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) UIImageView *tickImageView; // @synthesize tickImageView=_tickImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setAnswer:(id)arg1;
- (void)configureAccessibilityForIndexPath:(id)arg1 value:(id)arg2 selected:(_Bool)arg3 totalCount:(unsigned long long)arg4;
- (void)unselectCell;
- (void)selectCell;
- (void)addSubviews;
- (void)configureCellatIndexPath:(id)arg1 answer:(id)arg2 isSelected:(_Bool)arg3 totalCount:(unsigned long long)arg4;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateConstraints;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


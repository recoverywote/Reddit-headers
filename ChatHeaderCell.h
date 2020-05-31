//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class BaseLabel, NSArray;

@interface ChatHeaderCell : UICollectionViewCell
{
    NSArray *_iconLabels;
    BaseLabel *_descriptionLabel;
    NSArray *_users;
}

+ (id)iconLabelsForUsers:(id)arg1;
+ (id)descriptionLabelText;
+ (struct CGSize)calculatedSizeWithData:(id)arg1;
@property(copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) BaseLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) NSArray *iconLabels; // @synthesize iconLabels=_iconLabels;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithUsers:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end


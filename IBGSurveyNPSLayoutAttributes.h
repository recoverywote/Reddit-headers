//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class UIFont;

@interface IBGSurveyNPSLayoutAttributes : UICollectionViewLayoutAttributes
{
    long long _orientation;
    double _cellHeight;
    unsigned long long _collectionViewNumberOfItems;
    double _collectionViewCornerRadius;
    double _collectionViewBorderWidth;
    double _zoomedViewYOffset;
    double _tagCollectionViewHeight;
    UIFont *_tagLabelFont;
}

@property(retain, nonatomic) UIFont *tagLabelFont; // @synthesize tagLabelFont=_tagLabelFont;
@property(nonatomic) double tagCollectionViewHeight; // @synthesize tagCollectionViewHeight=_tagCollectionViewHeight;
@property(nonatomic) double zoomedViewYOffset; // @synthesize zoomedViewYOffset=_zoomedViewYOffset;
@property(nonatomic) double collectionViewBorderWidth; // @synthesize collectionViewBorderWidth=_collectionViewBorderWidth;
@property(nonatomic) double collectionViewCornerRadius; // @synthesize collectionViewCornerRadius=_collectionViewCornerRadius;
@property(nonatomic) unsigned long long collectionViewNumberOfItems; // @synthesize collectionViewNumberOfItems=_collectionViewNumberOfItems;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (void)setupForLandscape;
- (void)setupForPortrait;
- (void)setupCommon;
- (id)initWithLayoutOrientation:(long long)arg1;
- (id)init;

@end

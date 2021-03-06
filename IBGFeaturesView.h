//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Instabug/IBGFeatureSortingTableViewDelegate-Protocol.h>

@class IBGFiltersContainerView, UITableView;
@protocol IBGFeaturesViewDelegate><IBGSegmentControlDelegate;

@interface IBGFeaturesView : UIView <IBGFeatureSortingTableViewDelegate>
{
    _Bool _isShowingSortingView;
    UITableView *_featuresListTableView;
    IBGFiltersContainerView *_filtersView;
    UIView *_sortingTableView;
    id <IBGFeaturesViewDelegate><IBGSegmentControlDelegate> _delegate;
}

@property(nonatomic) __weak id <IBGFeaturesViewDelegate><IBGSegmentControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShowingSortingView; // @synthesize isShowingSortingView=_isShowingSortingView;
@property(retain, nonatomic) UIView *sortingTableView; // @synthesize sortingTableView=_sortingTableView;
@property(retain, nonatomic) IBGFiltersContainerView *filtersView; // @synthesize filtersView=_filtersView;
@property(retain, nonatomic) UITableView *featuresListTableView; // @synthesize featuresListTableView=_featuresListTableView;
- (void).cxx_destruct;
- (void)addSubviews;
- (void)didDismissViewWithType:(long long)arg1 stringValue:(id)arg2;
- (void)didTapSortingView;
- (void)selectSegmentWithTitle:(id)arg1;
- (void)dismissSortingView;
- (void)presentSortingView;
- (void)stopLoading;
- (void)startLoading;
- (void)updateConstraints;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end


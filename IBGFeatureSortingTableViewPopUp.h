//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Instabug/IBGFeatureSortingTableViewDelegate-Protocol.h>
#import <Instabug/UIGestureRecognizerDelegate-Protocol.h>

@class IBGSortingTableDataSource, NSString, UILayoutGuide, UITableView;
@protocol IBGFeatureSortingTableViewDelegate;

@interface IBGFeatureSortingTableViewPopUp : UIView <IBGFeatureSortingTableViewDelegate, UIGestureRecognizerDelegate>
{
    IBGSortingTableDataSource *_sortingTableDataSource;
    UITableView *_tableView;
    UIView *_tableContainerView;
    UILayoutGuide *_containerLayoutGuide;
    id <IBGFeatureSortingTableViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IBGFeatureSortingTableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILayoutGuide *containerLayoutGuide; // @synthesize containerLayoutGuide=_containerLayoutGuide;
@property(retain, nonatomic) UIView *tableContainerView; // @synthesize tableContainerView=_tableContainerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IBGSortingTableDataSource *sortingTableDataSource; // @synthesize sortingTableDataSource=_sortingTableDataSource;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dismiss;
- (void)presentWithActionButtonWidth:(double)arg1;
- (void)didDismissViewWithType:(long long)arg1 stringValue:(id)arg2;
- (void)updateConstraints;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Instabug/IBGFeatureDetailHeaderViewDelegate-Protocol.h>

@class IBGCommentTableView, IBGFeatureDetailDummyCommentView, IBGFeatureDetailHeaderView, NSLayoutConstraint;

@interface IBGFeatureDetailView : UIView <IBGFeatureDetailHeaderViewDelegate>
{
    NSLayoutConstraint *_commentViewHeightConstraint;
    IBGCommentTableView *_commentsTableView;
    IBGFeatureDetailHeaderView *_headerView;
    IBGFeatureDetailDummyCommentView *_dummyCommentView;
    NSLayoutConstraint *_widthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) IBGFeatureDetailDummyCommentView *dummyCommentView; // @synthesize dummyCommentView=_dummyCommentView;
@property(retain, nonatomic) IBGFeatureDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IBGCommentTableView *commentsTableView; // @synthesize commentsTableView=_commentsTableView;
@property(retain, nonatomic) NSLayoutConstraint *commentViewHeightConstraint; // @synthesize commentViewHeightConstraint=_commentViewHeightConstraint;
- (void).cxx_destruct;
- (void)didToggleView;
- (void)addSubviews;
- (void)hideCommentView;
- (void)populateHeaderWithFeatureRequest:(id)arg1;
- (void)orientaitonChanged;
- (void)updateHeaderLayout;
- (void)dealloc;
- (void)updateConstraints;
- (id)init;

@end


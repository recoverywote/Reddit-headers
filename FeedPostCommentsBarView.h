//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "ObjectObserverProtocol-Protocol.h"

@class BaseButton, BaseLabel, NSObject, NSString, Post, UIButton;
@protocol FeedPostCommentBarViewDelegate;

@interface FeedPostCommentsBarView : BaseView <ObjectObserverProtocol>
{
    _Bool _shouldApplyStyling;
    _Bool _isInModMode;
    _Bool _shouldShowAwardButtonInCommentBar;
    _Bool _shouldAllowModerationAction;
    NSObject<FeedPostCommentBarViewDelegate> *_delegate;
    Post *_post;
    BaseLabel *_scoreLabel;
    BaseButton *_centerButton;
    BaseButton *_actionButton;
    BaseButton *_awardButton;
    UIButton *_upvoteButton;
    UIButton *_downvoteButton;
}

@property(retain, nonatomic) UIButton *downvoteButton; // @synthesize downvoteButton=_downvoteButton;
@property(retain, nonatomic) UIButton *upvoteButton; // @synthesize upvoteButton=_upvoteButton;
@property(retain, nonatomic) BaseButton *awardButton; // @synthesize awardButton=_awardButton;
@property(retain, nonatomic) BaseButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) BaseButton *centerButton; // @synthesize centerButton=_centerButton;
@property(retain, nonatomic) BaseLabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(nonatomic) _Bool shouldAllowModerationAction; // @synthesize shouldAllowModerationAction=_shouldAllowModerationAction;
@property(nonatomic) _Bool shouldShowAwardButtonInCommentBar; // @synthesize shouldShowAwardButtonInCommentBar=_shouldShowAwardButtonInCommentBar;
@property(nonatomic) _Bool isInModMode; // @synthesize isInModMode=_isInModMode;
@property(nonatomic) _Bool shouldApplyStyling; // @synthesize shouldApplyStyling=_shouldApplyStyling;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(nonatomic) __weak NSObject<FeedPostCommentBarViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateContentViewsForData:(id)arg1;
- (_Bool)isVoteIconStylingAllowed;
- (void)updateContentViews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didTapAwardButton;
- (void)didTapDownvote;
- (void)didTapUpvote;
- (void)didTapActionButton;
- (void)didTapCenterButton;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (_Bool)shouldShowAwardButton;
- (void)updateActionButton;
- (void)updateCenterButton;
- (void)updateButtonImages;
- (void)updateAwardButtonTitleHidden:(_Bool)arg1;
- (_Bool)isPostReadonly;
- (void)configureWithData:(id)arg1;
- (void)prepareForReuse;
- (double)seperatorSpacing;
- (SEL)customLineColor;
- (SEL)customMetatextColor;
- (SEL)customActionColor;
- (SEL)customBackgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


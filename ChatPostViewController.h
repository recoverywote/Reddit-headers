//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ASCollectionDataSource-Protocol.h"
#import "ASCollectionDelegate-Protocol.h"
#import "ChatConnectionStatusViewControllerDelegate-Protocol.h"
#import "ChatPostPresenterDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "_TtP6Reddit34ChatPostBlockedMessageCellDelegate_-Protocol.h"

@class ASCollectionNode, BaseView, ChatConnectionStatusViewController, ChatInputAccessoryView, ChatPostDelegator, ChatPostPresenter, CollectionDiffingAdapter, Comment, EmptyDogeView, FeedSpinnerView, GradientView, NSLayoutConstraint, NSObject, NSString, PostDetailCollectionViewLayout, PostDetailViewController, UIButton, UIView, _TtC6Reddit17ChatPostRulesView, _TtC6Reddit18ChatPostHeaderView, _TtC6Reddit21LiveStreamAwardButton;
@protocol IGListDiffable;

@interface ChatPostViewController : UIViewController <UIGestureRecognizerDelegate, ASCollectionDelegate, ASCollectionDataSource, ChatPostPresenterDelegate, ChatConnectionStatusViewControllerDelegate, _TtP6Reddit34ChatPostBlockedMessageCellDelegate_, UIScrollViewDelegate>
{
    _Bool _isRulesViewCollapsed;
    ChatPostPresenter *_presenter;
    PostDetailViewController *_postDetailViewController;
    CDUnknownBlockType _onDismiss;
    double _initialHeightOffset;
    BaseView *_chatPostStatusBarBackgroundView;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_emptyViewCenterYConstraint;
    _TtC6Reddit18ChatPostHeaderView *_headerView;
    BaseView *_safeAreaFooterView;
    ASCollectionNode *_collectionNode;
    _TtC6Reddit17ChatPostRulesView *_rulesView;
    CollectionDiffingAdapter *_diffingAdapter;
    PostDetailCollectionViewLayout *_feedViewFlowLayout;
    ChatConnectionStatusViewController *_connectIndicatorController;
    ChatPostDelegator *_delegator;
    ChatInputAccessoryView *_chatInputAccessoryView;
    UIButton *_dismissButton;
    GradientView *_topGradientView;
    FeedSpinnerView *_firstLoadSpinner;
    EmptyDogeView *_emptyView;
    Comment *_parentCommentForReply;
    NSObject<IGListDiffable> *_highlightedItem;
    NSObject<IGListDiffable> *_scheduledDeeplinkItem;
    NSLayoutConstraint *_rulesViewHeightConstraint;
    NSLayoutConstraint *_collectionNodeViewBottomConstraint;
    double _postFrameMaxY;
    double _rulesViewMaxFrameHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double rulesViewMaxFrameHeight; // @synthesize rulesViewMaxFrameHeight=_rulesViewMaxFrameHeight;
@property(nonatomic) _Bool isRulesViewCollapsed; // @synthesize isRulesViewCollapsed=_isRulesViewCollapsed;
@property(nonatomic) double postFrameMaxY; // @synthesize postFrameMaxY=_postFrameMaxY;
@property(retain, nonatomic) NSLayoutConstraint *collectionNodeViewBottomConstraint; // @synthesize collectionNodeViewBottomConstraint=_collectionNodeViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rulesViewHeightConstraint; // @synthesize rulesViewHeightConstraint=_rulesViewHeightConstraint;
@property(retain, nonatomic) NSObject<IGListDiffable> *scheduledDeeplinkItem; // @synthesize scheduledDeeplinkItem=_scheduledDeeplinkItem;
@property(retain, nonatomic) NSObject<IGListDiffable> *highlightedItem; // @synthesize highlightedItem=_highlightedItem;
@property(retain, nonatomic) Comment *parentCommentForReply; // @synthesize parentCommentForReply=_parentCommentForReply;
@property(retain, nonatomic) EmptyDogeView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) FeedSpinnerView *firstLoadSpinner; // @synthesize firstLoadSpinner=_firstLoadSpinner;
@property(retain, nonatomic) GradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) ChatInputAccessoryView *chatInputAccessoryView; // @synthesize chatInputAccessoryView=_chatInputAccessoryView;
@property(retain, nonatomic) ChatPostDelegator *delegator; // @synthesize delegator=_delegator;
@property(retain, nonatomic) ChatConnectionStatusViewController *connectIndicatorController; // @synthesize connectIndicatorController=_connectIndicatorController;
@property(retain, nonatomic) PostDetailCollectionViewLayout *feedViewFlowLayout; // @synthesize feedViewFlowLayout=_feedViewFlowLayout;
@property(retain, nonatomic) CollectionDiffingAdapter *diffingAdapter; // @synthesize diffingAdapter=_diffingAdapter;
@property(retain, nonatomic) _TtC6Reddit17ChatPostRulesView *rulesView; // @synthesize rulesView=_rulesView;
@property(retain, nonatomic) ASCollectionNode *collectionNode; // @synthesize collectionNode=_collectionNode;
@property(retain, nonatomic) BaseView *safeAreaFooterView; // @synthesize safeAreaFooterView=_safeAreaFooterView;
@property(retain, nonatomic) _TtC6Reddit18ChatPostHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSLayoutConstraint *emptyViewCenterYConstraint; // @synthesize emptyViewCenterYConstraint=_emptyViewCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) BaseView *chatPostStatusBarBackgroundView; // @synthesize chatPostStatusBarBackgroundView=_chatPostStatusBarBackgroundView;
@property(nonatomic) double initialHeightOffset; // @synthesize initialHeightOffset=_initialHeightOffset;
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
@property(nonatomic) __weak PostDetailViewController *postDetailViewController; // @synthesize postDetailViewController=_postDetailViewController;
@property(retain, nonatomic) ChatPostPresenter *presenter; // @synthesize presenter=_presenter;
- (void)presentLoginViewControllerWithSource:(unsigned long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (unsigned long long)currentPresentationStyle;
- (void)cellTappedWithBucket:(id)arg1;
- (void)didTapParentCommentNodeWithComment:(id)arg1;
- (void)handleTapReplyToCommentWithComment:(id)arg1;
- (void)trackDidTapLoggedOutLoginButton;
- (void)trackDidTapLoggedOutSignUpButton;
- (_Bool)resignFirstResponder;
- (id)inputAccessoryView;
- (_Bool)canBecomeFirstResponder;
@property(readonly, nonatomic) _Bool isComposingMessage;
- (void)didTapInputViewForAnonymousBrowsingUser:(id)arg1;
- (void)didTapInputViewForAnonUser:(id)arg1;
- (void)updateInputAccessoryForAwarding;
- (void)configureInputAccessory;
- (void)configureCloseButtonActionForReplies;
- (void)configureSendButtonActionForChatPosts;
- (void)changeHighlightStatusOfItem:(id)arg1 enabled:(_Bool)arg2;
@property(readonly, nonatomic) UIView *parentView;
- (double)maximumYOffset;
@property(readonly, nonatomic) _TtC6Reddit21LiveStreamAwardButton *awardView;
- (void)scrollToBottomAnimated;
- (_Bool)shouldFullyCollapseChat;
- (void)makeChatAppearanceHalfScreen;
- (void)minimizeView;
- (void)maximizeView;
- (void)userDidPanSortBar:(id)arg1;
- (void)didTapFeedSpinner:(id)arg1;
- (void)dismissButtonTap:(id)arg1;
- (void)userDidTapSortBar:(id)arg1;
- (void)configureTypeAheadUsers;
- (void)windowDidBecomeVisible:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)chatConnectionStatusViewControllerDidTapActionButton:(id)arg1;
- (void)scrollToItemWithItem:(id)arg1;
- (void)chatPostPresenterFetchDidFail:(id)arg1;
- (void)chatPostPresenterDidFetchData:(id)arg1 shouldMaintainContentOffset:(_Bool)arg2 animated:(_Bool)arg3 scrollToItem:(id)arg4;
- (void)chatPostPresenter:(id)arg1 connectionStateDidChange:(long long)arg2;
- (void)reloadListDataWithFixedContentOffsetAnimated:(_Bool)arg1 scrollToItem:(id)arg2;
- (void)reloadListDataAnimated:(_Bool)arg1 scrollToItem:(id)arg2;
- (void)collectionNode:(id)arg1 willDisplayItemWithNode:(id)arg2;
- (void)collectionNode:(id)arg1 willBeginBatchFetchWithContext:(id)arg2;
- (_Bool)shouldBatchFetchForCollectionNode:(id)arg1;
- (long long)collectionNode:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionNode:(id)arg1;
- (CDStruct_90e057aa)collectionNode:(id)arg1 constrainedSizeForItemAtIndexPath:(id)arg2;
- (CDUnknownBlockType)collectionNode:(id)arg1 nodeBlockForItemAtIndexPath:(id)arg2;
- (void)removeRulesView;
- (void)addRulesView;
- (void)configureStyling;
- (void)addHeightConstraints;
- (void)addChatPostViewToParent;
- (void)addSafeAreaFooterView;
- (id)topAnchorForView;
- (void)addHeaderView;
- (void)addChatPostStatusBarBackgroundView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)shouldBecomeFirstResponder;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setInputAsFirstResponder;
- (void)setMaxChatCommentLength:(long long)arg1;
- (void)toggleMessageProgressSpinnerShown:(_Bool)arg1;
- (void)dismissChat;
- (id)initWithPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


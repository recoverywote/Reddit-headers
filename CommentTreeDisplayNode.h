//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "PannableCellManagerDelegate-Protocol.h"

@class ASDisplayNode, CommentSwipeView, CommentTreeContentNode, CommentTreeNode, CommentTreeNodeOptions, NSIndexPath, NSString, NSTimer, PannableCellManager;
@protocol AccountContext, CommentTreeDisplayNodeDelegate;

@interface CommentTreeDisplayNode : BaseFeedDisplayNode <PannableCellManagerDelegate>
{
    CommentTreeNode *_commentNode;
    id <AccountContext> _accountContext;
    CommentTreeContentNode *_commentTreeContentNode;
    ASDisplayNode *_commentSwipeNode;
    ASDisplayNode *_highlightNode;
    ASDisplayNode *_overlayNode;
    id <CommentTreeDisplayNodeDelegate> _delegate;
    NSIndexPath *_indexPath;
    CommentTreeNodeOptions *_commentOptions;
    PannableCellManager *_pannableCellManager;
    NSTimer *_consumeTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *consumeTimer; // @synthesize consumeTimer=_consumeTimer;
@property(retain, nonatomic) PannableCellManager *pannableCellManager; // @synthesize pannableCellManager=_pannableCellManager;
@property(retain, nonatomic) CommentTreeNodeOptions *commentOptions; // @synthesize commentOptions=_commentOptions;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <CommentTreeDisplayNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ASDisplayNode *overlayNode; // @synthesize overlayNode=_overlayNode;
@property(retain, nonatomic) ASDisplayNode *highlightNode; // @synthesize highlightNode=_highlightNode;
@property(retain, nonatomic) ASDisplayNode *commentSwipeNode; // @synthesize commentSwipeNode=_commentSwipeNode;
@property(retain, nonatomic) CommentTreeContentNode *commentTreeContentNode; // @synthesize commentTreeContentNode=_commentTreeContentNode;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) CommentTreeNode *commentNode; // @synthesize commentNode=_commentNode;
- (void)dealloc;
- (void)consumeTimerDidFire:(id)arg1;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)highlightCell:(_Bool)arg1;
- (void)highlightCellBriefly;
- (_Bool)shouldCellPan;
- (unsigned long long)panCellStateForStateNum:(unsigned long long)arg1;
- (void)pannableCellManager:(id)arg1 didPanToIndex:(unsigned long long)arg2;
- (void)pannableCellManager:(id)arg1 changedToIndex:(unsigned long long)arg2;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)addKeyValueObservations;
- (void)didLoad;
- (void)setupPannableCellManager;
- (id)initWithAccountContext:(id)arg1 commentNode:(id)arg2 commentMetaViewModel:(id)arg3 subredditMentionsHandler:(id)arg4 styling:(id)arg5 delegate:(id)arg6 commentOptions:(id)arg7 atIndexPath:(id)arg8;
@property(readonly, nonatomic) CommentSwipeView *commentSwipeView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


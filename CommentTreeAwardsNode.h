//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "ObjectObserverProtocol-Protocol.h"

@class CommentAwardsNode, CommentTreeNode, CommentTreeNodeOptions, CommentTreeVisualDepthNode, NSString;
@protocol CommentTreeAwardsNodeDelegate, ViewContext;

@interface CommentTreeAwardsNode : BaseFeedDisplayNode <ObjectObserverProtocol>
{
    CommentTreeNode *_commentNode;
    id <CommentTreeAwardsNodeDelegate> _delegate;
    id <ViewContext> _viewContext;
    CommentTreeNodeOptions *_commentOptions;
    CommentTreeVisualDepthNode *_visualDepthNode;
    CommentAwardsNode *_awardsNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CommentAwardsNode *awardsNode; // @synthesize awardsNode=_awardsNode;
@property(retain, nonatomic) CommentTreeVisualDepthNode *visualDepthNode; // @synthesize visualDepthNode=_visualDepthNode;
@property(retain, nonatomic) CommentTreeNodeOptions *commentOptions; // @synthesize commentOptions=_commentOptions;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) __weak id <CommentTreeAwardsNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CommentTreeNode *commentNode; // @synthesize commentNode=_commentNode;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didLongPressed:(id)arg1;
- (void)awardsBackgroundNodeDidTap:(id)arg1;
- (void)createNodes;
- (void)didLoad;
- (id)initWithCommentTreeNode:(id)arg1 viewContext:(id)arg2 commentOptions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


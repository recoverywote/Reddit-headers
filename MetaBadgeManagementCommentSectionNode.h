//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class ASImageNode, MetaBadgeManagementTabNode, MetaCommentPreviewNode;

@interface MetaBadgeManagementCommentSectionNode : ASDisplayNode
{
    ASImageNode *_upvoteImageNode;
    ASImageNode *_downvoteImageNode;
    MetaCommentPreviewNode *_commentPreviewNode;
    MetaBadgeManagementTabNode *_tabNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MetaBadgeManagementTabNode *tabNode; // @synthesize tabNode=_tabNode;
@property(retain, nonatomic) MetaCommentPreviewNode *commentPreviewNode; // @synthesize commentPreviewNode=_commentPreviewNode;
@property(retain, nonatomic) ASImageNode *downvoteImageNode; // @synthesize downvoteImageNode=_downvoteImageNode;
@property(retain, nonatomic) ASImageNode *upvoteImageNode; // @synthesize upvoteImageNode=_upvoteImageNode;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)initWithViewContext:(id)arg1 contentColor:(id)arg2 tabs:(id)arg3 selectedTab:(id)arg4 usernameDecoration:(id)arg5 actionDelegate:(id)arg6;

@end


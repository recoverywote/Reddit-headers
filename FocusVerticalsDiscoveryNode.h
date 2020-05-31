//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCollectionViewCellNode.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class ASButtonNode, ASTextNode, FeedPostOptions, FocusVerticalsDiscoveryUnitViewModel, NSMutableArray, NSString;
@protocol FocusVerticalsDiscoveryNodeDelegate;

@interface FocusVerticalsDiscoveryNode : BaseCollectionViewCellNode <UIGestureRecognizerDelegate>
{
    FocusVerticalsDiscoveryUnitViewModel *_viewModel;
    FeedPostOptions *_options;
    id <FocusVerticalsDiscoveryNodeDelegate> _delegate;
    NSMutableArray *_displayElements;
    ASButtonNode *_closeNode;
    ASTextNode *_topPostLabelNode;
}

@property(retain, nonatomic) ASTextNode *topPostLabelNode; // @synthesize topPostLabelNode=_topPostLabelNode;
@property(retain, nonatomic) ASButtonNode *closeNode; // @synthesize closeNode=_closeNode;
@property(copy, nonatomic) NSMutableArray *displayElements; // @synthesize displayElements=_displayElements;
@property(readonly, nonatomic) __weak id <FocusVerticalsDiscoveryNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) FocusVerticalsDiscoveryUnitViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didExitVisibleStateWithVisibilityContext:(id)arg1;
- (void)didTapClose:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)createSpaceNodeWithHeight:(double)arg1;
- (void)createTopPostLabelNode;
- (id)lineSeperator;
- (id)postNodeWithPost:(id)arg1 subreddit:(id)arg2;
- (id)subredditNodeWithSubreddit:(id)arg1;
- (void)createContentNodes;
- (void)addNodesForPosts:(id)arg1 subreddit:(id)arg2;
- (void)addCommunityWithPosts;
- (void)createCloseNode;
- (void)createHeaderNode;
- (void)createNodes;
- (void)configureTopPostLabelNode;
- (void)configureNodes;
- (id)initWithFocusVerticalsDiscoveryUnitViewModel:(id)arg1 options:(id)arg2 delegate:(id)arg3 visibilityTracker:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


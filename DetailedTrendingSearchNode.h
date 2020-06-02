//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASImageNode, ASNetworkImageNode, ASTextNode, Post, TrendingSearch;
@protocol ViewContext;

@interface DetailedTrendingSearchNode : BaseFeedDisplayNode
{
    id <ViewContext> _viewContext;
    ASTextNode *_promotedLabelNode;
    ASTextNode *_queryTextNode;
    ASImageNode *_iconImageNode;
    ASNetworkImageNode *_thumbnailNode;
    ASTextNode *_postTitleNode;
    ASNetworkImageNode *_subredditButtonNode;
    ASTextNode *_subredditDescriptionNode;
    TrendingSearch *_trendingSearch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TrendingSearch *trendingSearch; // @synthesize trendingSearch=_trendingSearch;
@property(retain, nonatomic) ASTextNode *subredditDescriptionNode; // @synthesize subredditDescriptionNode=_subredditDescriptionNode;
@property(retain, nonatomic) ASNetworkImageNode *subredditButtonNode; // @synthesize subredditButtonNode=_subredditButtonNode;
@property(retain, nonatomic) ASTextNode *postTitleNode; // @synthesize postTitleNode=_postTitleNode;
@property(retain, nonatomic) ASNetworkImageNode *thumbnailNode; // @synthesize thumbnailNode=_thumbnailNode;
@property(retain, nonatomic) ASImageNode *iconImageNode; // @synthesize iconImageNode=_iconImageNode;
@property(retain, nonatomic) ASTextNode *queryTextNode; // @synthesize queryTextNode=_queryTextNode;
@property(retain, nonatomic) ASTextNode *promotedLabelNode; // @synthesize promotedLabelNode=_promotedLabelNode;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
- (void)didChangeViewabilityStateWithVisibilityContext:(id)arg1;
- (void)didChangeAdVendorFullyViewableStateWithVisibilityContext:(id)arg1;
- (void)didChangeAdVendorViewableStateWithVisibilityContext:(id)arg1;
- (void)didChangeFullyViewableStateWithVisibilityContext:(id)arg1;
- (void)didChangeViewableStateWithVisibilityContext:(id)arg1;
- (void)didEnterAdViewableStateWithVisibilityContext:(id)arg1;
- (void)didChangeVisibleStateWithVisibilityContext:(id)arg1;
- (void)beginVisibilityTracking;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureThumbnailNode;
- (void)configureNodes;
- (id)initWithViewContext:(id)arg1 trendingSearch:(id)arg2 visibilityTracker:(id)arg3 visibilityOptions:(id)arg4;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
@property(readonly, nonatomic) Post *trendingPost;

@end


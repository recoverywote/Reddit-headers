//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCollectionViewCellNode.h"

#import "ChainedCarouselDisplaying-Protocol.h"
#import "FeedPostCollectionViewItem-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"

@class ASDisplayNode, BaseFeedDisplayNode, Carousel, CarouselContainerNode, FeedPostCommentBarNode, FeedPostCompactContentNode, FeedPostEventBarNode, FeedPostModerateBarNode, FeedPostOptions, FeedPostTitleNode, NSString, Post, UIImage, _TtC6Reddit18FeedPostAwardsNode;
@protocol CarouselContainerNodeDelegate, FeedPostCellNodeDelegate><PillContainerNodeDelegate, ViewContext;

@interface FeedPostCompactCellNode : BaseCollectionViewCellNode <ObjectObserverProtocol, ChainedCarouselDisplaying, FeedPostCollectionViewItem>
{
    Carousel *_chainedCarousel;
    Post *_post;
    FeedPostTitleNode *_titleNode;
    id <ViewContext> _viewContext;
    id <FeedPostCellNodeDelegate><PillContainerNodeDelegate> _delegate;
    id <CarouselContainerNodeDelegate> _carouselContainerNodeDelegate;
    FeedPostOptions *_options;
    _TtC6Reddit18FeedPostAwardsNode *_awardsNode;
    FeedPostCompactContentNode *_contentNode;
    FeedPostCommentBarNode *_commentsBarNode;
    FeedPostModerateBarNode *_modBarNode;
    BaseFeedDisplayNode *_separator;
    ASDisplayNode *_chainedDiscoveryNodeSeparator;
    CarouselContainerNode *_chainedDiscoveryNode;
    FeedPostEventBarNode *_eventBarNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FeedPostEventBarNode *eventBarNode; // @synthesize eventBarNode=_eventBarNode;
@property(retain, nonatomic) CarouselContainerNode *chainedDiscoveryNode; // @synthesize chainedDiscoveryNode=_chainedDiscoveryNode;
@property(retain, nonatomic) ASDisplayNode *chainedDiscoveryNodeSeparator; // @synthesize chainedDiscoveryNodeSeparator=_chainedDiscoveryNodeSeparator;
@property(retain, nonatomic) BaseFeedDisplayNode *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) FeedPostModerateBarNode *modBarNode; // @synthesize modBarNode=_modBarNode;
@property(retain, nonatomic) FeedPostCommentBarNode *commentsBarNode; // @synthesize commentsBarNode=_commentsBarNode;
@property(retain, nonatomic) FeedPostCompactContentNode *contentNode; // @synthesize contentNode=_contentNode;
@property(retain, nonatomic) _TtC6Reddit18FeedPostAwardsNode *awardsNode; // @synthesize awardsNode=_awardsNode;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <CarouselContainerNodeDelegate> carouselContainerNodeDelegate; // @synthesize carouselContainerNodeDelegate=_carouselContainerNodeDelegate;
@property(nonatomic) __weak id <FeedPostCellNodeDelegate><PillContainerNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) FeedPostTitleNode *titleNode; // @synthesize titleNode=_titleNode;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) Carousel *chainedCarousel; // @synthesize chainedCarousel=_chainedCarousel;
@property(readonly, nonatomic) UIImage *previewImage;
- (void)didExitVisibleStateWithVisibilityContext:(id)arg1;
- (void)didEnterVisibleStateWithVisibilityContext:(id)arg1;
- (void)didExitVisibleThresholdStateWithVisibilityContext:(id)arg1;
- (void)didExitFullyVisibleStateWithVisibilityContext:(id)arg1;
- (void)didEnterVisibleThresholdStateWithVisibilityContext:(id)arg1;
- (void)didEnterFullyVisibleStateWithVisibilityContext:(id)arg1;
- (void)didChangeVisibilityWithContext:(id)arg1;
- (void)beginVisibilityTracking;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)layoutDidFinish;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)hideCommentsBar;
- (void)createAwardsNodeIfNecessary;
- (id)initWithPost:(id)arg1 viewContext:(id)arg2 postMetaViewModel:(id)arg3 options:(id)arg4 carouselContainerNodeDelegate:(id)arg5 delegate:(id)arg6 visibilityTracker:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


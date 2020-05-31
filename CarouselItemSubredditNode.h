//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarouselItemNode.h"

#import "ObjectObserverProtocol-Protocol.h"

@class ASNetworkImageNode, ASTextNode, BaseButtonNode, NSObject, NSString, Subreddit, UIColor;
@protocol CarouselItemNodeDelegate><CarouselItemSubredditNodeDelegate;

@interface CarouselItemSubredditNode : CarouselItemNode <ObjectObserverProtocol>
{
    _Bool _isPreviewing;
    _Bool _showActionButton;
    _Bool _hideable;
    _Bool _compact;
    _Bool _didSubscribeTapped;
    _Bool _showDescription;
    _Bool _showSubscriptionCount;
    Subreddit *_subreddit;
    UIColor *_defaultPlaceholderColor;
    NSString *_actionButtonTitle;
    NSString *_actionButtonActionName;
    NSString *_actionButtonIconName;
    ASNetworkImageNode *_bannerImageNode;
    ASNetworkImageNode *_subredditButtonNode;
    BaseButtonNode *_subscribeButtonNode;
    ASTextNode *_subredditTitleNode;
    ASTextNode *_descriptionNode;
    ASTextNode *_subscriptionCountNode;
    BaseButtonNode *_hideButtonNode;
    BaseButtonNode *_actionButtonNode;
}

@property(retain, nonatomic) BaseButtonNode *actionButtonNode; // @synthesize actionButtonNode=_actionButtonNode;
@property(retain, nonatomic) BaseButtonNode *hideButtonNode; // @synthesize hideButtonNode=_hideButtonNode;
@property(retain, nonatomic) ASTextNode *subscriptionCountNode; // @synthesize subscriptionCountNode=_subscriptionCountNode;
@property(retain, nonatomic) ASTextNode *descriptionNode; // @synthesize descriptionNode=_descriptionNode;
@property(retain, nonatomic) ASTextNode *subredditTitleNode; // @synthesize subredditTitleNode=_subredditTitleNode;
@property(retain, nonatomic) BaseButtonNode *subscribeButtonNode; // @synthesize subscribeButtonNode=_subscribeButtonNode;
@property(retain, nonatomic) ASNetworkImageNode *subredditButtonNode; // @synthesize subredditButtonNode=_subredditButtonNode;
@property(retain, nonatomic) ASNetworkImageNode *bannerImageNode; // @synthesize bannerImageNode=_bannerImageNode;
@property(nonatomic) _Bool showSubscriptionCount; // @synthesize showSubscriptionCount=_showSubscriptionCount;
@property(nonatomic) _Bool showDescription; // @synthesize showDescription=_showDescription;
@property(nonatomic) _Bool didSubscribeTapped; // @synthesize didSubscribeTapped=_didSubscribeTapped;
@property(retain, nonatomic) NSString *actionButtonIconName; // @synthesize actionButtonIconName=_actionButtonIconName;
@property(retain, nonatomic) NSString *actionButtonActionName; // @synthesize actionButtonActionName=_actionButtonActionName;
@property(retain, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(retain, nonatomic) UIColor *defaultPlaceholderColor; // @synthesize defaultPlaceholderColor=_defaultPlaceholderColor;
@property(nonatomic) _Bool compact; // @synthesize compact=_compact;
@property(nonatomic) _Bool hideable; // @synthesize hideable=_hideable;
@property(nonatomic) _Bool showActionButton; // @synthesize showActionButton=_showActionButton;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(nonatomic) _Bool isPreviewing; // @synthesize isPreviewing=_isPreviewing;
- (void).cxx_destruct;
- (void)updateContentViewsForData:(id)arg1;
- (void)didTapSubscriptionButton:(id)arg1;
- (_Bool)shouldShowSubscribeButton;
- (void)updateSubscribeButton;
- (void)didTapHideButton:(id)arg1;
- (id)compactLayoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)largeLayoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)bannerSpec;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureActionButton;
- (void)configureThemableNodes;
- (id)hideButtonImage;
- (void)configureNodes;
- (void)didLoad;
- (id)initWithCarousel:(id)arg1 carouselItem:(id)arg2 defaultPlaceholderColor:(id)arg3;
- (id)initWithCarouselItem:(id)arg1 defaultPlaceholderColor:(id)arg2 compact:(_Bool)arg3 hideable:(_Bool)arg4 showDescription:(_Bool)arg5;
- (id)initWithCarouselItem:(id)arg1 defaultPlaceholderColor:(id)arg2 compact:(_Bool)arg3 hideable:(_Bool)arg4 showDescription:(_Bool)arg5 showActionButton:(_Bool)arg6 actionButtonTitle:(id)arg7 actionButtonIconName:(id)arg8 actionButtonActionName:(id)arg9 showSubscriptionCount:(_Bool)arg10;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak NSObject<CarouselItemNodeDelegate><CarouselItemSubredditNodeDelegate> *delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


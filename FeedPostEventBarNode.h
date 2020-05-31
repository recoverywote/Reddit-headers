//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "ASTextNodeDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"

@class ASButtonNode, ASDisplayNode, ASTextNode, FeedPostEventBarOptions, KeyValueObservation, NSString, NSTimer, Post;
@protocol FeedPostEventBarNodeDelegate;

@interface FeedPostEventBarNode : BaseFeedDisplayNode <ObjectObserverProtocol, ASTextNodeDelegate>
{
    Post *_post;
    id <FeedPostEventBarNodeDelegate> _delegate;
    FeedPostEventBarOptions *_options;
    ASTextNode *_titleTextNode;
    ASTextNode *_postInfoTextNode;
    ASButtonNode *_followButtonNode;
    ASDisplayNode *_borderLineNode;
    NSTimer *_updateTimer;
    KeyValueObservation *_postFollowedObservation;
}

+ (struct CGSize)nodeSizeForPost:(id)arg1;
@property(retain, nonatomic) KeyValueObservation *postFollowedObservation; // @synthesize postFollowedObservation=_postFollowedObservation;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) ASDisplayNode *borderLineNode; // @synthesize borderLineNode=_borderLineNode;
@property(retain, nonatomic) ASButtonNode *followButtonNode; // @synthesize followButtonNode=_followButtonNode;
@property(retain, nonatomic) ASTextNode *postInfoTextNode; // @synthesize postInfoTextNode=_postInfoTextNode;
@property(retain, nonatomic) ASTextNode *titleTextNode; // @synthesize titleTextNode=_titleTextNode;
@property(readonly, nonatomic) FeedPostEventBarOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <FeedPostEventBarNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didTapEventHeader:(id)arg1;
- (void)didTapFollowButton:(id)arg1;
- (void)configureFollowButton;
- (void)configurePostInfo;
- (void)configureTitle;
- (void)configureNodes;
- (void)createNodes;
- (void)didExitDisplayState;
- (void)clearTimer;
- (void)activeteUpdateTimer;
- (void)didEnterDisplayState;
- (void)didLoad;
- (void)dealloc;
- (id)initWithPost:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


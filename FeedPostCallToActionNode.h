//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASControlNode, ASTextNode, BaseButtonNode, NSString, Post;
@protocol FeedPostCallToActionNodeDelegate;

@interface FeedPostCallToActionNode : BaseFeedDisplayNode
{
    Post *_post;
    id <FeedPostCallToActionNodeDelegate> _delegate;
    ASControlNode *_controlNode;
    ASTextNode *_linkNode;
    BaseButtonNode *_buttonNode;
    unsigned long long _layoutStyle;
    NSString *_domainString;
}

@property(retain, nonatomic) NSString *domainString; // @synthesize domainString=_domainString;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) BaseButtonNode *buttonNode; // @synthesize buttonNode=_buttonNode;
@property(retain, nonatomic) ASTextNode *linkNode; // @synthesize linkNode=_linkNode;
@property(retain, nonatomic) ASControlNode *controlNode; // @synthesize controlNode=_controlNode;
@property(nonatomic) __weak id <FeedPostCallToActionNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (void)nodeTapped:(id)arg1;
- (void)configureNodes;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)initWithPost:(id)arg1 style:(unsigned long long)arg2 delegate:(id)arg3;

@end


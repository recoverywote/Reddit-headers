//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

#import "ASPagerDataSource-Protocol.h"

@protocol _TtP6Reddit47MetaSubredditMembershipPromoSectionNodeDelegate_;

@interface _TtC6Reddit39MetaSubredditMembershipPromoSectionNode : ASDisplayNode <ASPagerDataSource>
{
    // Error parsing type: , name: subreddit
    // Error parsing type: , name: nodeBlocks
    // Error parsing type: , name: pagerNode
    // Error parsing type: , name: actionButton
    // Error parsing type: , name: buttonInsets
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)init;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (CDUnknownBlockType)pagerNode:(id)arg1 nodeBlockAtIndex:(long long)arg2;
- (long long)numberOfPagesInPagerNode:(id)arg1;
- (void)didPressActionButtonWithButton:(id)arg1;
- (id)initWithBadges:(id)arg1 subreddit:(id)arg2 username:(id)arg3;
@property(nonatomic) __weak id <_TtP6Reddit47MetaSubredditMembershipPromoSectionNodeDelegate_> delegate; // @synthesize delegate;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASScrollNode.h>

@class Subreddit;

@interface _TtC6Reddit34MetaSubredditMembershipContentNode : ASScrollNode
{
    // Error parsing type: , name: actionDelegate
    // Error parsing type: , name: promoSectionNode
    // Error parsing type: , name: activeSectionNode
    // Error parsing type: , name: subreddit
    // Error parsing type: , name: contentInset
}

- (void).cxx_destruct;
- (id)init;
- (void)sectionNodeDidPressActionButton:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureWithSubreddit:(id)arg1 username:(id)arg2 communityInfo:(id)arg3 usernameDecoration:(id)arg4 demoBadges:(id)arg5;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset;
@property(nonatomic, retain) Subreddit *subreddit; // @synthesize subreddit;
- (id)initWithActionDelegate:(id)arg1;

@end


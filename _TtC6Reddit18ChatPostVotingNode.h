//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@protocol _TtP6Reddit26ChatPostVotingNodeDelegate_;

@interface _TtC6Reddit18ChatPostVotingNode : BaseFeedDisplayNode
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: upvoteButtonNode
    // Error parsing type: , name: downvoteButtonNode
    // Error parsing type: , name: scoreButtonNode
    // Error parsing type: , name: comment
    // Error parsing type: , name: bubbleNode
    // Error parsing type: , name: shouldDisplayDownvotes
    // Error parsing type: , name: presentationStyle
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithVisibilityTracker:(id)arg1 visibilityOptions:(id)arg2;
- (id)initWithComment:(id)arg1 shouldDisplayDownvotes:(_Bool)arg2 presentationStyle:(unsigned long long)arg3;
@property(nonatomic) __weak id <_TtP6Reddit26ChatPostVotingNodeDelegate_> delegate; // @synthesize delegate;

@end


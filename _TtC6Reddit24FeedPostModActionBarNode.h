//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class Post;
@protocol _TtP6Reddit32FeedPostModActionBarNodeDelegate_;

@interface _TtC6Reddit24FeedPostModActionBarNode : ASDisplayNode
{
    // Error parsing type: , name: post
    // Error parsing type: , name: options
    // Error parsing type: , name: $__lazy_storage_$_viewModel
    // Error parsing type: , name: $__lazy_storage_$_actionBarNode
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)init;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)initWithPost:(id)arg1 options:(id)arg2;
@property(nonatomic) __weak id <_TtP6Reddit32FeedPostModActionBarNodeDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) struct UIEdgeInsets contentInsets;
@property(nonatomic, readonly) Post *post; // @synthesize post;

@end


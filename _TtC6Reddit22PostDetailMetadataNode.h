//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class ASTextNode, Post, _TtC6Reddit24AwardsMetadataDetailNode;
@protocol _TtP6Reddit30PostDetailMetadataNodeDelegate_;

@interface _TtC6Reddit22PostDetailMetadataNode : ASDisplayNode
{
    // Error parsing type: , name: post
    // Error parsing type: , name: options
    // Error parsing type: , name: $__lazy_storage_$_viewModel
    // Error parsing type: , name: contentInsets
    // Error parsing type: , name: delegate
    // Error parsing type: , name: metadataLabel
    // Error parsing type: , name: $__lazy_storage_$_awardsNode
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPost:(id)arg1 options:(id)arg2;
@property(nonatomic, retain) _TtC6Reddit24AwardsMetadataDetailNode *awardsNode;
@property(nonatomic, readonly) ASTextNode *metadataLabel; // @synthesize metadataLabel;
@property(nonatomic) __weak id <_TtP6Reddit30PostDetailMetadataNodeDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets;
@property(nonatomic, readonly) Post *post; // @synthesize post;

@end


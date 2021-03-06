//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FeedPostOptions, Post, PostMetaViewModel;
@protocol FeedPostContentNodeDelegate, ViewContext;

@protocol FeedPostContentDisplaying <NSObject>
@property(readonly, nonatomic) _Bool hasNonTextContent;
@property(readonly, nonatomic) _Bool hasTextContent;
@property(readonly, nonatomic) Post *post;
- (id)initWithViewContext:(id <ViewContext>)arg1 post:(Post *)arg2 postMetaViewModel:(PostMetaViewModel *)arg3 options:(FeedPostOptions *)arg4 delegate:(id <FeedPostContentNodeDelegate>)arg5;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MetaBadgeManager, NSMutableArray, NSMutableDictionary, NextRunLoopScheduler, RedditService, Subreddit;

@interface PostMetaViewModelProvider : NSObject
{
    RedditService *_service;
    MetaBadgeManager *_badgeManager;
    Subreddit *_subreddit;
    NSMutableDictionary *_postsByUsers;
    NSMutableDictionary *_viewModelsByPosts;
    NSMutableArray *_queuedUserPKs;
    NSMutableDictionary *_queuedPosts;
    NextRunLoopScheduler *_nextRunLoopScheduler;
}

@property(retain, nonatomic) NextRunLoopScheduler *nextRunLoopScheduler; // @synthesize nextRunLoopScheduler=_nextRunLoopScheduler;
@property(retain, nonatomic) NSMutableDictionary *queuedPosts; // @synthesize queuedPosts=_queuedPosts;
@property(retain, nonatomic) NSMutableArray *queuedUserPKs; // @synthesize queuedUserPKs=_queuedUserPKs;
@property(retain, nonatomic) NSMutableDictionary *viewModelsByPosts; // @synthesize viewModelsByPosts=_viewModelsByPosts;
@property(retain, nonatomic) NSMutableDictionary *postsByUsers; // @synthesize postsByUsers=_postsByUsers;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) MetaBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
@property(nonatomic) __weak RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)postMetaViewModelForPost:(id)arg1;
- (void)fetchViewModelsForPosts:(id)arg1 viewModels:(id)arg2 service:(id)arg3;
- (void)updateViewModelsForPosts:(id)arg1;
- (void)updateViewModelsForUserPKs:(id)arg1;
- (id)initWithBadgeManager:(id)arg1 subreddit:(id)arg2 service:(id)arg3;

@end


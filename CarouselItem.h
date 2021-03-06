//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Comment, NSString, Post, SearchTerm, Subreddit, SubredditCategory, SubredditChannel, TrendingSearch, User;

@interface CarouselItem : NSObject
{
    unsigned long long _itemType;
    id _object;
    SearchTerm *_searchTerm;
    TrendingSearch *_trendingSearch;
    SubredditCategory *_category;
    NSString *_cause;
    NSObject *_causeModel;
    Subreddit *_subreddit;
    Post *_post;
    User *_user;
    Comment *_comment;
    SubredditChannel *_channel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SubredditChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) Comment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) NSObject *causeModel; // @synthesize causeModel=_causeModel;
@property(copy, nonatomic) NSString *cause; // @synthesize cause=_cause;
@property(retain, nonatomic) SubredditCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) TrendingSearch *trendingSearch; // @synthesize trendingSearch=_trendingSearch;
@property(retain, nonatomic) SearchTerm *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *itemPk;
- (id)legacyKeyForHiddenByUserWithAccount:(id)arg1;
- (_Bool)isHiddenByUserWithAccount:(id)arg1;
- (void)updateHidden:(_Bool)arg1 withAccount:(id)arg2;
- (id)initWithSubredditCategory:(id)arg1;
- (id)initWithSubredditChannel:(id)arg1;
- (id)initWithComment:(id)arg1 forPost:(id)arg2;
- (id)initWithTrendingSearch:(id)arg1;
- (id)initWithSearchTerm:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithSubreddit:(id)arg1;
- (id)initWithPost:(id)arg1 withComment:(id)arg2;
- (id)initWithPost:(id)arg1;
- (id)initWithObject:(id)arg1;

@end


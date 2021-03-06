//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SimpleAttributedLabelViewController.h"

@class FeedSpinnerView, RedditService, Subreddit;

@interface SubredditRulesViewController : SimpleAttributedLabelViewController
{
    Subreddit *_subreddit;
    FeedSpinnerView *_firstLoadSpinner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FeedSpinnerView *firstLoadSpinner; // @synthesize firstLoadSpinner=_firstLoadSpinner;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
- (void)reloadSubredditRules;
- (void)setupLoadingSpinner;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 subreddit:(id)arg2;

@end


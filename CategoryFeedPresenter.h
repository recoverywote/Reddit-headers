//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedPresenter.h"

@class SubredditCategory;

@interface CategoryFeedPresenter : FeedPresenter
{
    SubredditCategory *_category;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SubredditCategory *category; // @synthesize category=_category;
- (id)listingTraceName;
- (id)analyticsPageType;
- (id)analyticsScreenViewName;
- (id)createListingNetworkSourceWithURLString:(id)arg1 parameters:(id)arg2;
- (id)initWithAccountContext:(id)arg1 category:(id)arg2;

@end


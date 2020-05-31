//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedPresenter.h"

@class DownToChatDataProvider, PostMetaViewModelProvider, Subreddit, _TtC6Reddit28MetaMembershipBannerProvider, _TtC6Reddit34MetaClaimablePointsListingProvider;

@interface SubredditFeedPresenter : FeedPresenter
{
    Subreddit *_subreddit;
    PostMetaViewModelProvider *_postMetaViewModelProvider;
    _TtC6Reddit28MetaMembershipBannerProvider *_metaMembershipBannerProvider;
    DownToChatDataProvider *_downToChatBannerProvider;
    _TtC6Reddit34MetaClaimablePointsListingProvider *_claimablePointsListingProvider;
}

@property(retain, nonatomic) _TtC6Reddit34MetaClaimablePointsListingProvider *claimablePointsListingProvider; // @synthesize claimablePointsListingProvider=_claimablePointsListingProvider;
@property(retain, nonatomic) DownToChatDataProvider *downToChatBannerProvider; // @synthesize downToChatBannerProvider=_downToChatBannerProvider;
@property(retain, nonatomic) _TtC6Reddit28MetaMembershipBannerProvider *metaMembershipBannerProvider; // @synthesize metaMembershipBannerProvider=_metaMembershipBannerProvider;
@property(retain, nonatomic) PostMetaViewModelProvider *postMetaViewModelProvider; // @synthesize postMetaViewModelProvider=_postMetaViewModelProvider;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
- (void).cxx_destruct;
- (id)listingTraceName;
- (id)postMetaViewModelForPost:(id)arg1;
- (_Bool)shouldAttachDownToChatDataProvider;
- (id)createListingNetworkSourceWithURLString:(id)arg1 parameters:(id)arg2;
- (void)listingNetworkSourceDidParseNewData:(id)arg1;
- (void)configureWithSubreddit:(id)arg1;
- (_Bool)hiddenByUserForSubredditPk:(id)arg1;
- (id)keyForHiddenByUserForSubredditPk:(id)arg1;
- (id)surfaceKeyHiddenByUser;
- (_Bool)shouldFetchDiscoveryUnit:(id)arg1;
- (unsigned long long)surfaceType;
- (id)pillForTemplateName:(id)arg1;
- (id)valueForTemplateName:(id)arg1;
- (id)analyticsScreenViewName;
- (id)analyticsPageType;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setFeedRange:(unsigned long long)arg1;
- (void)setFeedSort:(unsigned long long)arg1;
- (_Bool)shouldUseNewFeedSort;
- (id)initWithService:(id)arg1;

@end


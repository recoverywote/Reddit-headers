//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedPresenter.h"

@class MultiNetworkSource, NSArray, NSOrderedSet, NSPredicate, NSSet, NewsSubtopic, NewsTopic;
@protocol NewsFeedPresentable;

@interface NewsFeedPresenter : FeedPresenter
{
    _Bool _isWaitingForListingFetchToBegin;
    _Bool _isListingLoadedForCurrentTopic;
    MultiNetworkSource *_newsTopicsSource;
    NSOrderedSet *_allTopics;
    NewsTopic *_selectedTopic;
    NewsSubtopic *_selectedSubtopic;
    NewsTopic *_allTopic;
    NSPredicate *_defaultTopicsPredicate;
    NSPredicate *_defaultSubtopicsPredicate;
}

@property(readonly, nonatomic) NSPredicate *defaultSubtopicsPredicate; // @synthesize defaultSubtopicsPredicate=_defaultSubtopicsPredicate;
@property(readonly, nonatomic) NSPredicate *defaultTopicsPredicate; // @synthesize defaultTopicsPredicate=_defaultTopicsPredicate;
@property(retain, nonatomic) NewsTopic *allTopic; // @synthesize allTopic=_allTopic;
@property(retain, nonatomic) NewsSubtopic *selectedSubtopic; // @synthesize selectedSubtopic=_selectedSubtopic;
@property(retain, nonatomic) NewsTopic *selectedTopic; // @synthesize selectedTopic=_selectedTopic;
@property(nonatomic) _Bool isListingLoadedForCurrentTopic; // @synthesize isListingLoadedForCurrentTopic=_isListingLoadedForCurrentTopic;
@property(retain, nonatomic) NSOrderedSet *allTopics; // @synthesize allTopics=_allTopics;
@property(retain, nonatomic) MultiNetworkSource *newsTopicsSource; // @synthesize newsTopicsSource=_newsTopicsSource;
@property(nonatomic) _Bool isWaitingForListingFetchToBegin; // @synthesize isWaitingForListingFetchToBegin=_isWaitingForListingFetchToBegin;
- (void).cxx_destruct;
- (_Bool)isSubscribedSubtopic:(id)arg1;
- (_Bool)isSubscribedTopic:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *subscribedSubtopics;
- (id)defaultSubtopics;
@property(readonly, copy, nonatomic) NSSet *currentSubtopics;
@property(readonly, copy, nonatomic) NSOrderedSet *subscribedTopics;
@property(readonly, copy, nonatomic) NSOrderedSet *defaultTopics;
@property(readonly, copy, nonatomic) NSOrderedSet *currentTopics;
@property(readonly, copy, nonatomic) NSOrderedSet *displayTopics;
- (id)attributedTitleForPost:(id)arg1;
- (void)clearContent;
- (void)reloadTopics;
@property(readonly, copy, nonatomic) NSArray *displaySubtopics;
- (void)unfollowSubtopicsOfPost:(id)arg1;
- (unsigned long long)displayMode;
- (unsigned long long)surfaceType;
- (id)analyticsPageType;
- (id)analyticsScreenViewName;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (void)listingNetworkSourceDidStartFetching:(id)arg1;
- (void)reloadContentFromNetworkSource;
- (_Bool)shouldFilterObject:(id)arg1;
- (void)attemptForceFetch;
- (void)presentableWillAppear;
- (void)handleAppDidEnterForegroundWhenPresentableIsOnTheTop;
- (unsigned long long)newsTopicHeaderSection;
- (id)currentSubtopicIdsForTopic:(id)arg1;
- (id)newsURLString;
- (id)URLComponentForTopic:(id)arg1;
- (unsigned long long)subtopicsCount;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)initializeNewsTopicsSource;
- (void)configureWithSelectedTopic:(id)arg1 selectedSubtopic:(id)arg2;
- (void)updateWithSubscribedTopics:(id)arg1 subscribedSubtopics:(id)arg2;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <NewsFeedPresentable> presentable; // @dynamic presentable;

@end


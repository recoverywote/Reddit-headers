//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedViewController.h"

#import "EmptyFeedNuxViewDelegate-Protocol.h"
#import "MainFeedPresentable-Protocol.h"
#import "_TtP6Reddit38AnonymousBrowsingEmptyHomeViewDelegate_-Protocol.h"

@class EmptyFeedNUXView, FeedPresenter, NSString, NSURL, _TtC6Reddit30AnonymousBrowsingEmptyHomeView;

@interface TextureMainFeedViewController : FeedViewController <EmptyFeedNuxViewDelegate, _TtP6Reddit38AnonymousBrowsingEmptyHomeViewDelegate_, MainFeedPresentable>
{
    EmptyFeedNUXView *_emptyFeedNUXView;
    _TtC6Reddit30AnonymousBrowsingEmptyHomeView *_anonymousBrowsingEmptyView;
}

@property(retain, nonatomic) _TtC6Reddit30AnonymousBrowsingEmptyHomeView *anonymousBrowsingEmptyView; // @synthesize anonymousBrowsingEmptyView=_anonymousBrowsingEmptyView;
@property(retain, nonatomic) EmptyFeedNUXView *emptyFeedNUXView; // @synthesize emptyFeedNUXView=_emptyFeedNUXView;
- (void).cxx_destruct;
- (void)feedSortOptionController:(id)arg1 didFinishSelectingFeedSort:(unsigned long long)arg2 feedRange:(unsigned long long)arg3;
- (_Bool)feedPostViewShouldShowFlairs:(id)arg1;
- (_Bool)feedPostViewShouldShowExpandedHeader:(id)arg1;
- (void)emptyFeedNuxDidTapSignUp:(id)arg1;
- (void)emptyFeedNuxDidTapExplore:(id)arg1;
- (void)emptyFeedNuxDidTapLogin:(id)arg1;
- (_Bool)shouldShowEmptyWelcomeView;
- (void)removeEmptyWelcomeView;
- (void)displayEmptyWelcomeView;
- (_Bool)attemptScrollMainContentViewToTop;
- (_Bool)didViewEmptyFeedTutorial;
- (void)leaveAnonymousBrowsingTapped;
- (void)handleDisplayForLoggedOutAccount;
- (void)handleDisplayForAnonymousBrowsingMode;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)handleAppDidEnterBackgroundWhenViewControllerIsOnTheTop;
- (id)mainFeedPresenter;
- (id)initWithPresenter:(id)arg1 delegator:(id)arg2 navigator:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *analyticsPageType;
@property(copy, nonatomic) NSString *analyticsReason;
@property(copy, nonatomic) NSURL *analyticsReferringURL;
@property(readonly, nonatomic) NSString *analyticsScreenViewName;
@property(copy, nonatomic) NSString *analyticsSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) FeedPresenter *feedPresenter;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isViewLoaded;
@property(readonly, nonatomic) _Bool screenViewLoggingEnabled;
@property(readonly) Class superclass;

@end

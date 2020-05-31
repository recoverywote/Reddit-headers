//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditUI/_TtP8RedditUI25RUIRefreshControlDelegate_-Protocol.h>

@class UIControl, UIScrollView, UIView, _TtC8RedditUI17RUIRefreshControl;
@protocol ListingStateControllerDelegate, LoadingSpinner;

@interface ListingStateController : NSObject <_TtP8RedditUI25RUIRefreshControlDelegate_>
{
    id <ListingStateControllerDelegate> _delegate;
    UIView *_customEmptyView;
    UIScrollView *_scrollView;
    long long _lastListingState;
    UIView *_emptyView;
    UIControl<LoadingSpinner> *_loadingSpinner;
    _TtC8RedditUI17RUIRefreshControl *_refreshControl;
}

@property(retain, nonatomic) _TtC8RedditUI17RUIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) UIControl<LoadingSpinner> *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) long long lastListingState; // @synthesize lastListingState=_lastListingState;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *customEmptyView; // @synthesize customEmptyView=_customEmptyView;
@property(nonatomic) __weak id <ListingStateControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshControlDidPullToRefresh:(id)arg1;
- (void)didTapLoadingSpinner:(id)arg1;
- (void)showFailureState;
- (void)showListingStateForNumObjects:(long long)arg1 spinningCompletion:(CDUnknownBlockType)arg2;
- (void)showFetchInitiatingState;
- (id)initWithContainingView:(id)arg1 scrollView:(id)arg2 emptyStateView:(id)arg3 loadingSpinner:(id)arg4 refreshControl:(id)arg5;
- (id)initWithContainingView:(id)arg1 scrollView:(id)arg2;

@end

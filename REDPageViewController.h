//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <RedditUI/UIGestureRecognizerDelegate-Protocol.h>
#import <RedditUI/UIScrollViewDelegate-Protocol.h>

@class NSString, UIScrollView;
@protocol REDPageViewControllerDataSource, REDPageViewControllerDelegate;

@interface REDPageViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _scrollEnabled;
    _Bool _isScrolling;
    _Bool _skipDidScroll;
    _Bool _scrollingAnimated;
    _Bool _activeControllerBeganTransition;
    id <REDPageViewControllerDelegate> _delegate;
    id <REDPageViewControllerDataSource> _dataSource;
    UIViewController *_activeController;
    UIScrollView *_scrollView;
    UIViewController *_leftController;
    UIViewController *_rightController;
    UIViewController *_selectingController;
    long long _scrollingDirection;
    CDUnknownBlockType _didFinishSettingCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType didFinishSettingCompletionHandler; // @synthesize didFinishSettingCompletionHandler=_didFinishSettingCompletionHandler;
@property(nonatomic) long long scrollingDirection; // @synthesize scrollingDirection=_scrollingDirection;
@property(nonatomic) _Bool activeControllerBeganTransition; // @synthesize activeControllerBeganTransition=_activeControllerBeganTransition;
@property(nonatomic) _Bool scrollingAnimated; // @synthesize scrollingAnimated=_scrollingAnimated;
@property(nonatomic) _Bool skipDidScroll; // @synthesize skipDidScroll=_skipDidScroll;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) UIViewController *selectingController; // @synthesize selectingController=_selectingController;
@property(retain, nonatomic) UIViewController *rightController; // @synthesize rightController=_rightController;
@property(retain, nonatomic) UIViewController *leftController; // @synthesize leftController=_leftController;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(retain, nonatomic) UIViewController *activeController; // @synthesize activeController=_activeController;
@property(nonatomic) __weak id <REDPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <REDPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didFinishScrollingToViewController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willScrollFromStartingViewController:(id)arg1 destinationViewController:(id)arg2;
- (void)removeChildIfNeeded:(id)arg1;
- (void)addChildIfNeeded:(id)arg1;
- (void)loadRightViewController:(id)arg1;
- (void)loadLeftViewController:(id)arg1;
- (void)loadViewController:(id)arg1;
- (void)layoutViews;
- (void)scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setActiveViewController:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetViewControllers;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


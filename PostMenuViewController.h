//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class BaseButton, BaseCollectionView, BaseLabel, NSString, RedditService, Subreddit, TextureBackgroundView, UIControl;
@protocol PostViewControllerDelegate;

@interface PostMenuViewController : UIViewController <UIViewControllerTransitioningDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <PostViewControllerDelegate> _delegate;
    TextureBackgroundView *_menuContainerView;
    UIControl *_dimmerView;
    BaseLabel *_titleLabel;
    BaseCollectionView *_collectionView;
    BaseButton *_closeButton;
    Subreddit *_subreddit;
    NSString *_analyticBaseURL;
    RedditService *_service;
}

+ (id)allPostTypes;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *analyticBaseURL; // @synthesize analyticBaseURL=_analyticBaseURL;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) BaseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIControl *dimmerView; // @synthesize dimmerView=_dimmerView;
@property(retain, nonatomic) TextureBackgroundView *menuContainerView; // @synthesize menuContainerView=_menuContainerView;
@property(nonatomic) __weak id <PostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (void)applySafeContrastTitleColor;
- (void)layoutViews;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)isAllowedPostType:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)showEditorForPostType:(unsigned long long)arg1;
- (void)dismiss;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithSubreddit:(id)arg1 service:(id)arg2 analyticBaseURL:(id)arg3;
- (id)availablePostTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


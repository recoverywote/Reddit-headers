//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ImagePopupViewControllerActiveDelegate-Protocol.h"
#import "ImagePopupViewControllerDelegate-Protocol.h"

@class NSString;

@interface UIViewController (Utils) <ImagePopupViewControllerDelegate, ImagePopupViewControllerActiveDelegate>
+ (id)onScreenPostIDFromChatPostViewController;
+ (id)onScreenChannelURL;
+ (void)printAllScrollViewsInView:(id)arg1;
+ (void)printAllScrollViews;
+ (id)webViewControllerForUrl:(id)arg1;
+ (id)currentViewController;
+ (_Bool)shouldIgnoreViewControllersChildren:(id)arg1;
+ (id)findBestViewController:(id)arg1;
+ (id)subredditOrUserPageViewControllerForSubreddit:(id)arg1;
+ (id)subredditOrUserPageViewControllerForCommunityName:(id)arg1;
+ (id)subredditPageViewControllerForSubredditName:(id)arg1;
+ (id)subredditPageViewControllerForSubreddit:(id)arg1;
- (void)navigateToViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)viewIsInWindowBounds;
- (_Bool)viewIsVisible;
- (_Bool)isModal;
- (id)firstChildViewControllerWhere:(CDUnknownBlockType)arg1;
- (id)firstParentViewControllerWhere:(CDUnknownBlockType)arg1;
- (_Bool)isContainedChildVC;
- (_Bool)isTopViewController;
@property(readonly, nonatomic) NSString *pageType;
- (void)imagePopupViewControllerDidPressActiveButton:(id)arg1;
- (void)imagePopupViewControllerDidConfirm:(id)arg1;
- (void)imagePopupViewControllerDidClose:(id)arg1;
- (void)imagePopupViewControllerDidCancel:(id)arg1;
- (void)imagePopupViewController:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)presentDirectShareForSubject:(id)arg1 body:(id)arg2 sender:(id)arg3 accountContext:(id)arg4;
- (void)didTapCloseButton:(id)arg1;
- (void)showInformationalModalView;
- (void)showErrorToastForPostType:(unsigned long long)arg1 activityType:(id)arg2 error:(id)arg3;
- (void)showSuccessToastForPostType:(unsigned long long)arg1 activityType:(id)arg2;
- (id)activityViewControllerForShareData:(id)arg1 accountContext:(id)arg2;
- (void)presentShareViewForData:(id)arg1 accountContext:(id)arg2;
- (void)presentShareViewForTextString:(id)arg1 urlString:(id)arg2 analyticsSource:(id)arg3 sender:(id)arg4 accountContext:(id)arg5;
@end


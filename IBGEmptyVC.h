//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface IBGEmptyVC : UIViewController
{
    UIViewController *_topViewController;
    UIViewController *_visibleViewController;
}

@property(nonatomic) __weak UIViewController *visibleViewController; // @synthesize visibleViewController=_visibleViewController;
@property(nonatomic) __weak UIViewController *topViewController; // @synthesize topViewController=_topViewController;
- (void).cxx_destruct;
- (void)didFinishOrientation;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)getTopViewController:(id)arg1;
- (void)updateViewControllers;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (id)init;

@end


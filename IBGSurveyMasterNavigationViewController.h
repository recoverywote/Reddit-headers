//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Instabug/IBGSurveyNavigationView-Protocol.h>
#import <Instabug/IBGSurveysWindowInteractionDelegate-Protocol.h>

@class IBGSurveyNavigationController, IBGSurveysNavigationViewController, NSString;
@protocol IBGSurveyViewControllerDelegate, IBGSurveysNavigatedViewController;

@interface IBGSurveyMasterNavigationViewController : UIViewController <IBGSurveysWindowInteractionDelegate, IBGSurveyNavigationView>
{
    UIViewController<IBGSurveysNavigatedViewController> *_currentViewController;
    id <IBGSurveyViewControllerDelegate> _delegate;
    IBGSurveysNavigationViewController *_navigationVC;
    IBGSurveyNavigationController *_surveyController;
}

@property(retain, nonatomic) IBGSurveyNavigationController *surveyController; // @synthesize surveyController=_surveyController;
@property(retain, nonatomic) IBGSurveysNavigationViewController *navigationVC; // @synthesize navigationVC=_navigationVC;
@property(nonatomic) __weak id <IBGSurveyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController<IBGSurveysNavigatedViewController> *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void).cxx_destruct;
- (_Bool)isSurveyNavigationViewVisible;
- (void)removeViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateNextButtonIsActive:(_Bool)arg1 shouldShowSubmit:(_Bool)arg2 isLast:(_Bool)arg3;
- (void)updateHeaderTitleWithIndex:(unsigned long long)arg1;
- (void)setBackButtonHidden:(_Bool)arg1;
- (void)invalidateLayoutAttributesShouldRefresh:(_Bool)arg1;
- (void)invalidateLayoutAttributes;
- (void)collapseContainerNavigationViewController;
- (void)showIndependentViewController:(id)arg1;
- (void)goNext:(id)arg1;
- (void)goBack:(id)arg1;
- (void)dismiss;
- (_Bool)shouldAllowAppInteractionsIn:(struct CGPoint)arg1;
- (void)showThankYouVCWithLayoutType:(long long)arg1;
- (void)goBackToQuestion:(id)arg1 layoutType:(long long)arg2;
- (void)goNextToQuestion:(id)arg1 layoutType:(long long)arg2;
- (void)setFirstQuestion:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithInitalViewController:(id)arg1 surveyController:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


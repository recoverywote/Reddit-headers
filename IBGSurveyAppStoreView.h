//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IBGSurveyThankYouView, IBGSwipeIndicatorView, NSArray, UIButton;

@interface IBGSurveyAppStoreView : UIView
{
    UIButton *_rateUsOnAppStoreButton;
    long long _surveyLayoutType;
    IBGSurveyThankYouView *_thankYouView;
    IBGSwipeIndicatorView *_swipeIndicatorView;
    NSArray *_shownButtonConstraints;
    NSArray *_hiddenButtonConstraints;
}

@property(retain, nonatomic) NSArray *hiddenButtonConstraints; // @synthesize hiddenButtonConstraints=_hiddenButtonConstraints;
@property(retain, nonatomic) NSArray *shownButtonConstraints; // @synthesize shownButtonConstraints=_shownButtonConstraints;
@property(retain, nonatomic) IBGSwipeIndicatorView *swipeIndicatorView; // @synthesize swipeIndicatorView=_swipeIndicatorView;
@property(retain, nonatomic) IBGSurveyThankYouView *thankYouView; // @synthesize thankYouView=_thankYouView;
@property(nonatomic) long long surveyLayoutType; // @synthesize surveyLayoutType=_surveyLayoutType;
@property(retain, nonatomic) UIButton *rateUsOnAppStoreButton; // @synthesize rateUsOnAppStoreButton=_rateUsOnAppStoreButton;
- (void).cxx_destruct;
- (void)setThankYouLabelText:(id)arg1;
- (void)setQuestionLabelText:(id)arg1;
- (void)setRateUsButtonTitle:(id)arg1;
- (void)hideRateButton;
- (void)updateConstraints;
- (id)init;

@end


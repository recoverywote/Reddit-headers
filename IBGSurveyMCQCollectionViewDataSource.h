//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/UICollectionViewDataSource-Protocol.h>

@class IBGSurveyController, IBGSurveyQuestionViewModel, NSString;

@interface IBGSurveyMCQCollectionViewDataSource : NSObject <UICollectionViewDataSource>
{
    long long _selectedAnswerIndex;
    IBGSurveyQuestionViewModel *_question;
    IBGSurveyController *_controller;
}

@property(retain, nonatomic) IBGSurveyController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) IBGSurveyQuestionViewModel *question; // @synthesize question=_question;
@property(nonatomic) long long selectedAnswerIndex; // @synthesize selectedAnswerIndex=_selectedAnswerIndex;
- (void).cxx_destruct;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)didSelectAnswer:(id)arg1 atIndex:(long long)arg2;
- (long long)indexForRecordedAnswer;
- (id)recordedAnswer;
- (id)answerAtIndexPath:(id)arg1;
- (id)initWithSurveyQuestion:(id)arg1 controller:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


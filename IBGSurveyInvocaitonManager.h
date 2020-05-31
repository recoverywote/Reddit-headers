//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGPresentationManagerDelegate-Protocol.h>

@class NSString;

@interface IBGSurveyInvocaitonManager : NSObject <IBGPresentationManagerDelegate>
{
    CDUnknownBlockType _invocationBlock;
    CDUnknownBlockType _willShowSurveyHandler;
    CDUnknownBlockType _didDismissSurveyHandler;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType didDismissSurveyHandler; // @synthesize didDismissSurveyHandler=_didDismissSurveyHandler;
@property(copy, nonatomic) CDUnknownBlockType willShowSurveyHandler; // @synthesize willShowSurveyHandler=_willShowSurveyHandler;
@property(copy, nonatomic) CDUnknownBlockType invocationBlock; // @synthesize invocationBlock=_invocationBlock;
- (void).cxx_destruct;
- (Class)windowClass;
- (void)didDismissWithExtraParameters:(id)arg1;
- (void)hideFloatingButtonIfExists;
- (void)didInvoke;
- (void)invoke;
- (void)setDidDismissSurvey:(CDUnknownBlockType)arg1;
- (void)setWillShowSurvey:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


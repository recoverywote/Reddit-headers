//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGAnnouncementsRequestDelegate-Protocol.h>
#import <Instabug/IBGCurrentDeviceLocaleListener-Protocol.h>
#import <Instabug/IBGEventLoggerObserver-Protocol.h>
#import <Instabug/IBGSessionListener-Protocol.h>
#import <Instabug/IBGSnapshotManagerDelegate-Protocol.h>
#import <Instabug/IBGSurveyViewControllerDelegate-Protocol.h>
#import <Instabug/IBGSurveysRequestDelegate-Protocol.h>
#import <Instabug/IBGUserControllerListener-Protocol.h>
#import <Instabug/InstabugFrameworks-Protocol.h>

@class IBGAppStoreURLLoader, IBGOperation, IBGSurveyCache, IBGSurveysEvaluator, IBGSurveysRequest, IBGSurveysReshowProcessor, NSDate, NSMutableArray, NSRecursiveLock, NSString;
@protocol IBGSurveyConditionsLoader, IBGSurveyUIPresenter, OS_dispatch_group;

@interface InstabugSurveys : NSObject <IBGSurveysRequestDelegate, IBGAnnouncementsRequestDelegate, IBGSurveyViewControllerDelegate, IBGSessionListener, IBGEventLoggerObserver, IBGCurrentDeviceLocaleListener, IBGUserControllerListener, InstabugFrameworks, IBGSnapshotManagerDelegate>
{
    _Bool _hasShownSurveyInCurrentSession;
    _Bool _isSurveyShownNow;
    _Bool _isTryingToShowingSurvey;
    _Bool _hasPendingSurveys;
    _Bool _surveysSyncedOnce;
    _Bool _annoucementsOnceToken;
    _Bool _isObservingFeatures;
    long long _reactivationSessionCountThreshold;
    long long _reactivationDaysCountThreshold;
    NSMutableArray *_cachedSurveys;
    NSMutableArray *_currentConditions;
    NSObject<OS_dispatch_group> *_fetchGroup;
    IBGOperation *_initializationOperation;
    IBGSurveysRequest *_surveysRequest;
    IBGSurveysEvaluator *_evaluator;
    IBGSurveysReshowProcessor *_surveysReshowProcessor;
    NSRecursiveLock *_lock;
    NSDate *_applicationEnterForegroundTime;
    IBGAppStoreURLLoader *_appStoreURLLoader;
    IBGSurveyCache *_cache;
    id <IBGSurveyUIPresenter> _presenter;
    id <IBGSurveyConditionsLoader> _conditionsLoader;
}

+ (void)destory;
+ (id)safeSharedInstance;
+ (id)sharedInstance;
+ (void)destoryInstabugSurveys;
+ (void)setForceDisabled:(_Bool)arg1;
@property(retain, nonatomic) id <IBGSurveyConditionsLoader> conditionsLoader; // @synthesize conditionsLoader=_conditionsLoader;
@property(retain, nonatomic) id <IBGSurveyUIPresenter> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) IBGSurveyCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) IBGAppStoreURLLoader *appStoreURLLoader; // @synthesize appStoreURLLoader=_appStoreURLLoader;
@property(retain, nonatomic) NSDate *applicationEnterForegroundTime; // @synthesize applicationEnterForegroundTime=_applicationEnterForegroundTime;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) IBGSurveysReshowProcessor *surveysReshowProcessor; // @synthesize surveysReshowProcessor=_surveysReshowProcessor;
@property(retain, nonatomic) IBGSurveysEvaluator *evaluator; // @synthesize evaluator=_evaluator;
@property(retain, nonatomic) IBGSurveysRequest *surveysRequest; // @synthesize surveysRequest=_surveysRequest;
@property(retain, nonatomic) IBGOperation *initializationOperation; // @synthesize initializationOperation=_initializationOperation;
@property(nonatomic) _Bool isObservingFeatures; // @synthesize isObservingFeatures=_isObservingFeatures;
@property(nonatomic) _Bool annoucementsOnceToken; // @synthesize annoucementsOnceToken=_annoucementsOnceToken;
@property(nonatomic) _Bool surveysSyncedOnce; // @synthesize surveysSyncedOnce=_surveysSyncedOnce;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property(nonatomic) _Bool hasPendingSurveys; // @synthesize hasPendingSurveys=_hasPendingSurveys;
@property(nonatomic) _Bool isTryingToShowingSurvey; // @synthesize isTryingToShowingSurvey=_isTryingToShowingSurvey;
@property(nonatomic) _Bool isSurveyShownNow; // @synthesize isSurveyShownNow=_isSurveyShownNow;
@property(nonatomic) _Bool hasShownSurveyInCurrentSession; // @synthesize hasShownSurveyInCurrentSession=_hasShownSurveyInCurrentSession;
@property(retain, nonatomic) NSMutableArray *currentConditions; // @synthesize currentConditions=_currentConditions;
@property(retain, nonatomic) NSMutableArray *cachedSurveys; // @synthesize cachedSurveys=_cachedSurveys;
@property(nonatomic) long long reactivationDaysCountThreshold; // @synthesize reactivationDaysCountThreshold=_reactivationDaysCountThreshold;
@property(nonatomic) long long reactivationSessionCountThreshold; // @synthesize reactivationSessionCountThreshold=_reactivationSessionCountThreshold;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didChangeLocaleTo:(id)arg1;
- (void)didInitializeSessionAtDate:(id)arg1;
- (void)currentUserDidChange:(id)arg1;
- (void)didResetUserData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addFeaturesKVO;
- (void)applicationWillEnterForeground;
- (void)resetShowingSurveyFlag;
- (void)unregisterNotification;
- (void)registerNotification;
- (void)didCancelSurvey;
- (void)surveyDismissed;
- (void)eventLogger:(id)arg1 willAddEventLogWithName:(id)arg2;
- (void)annoucmentsRequestDone:(id)arg1 isSuccess:(_Bool)arg2 announcments:(id)arg3 pausedAnnouncementsIDs:(id)arg4;
- (void)surveysRequestDone:(id)arg1 isSucess:(_Bool)arg2 withSurveys:(id)arg3 pausedSurveysIDs:(id)arg4;
- (void)notifyFetchGroupToShowSurveyForNewSession;
- (void)mockAnnouncementsResponse;
- (void)mockSurveysResponse;
- (void)mockSurveysAndAnnouncementsResponses;
- (void)executeAnnouncementsRequestIfFeatureEnabledAndEnterFetchGroup:(id)arg1;
- (void)executeSurveysRequestIfFeatureEnabledAndEnterFetchGroup:(id)arg1;
- (void)fetchAnnouncementsOnlyWithRequest:(id)arg1;
- (void)fetchSurveysOnlyWithRequest:(id)arg1;
- (void)fetchSurveys;
- (void)loadSurveys;
- (void)showSurveyForNewSession;
- (void)showSurveyAfterUserAttributeSet;
- (_Bool)announcementsFeatureEnabled;
- (_Bool)surveysFeatureEnabled;
- (void)showNewSurveyForced:(_Bool)arg1 surveys:(id)arg2 triggerType:(long long)arg3 startingIndex:(long long)arg4;
- (void)showSurveyIfAvailableByTrigger:(long long)arg1 userEventName:(id)arg2;
- (void)showSurveyAutomaticForNewSession:(id)arg1;
- (void)presentSurvey:(id)arg1;
- (void)showScheduledSurveyNow:(id)arg1;
- (_Bool)shouldShowScheduledNewSessionSurvey:(id)arg1;
- (void)setShouldShowSurveysWelcomeScreen:(_Bool)arg1;
- (void)setThresholdForReshowingSurveyAfterDismiss:(long long)arg1 daysCount:(long long)arg2;
- (void)setDidDismissSurveyHandler:(CDUnknownBlockType)arg1;
- (void)setWillShowSurveyHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasAvailableSurveys;
- (_Bool)hasRespondedToSurveyWithToken:(id)arg1;
- (void)showSurveyWithIdentifier:(id)arg1;
- (void)showSurveyWithToken:(id)arg1;
- (_Bool)isSurveyAnnouncementFeatureEnabled:(id)arg1;
- (void)showSurveysAnnouncementsIfAvailable;
- (void)showSurveyIfAvailable;
- (void)setSurveysEnabled:(_Bool)arg1;
- (void)setAutoShowingSurveysEnabled:(_Bool)arg1;
- (id)availableSurveys;
- (id)initializationOperations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGDALService, IBGUserRepoFetcher;

@interface IBGSurveyInteractionRepo : NSObject
{
    IBGDALService *_dalService;
    IBGUserRepoFetcher *_userFetcher;
}

@property(retain, nonatomic) IBGUserRepoFetcher *userFetcher; // @synthesize userFetcher=_userFetcher;
@property(retain, nonatomic) IBGDALService *dalService; // @synthesize dalService=_dalService;
- (void).cxx_destruct;
- (void)saveInteraction:(id)arg1;
- (void)deleteInteractionsWithSurveyIDs:(id)arg1;
- (void)deleteInteractionsForUserWithUUID:(id)arg1;
- (void)migrateSurveyInteractionsFromUUID:(id)arg1 toUUID:(id)arg2;
- (id)getOrCreateInteractionWithSurveyID:(id)arg1 userUUID:(id)arg2;
- (id)initWithDALService:(id)arg1;
- (void)waitForAllOperationsToFinish;

@end


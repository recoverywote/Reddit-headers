//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGDALService;

@interface IBGFeatureModelPersistanceManager : NSObject
{
    IBGDALService *_service;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IBGDALService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)createCommentsForFeature:(id)arg1 comments:(id)arg2 inContext:(id)arg3;
- (id)fetchObjectWithIdentifier:(int)arg1 inContext:(id)arg2;
- (id)featureRequestsFromArray:(id)arg1 context:(id)arg2;
- (void)voteOnFeatureWithID:(int)arg1 voteUp:(_Bool)arg2;
- (void)updateCommentWithID:(int)arg1 dictionary:(id)arg2;
- (void)addCommentToFeatureWithID:(int)arg1 dictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeCommentsSyncForFeatureWithID:(int)arg1;
- (void)purgeAllFeaturesSync;
- (void)addComments:(id)arg1 toFeatureWithIdentifier:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAllFeatureRequestsAsyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)createFeatureRequestsAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


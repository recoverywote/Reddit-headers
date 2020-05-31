//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

#import <Instabug/IBGMigrationDelegate-Protocol.h>

@class IBGOperation, NSMutableArray, NSString;

@interface IBGMigrationManager : NSOperationQueue <IBGMigrationDelegate>
{
    IBGOperation *_initializationOperation;
    NSMutableArray *_migrations;
}

+ (void)destroy;
+ (id)getInstance;
@property(retain, nonatomic) NSMutableArray *migrations; // @synthesize migrations=_migrations;
@property(retain, nonatomic) IBGOperation *initializationOperation; // @synthesize initializationOperation=_initializationOperation;
- (void).cxx_destruct;
- (void)saveCurrentSDKVersion;
- (void)finishIfNoPendingMigrationsWithSuccess:(_Bool)arg1;
- (void)didFinishMigration:(id)arg1 withSuccess:(_Bool)arg2;
- (void)queueMigrationsOfNames:(id)arg1;
- (void)runMigrationForClass:(Class)arg1;
- (void)runAnyPendingMigrations;
- (void)updateManagerVersioningIfNeeded;
- (unsigned long long)versionMigrationsRanUntil;
- (id)migrationNames;
- (unsigned long long)currentVersion;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


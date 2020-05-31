//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Branch/NSUserActivityDelegate-Protocol.h>

@class BNCSpotlightService, NSString;
@protocol OS_dispatch_queue;

@interface BNCContentDiscoveryManager : NSObject <NSUserActivityDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    BNCSpotlightService *_spotlight;
}

@property(retain) BNCSpotlightService *spotlight; // @synthesize spotlight=_spotlight;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 canonicalId:(id)arg3 publiclyIndexable:(_Bool)arg4 type:(id)arg5 thumbnailUrl:(id)arg6 keywords:(id)arg7 userInfo:(id)arg8 expirationDate:(id)arg9 callback:(CDUnknownBlockType)arg10 spotlightCallback:(CDUnknownBlockType)arg11;
- (void)indexObject:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 publiclyIndexable:(_Bool)arg3 type:(id)arg4 thumbnailUrl:(id)arg5 keywords:(id)arg6 userInfo:(id)arg7 spotlightCallback:(CDUnknownBlockType)arg8;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 publiclyIndexable:(_Bool)arg3 type:(id)arg4 thumbnailUrl:(id)arg5 keywords:(id)arg6 userInfo:(id)arg7 callback:(CDUnknownBlockType)arg8;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 canonicalId:(id)arg3 publiclyIndexable:(_Bool)arg4 type:(id)arg5 thumbnailUrl:(id)arg6 keywords:(id)arg7 userInfo:(id)arg8 expirationDate:(id)arg9 callback:(CDUnknownBlockType)arg10;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 publiclyIndexable:(_Bool)arg3 type:(id)arg4 thumbnailUrl:(id)arg5 keywords:(id)arg6 userInfo:(id)arg7 expirationDate:(id)arg8 callback:(CDUnknownBlockType)arg9;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 publiclyIndexable:(_Bool)arg3 thumbnailUrl:(id)arg4 keywords:(id)arg5 userInfo:(id)arg6;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 publiclyIndexable:(_Bool)arg3 thumbnailUrl:(id)arg4 userInfo:(id)arg5;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 publiclyIndexable:(_Bool)arg3 type:(id)arg4 thumbnailUrl:(id)arg5 keywords:(id)arg6 userInfo:(id)arg7;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 publiclyIndexable:(_Bool)arg3 type:(id)arg4 thumbnailUrl:(id)arg5 keywords:(id)arg6;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 publiclyIndexable:(_Bool)arg3 type:(id)arg4 thumbnailUrl:(id)arg5 keywords:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 publiclyIndexable:(_Bool)arg3 type:(id)arg4 thumbnailUrl:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 publiclyIndexable:(_Bool)arg3 type:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 publiclyIndexable:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)indexContentWithTitle:(id)arg1 description:(id)arg2;
- (id)standardSpotlightIdentifierFromActivity:(id)arg1;
- (id)spotlightIdentifierFromActivity:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataProvider-Protocol.h"

@class NSString, RedditService;

@interface ForYouFeedBannerDataProvider : NSObject <DataProvider>
{
    RedditService *_service;
}

@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)invalidate;
- (void)fetchFromCurrentObjects:(id)arg1 fetchingMore:(_Bool)arg2 pageSize:(long long)arg3 trace:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)processObjects:(id)arg1 currentCount:(long long)arg2;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ChatSettingsPresenter-Protocol.h"

@class Channel, NSString, RedditService;
@protocol AccountContext;

@interface ChatSettingsPresenter : NSObject <ChatSettingsPresenter>
{
    id <AccountContext> _accountContext;
    RedditService *_service;
    Channel *_channel;
}

@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(retain, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void).cxx_destruct;
- (id)channelStore;
- (void)toggleMuteBadgesWithSwitchValue:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleMuteNotificationsWithSwitchValue:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkForMutedNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithChannel:(id)arg1 accountContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


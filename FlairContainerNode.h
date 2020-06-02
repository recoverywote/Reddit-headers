//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PillContainerNode.h"

#import "ObjectObserverProtocol-Protocol.h"

@class NSString, Post, Subreddit, SubredditPowerupsInfo;

@interface FlairContainerNode : PillContainerNode <ObjectObserverProtocol>
{
    Subreddit *_subreddit;
    Post *_post;
    SubredditPowerupsInfo *_powerupsInfo;
}

+ (_Bool)shouldPresentPillForPost:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SubredditPowerupsInfo *powerupsInfo; // @synthesize powerupsInfo=_powerupsInfo;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
- (void)configureWithPost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


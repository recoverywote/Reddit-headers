//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CommunitiesEventFactory : NSObject
{
}

+ (id)eventWithAction:(id)arg1 noun:(id)arg2 subreddit:(id)arg3 profile:(id)arg4;
+ (id)favoriteEventWithSubreddit:(id)arg1 isFavorite:(_Bool)arg2;
+ (id)collapseSubscriptionsEventWithCollapsed:(_Bool)arg1;
+ (id)clickEventForProfile:(id)arg1;
+ (id)clickEventForSubreddit:(id)arg1;
+ (id)clickEventForPopular;
+ (id)clickEventForAll;
+ (id)clickEventForBrowseCommunities;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SubredditSettingsManager : NSObject
{
}

+ (id)updateSubredditPreferences:(id)arg1 newPreferences:(id)arg2;
+ (void)performSubredditPreferencesUpdateRequest:(id)arg1 oldValues:(id)arg2 accountContext:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
+ (void)loadUserSubredditPreferencesWithAccountContext:(id)arg1 subredditName:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;

@end


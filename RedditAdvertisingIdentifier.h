//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface RedditAdvertisingIdentifier : NSObject
{
    NSUserDefaults *_userDefaults;
}

+ (id)sharedIdentifier;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (void)updateWithResponse:(id)arg1;
- (void)setToken:(id)arg1;
@property(readonly, nonatomic) NSString *token;
- (id)initWithDefaults:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFSDKChecksum : NSObject
{
    _Bool _isCounterValid;
}

+ (_Bool)isDevelopmentBuild;
+ (_Bool)isSimulator;
+ (id)sharedManager;
@property _Bool isCounterValid; // @synthesize isCounterValid=_isCounterValid;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)calculate:(double *)arg1:(id)arg2:(id)arg3:(_Bool)arg4;
- (id)init;

@end

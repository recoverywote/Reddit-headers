//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Lottie/LOTColorValueDelegate-Protocol.h>

@class NSString;

@interface LOTColorBlockCallback : NSObject <LOTColorValueDelegate>
{
    CDUnknownBlockType _callback;
}

+ (id)withBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (struct CGColor *)colorForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startColor:(struct CGColor *)arg5 endColor:(struct CGColor *)arg6 currentColor:(struct CGColor *)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


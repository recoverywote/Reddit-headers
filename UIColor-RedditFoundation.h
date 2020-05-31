//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIColor.h>

@class NSString;

@interface UIColor (RedditFoundation)
+ (id)randomColor;
+ (id)sanitizedHexColorString:(id)arg1;
+ (id)r_colorWithHexString:(id)arg1;
- (id)inverseColor;
- (_Bool)isApproximatelyWhiteColor;
- (_Bool)isEqualToColor:(id)arg1 withTolerance:(double)arg2;
- (id)blendWithColor:(id)arg1 weight:(double)arg2;
@property(readonly, nonatomic) NSString *r_hexString;
@end


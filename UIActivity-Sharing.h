//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class UIImage;

@interface UIActivity (Sharing)
+ (_Bool)isNeedPhotoPerimissionsForActivityType:(id)arg1;
+ (_Bool)shouldShareImageForActivityType:(id)arg1;
+ (id)redditActivityForActivityType:(id)arg1;
+ (id)inlineShareActivities;
@property(readonly, nonatomic) UIImage *redditActivityImage;
@end


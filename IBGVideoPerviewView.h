//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIView;

@interface IBGVideoPerviewView : UIImageView
{
    UIView *_dimmedView;
    UIImageView *_playImageView;
}

@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UIView *dimmedView; // @synthesize dimmedView=_dimmedView;
- (void).cxx_destruct;
- (void)setPerviewImage:(id)arg1;
- (void)updateConstraints;
- (id)init;

@end


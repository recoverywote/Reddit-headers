//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class IBGMenuButtonItem;

@interface IBGMenuButton : UIButton
{
    IBGMenuButtonItem *_item;
}

@property(retain, nonatomic) IBGMenuButtonItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)setupForPressedState:(id)arg1;
- (void)setupForNormalState:(id)arg1;
- (void)performHandler:(id)arg1;
- (id)initWithItem:(id)arg1;

@end


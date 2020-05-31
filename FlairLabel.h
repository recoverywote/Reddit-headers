//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PillButton.h"

@class PillStyle;
@protocol FlairViewDelegate;

@interface FlairLabel : PillButton
{
    id <FlairViewDelegate> _delegate;
    PillStyle *_pillStyle;
}

@property(retain, nonatomic) PillStyle *pillStyle; // @synthesize pillStyle=_pillStyle;
@property(nonatomic) __weak id <FlairViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)defaultButtonTitle;
- (void)didTapFlair:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)configureWithFlair:(id)arg1 maxEmojisToLoad:(long long)arg2;
- (void)configureWithPill:(id)arg1 maxEmojisToLoad:(long long)arg2;
- (id)init;

@end

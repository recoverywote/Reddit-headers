//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedPostCommentsBarView.h"

@class GradientView;

@interface TheatreCommentsBarView : FeedPostCommentsBarView
{
    GradientView *_gradientView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GradientView *gradientView; // @synthesize gradientView=_gradientView;
- (void)layoutSubviews;
- (double)seperatorSpacing;
- (SEL)customLineColor;
- (SEL)customMetatextColor;
- (SEL)customActionColor;
- (SEL)customBackgroundColor;
- (id)initWithViewContext:(id)arg1 frame:(struct CGRect)arg2;

@end


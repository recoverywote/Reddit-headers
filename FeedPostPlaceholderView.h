//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AnimatedGradientView;

@interface FeedPostPlaceholderView : UIView
{
    UIView *_userIconView;
    UIView *_titleViewFirst;
    UIView *_titleViewSecond;
    UIView *_postTitleView;
    UIView *_postContentView;
    UIView *_upvoteView;
    UIView *_scoreView;
    UIView *_downvoteView;
    UIView *_commentView;
    UIView *_shareView;
    AnimatedGradientView *_gradientView;
    UIView *_mask;
}

@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) AnimatedGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) UIView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UIView *downvoteView; // @synthesize downvoteView=_downvoteView;
@property(retain, nonatomic) UIView *scoreView; // @synthesize scoreView=_scoreView;
@property(retain, nonatomic) UIView *upvoteView; // @synthesize upvoteView=_upvoteView;
@property(retain, nonatomic) UIView *postContentView; // @synthesize postContentView=_postContentView;
@property(retain, nonatomic) UIView *postTitleView; // @synthesize postTitleView=_postTitleView;
@property(retain, nonatomic) UIView *titleViewSecond; // @synthesize titleViewSecond=_titleViewSecond;
@property(retain, nonatomic) UIView *titleViewFirst; // @synthesize titleViewFirst=_titleViewFirst;
@property(retain, nonatomic) UIView *userIconView; // @synthesize userIconView=_userIconView;
- (void).cxx_destruct;
- (void)configureView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


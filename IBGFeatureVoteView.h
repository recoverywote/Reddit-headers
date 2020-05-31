//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IBGFeatureRippleView, UIImageView, UILabel;
@protocol IBGFeatureVoteViewDelegate;

@interface IBGFeatureVoteView : UIView
{
    _Bool _isSwitchedOn;
    id <IBGFeatureVoteViewDelegate> _delegate;
    unsigned long long _index;
    UIImageView *_voteImageView;
    UILabel *_votesNumberLabel;
    UILabel *_votesLabel;
    IBGFeatureRippleView *_customRippleView;
}

@property(nonatomic) _Bool isSwitchedOn; // @synthesize isSwitchedOn=_isSwitchedOn;
@property(retain, nonatomic) IBGFeatureRippleView *customRippleView; // @synthesize customRippleView=_customRippleView;
@property(retain, nonatomic) UILabel *votesLabel; // @synthesize votesLabel=_votesLabel;
@property(retain, nonatomic) UILabel *votesNumberLabel; // @synthesize votesNumberLabel=_votesNumberLabel;
@property(retain, nonatomic) UIImageView *voteImageView; // @synthesize voteImageView=_voteImageView;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <IBGFeatureVoteViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animateVote;
- (void)decrementVoteCount;
- (void)incrementVoteCount;
- (void)applyThemeForVotedDown;
- (void)applyThemeForVotedUp;
- (void)didVoteDown;
- (void)didVoteUp;
- (void)setVoted:(_Bool)arg1;
- (void)toggleButton;
- (void)setVoteCount:(unsigned long long)arg1;
- (void)updateConstraints;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IBGFeatureDetailVoteButton, IBGPaddingLabel, UILabel;
@protocol IBGFeatureDetailVoteDelegate;

@interface IBGFeatureDetailCommentsSectionHeader : UIView
{
    id <IBGFeatureDetailVoteDelegate> _delegate;
    UILabel *_authorLabel;
    IBGPaddingLabel *_statusLabel;
    UIView *_separatorView;
    IBGFeatureDetailVoteButton *_voteButton;
}

@property(retain, nonatomic) IBGFeatureDetailVoteButton *voteButton; // @synthesize voteButton=_voteButton;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) IBGPaddingLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(nonatomic) __weak id <IBGFeatureDetailVoteDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didVote;
- (void)setVoteCount:(unsigned long long)arg1 isSelected:(_Bool)arg2;
- (void)setStatusColor:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)updateConstraints;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AttributedLabelDelegate-Protocol.h"

@class AttributedLabel, EmptyDogeView, NSAttributedString, NSLayoutConstraint, NSString, UIScrollView, UIView;
@protocol AccountContext;

@interface SimpleAttributedLabelViewController : BaseViewController <AttributedLabelDelegate>
{
    id <AccountContext> _accountContext;
    UIScrollView *_scrollView;
    UIView *_contentView;
    AttributedLabel *_attributedLabel;
    EmptyDogeView *_emptyView;
    NSAttributedString *_attributedString;
    NSLayoutConstraint *_contentViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // @synthesize contentViewHeightConstraint=_contentViewHeightConstraint;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) EmptyDogeView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) AttributedLabel *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void).cxx_destruct;
- (void)handleLinkURL:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)setupUI;
- (void)setEmptyStateHidden:(_Bool)arg1;
- (void)configureWithAttributedString:(id)arg1;
- (void)configureViewAppearance;
- (void)viewDidLoad;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


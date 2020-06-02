//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseScrollView.h>

#import "BaseTextViewDelegate-Protocol.h"
#import "LinkViewControllerDelegate-Protocol.h"

@class BaseLabel, BaseTextView, BaseView, NSString, Post;
@protocol AccountContext;

@interface EditPostView : BaseScrollView <LinkViewControllerDelegate, BaseTextViewDelegate>
{
    id <AccountContext> _accountContext;
    Post *_post;
    BaseLabel *_titleLabel;
    BaseView *_titleDivider;
    BaseTextView *_bodyTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseTextView *bodyTextView; // @synthesize bodyTextView=_bodyTextView;
@property(retain, nonatomic) BaseView *titleDivider; // @synthesize titleDivider=_titleDivider;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (_Bool)textViewShouldChangeSize:(id)arg1;
- (void)textView:(id)arg1 didChangeToNewSize:(struct CGSize)arg2;
- (void)linkViewControllerDidTapInsert:(id)arg1;
- (void)didTapCloseLink;
- (void)didTapLinkButton;
- (void)configureWithPost:(id)arg1;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


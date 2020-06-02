//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseScrollView.h>

#import "BaseTextViewDelegate-Protocol.h"
#import "CommentComposeKeyboardAccessoryViewDelegate-Protocol.h"
#import "CommentTextViewDelegate-Protocol.h"
#import "LinkViewControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class BaseAttachmentTextView, BaseView, Comment, CommentComposeImageManager, CommentHeaderView, CommentTextView, NSString, _TtC6Reddit23MetaEmoteComposeManager, _TtC6Reddit23MetaGIPHYComposeManager;
@protocol PowerupsCommentCreationDelegate, ViewContext;

@interface CommentReplyView : BaseScrollView <CommentTextViewDelegate, BaseTextViewDelegate, UITextViewDelegate, LinkViewControllerDelegate, CommentComposeKeyboardAccessoryViewDelegate>
{
    Comment *_comment;
    BaseAttachmentTextView *_replyTextView;
    CommentTextView *_commentTextView;
    CommentComposeImageManager *_imageManager;
    _TtC6Reddit23MetaEmoteComposeManager *_emoteComposeManager;
    _TtC6Reddit23MetaGIPHYComposeManager *_giphyComposeManager;
    id <PowerupsCommentCreationDelegate> _powerupsDelegate;
    id <ViewContext> _viewContext;
    CommentHeaderView *_commentHeaderView;
    BaseView *_seperatorLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseView *seperatorLineView; // @synthesize seperatorLineView=_seperatorLineView;
@property(retain, nonatomic) CommentHeaderView *commentHeaderView; // @synthesize commentHeaderView=_commentHeaderView;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) __weak id <PowerupsCommentCreationDelegate> powerupsDelegate; // @synthesize powerupsDelegate=_powerupsDelegate;
@property(retain, nonatomic) _TtC6Reddit23MetaGIPHYComposeManager *giphyComposeManager; // @synthesize giphyComposeManager=_giphyComposeManager;
@property(retain, nonatomic) _TtC6Reddit23MetaEmoteComposeManager *emoteComposeManager; // @synthesize emoteComposeManager=_emoteComposeManager;
@property(retain, nonatomic) CommentComposeImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) CommentTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) BaseAttachmentTextView *replyTextView; // @synthesize replyTextView=_replyTextView;
@property(retain, nonatomic) Comment *comment; // @synthesize comment=_comment;
- (void)commentTextViewDidChangeSelection:(id)arg1;
- (void)linkViewControllerDidTapInsert:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)moveCaretIfPossibleInScrollView:(id)arg1;
- (void)setEmoteComposeKeyboardVisible:(_Bool)arg1;
- (void)toggleEmoteCompose;
@property(nonatomic) _Bool isGIPHYComposeEnabled;
@property(nonatomic) _Bool isEmoteComposeEnabled;
- (_Bool)textViewShouldChangeSize:(id)arg1;
- (void)textView:(id)arg1 didChangeToNewSize:(struct CGSize)arg2;
- (void)commentTextViewDidWantToExpandOrCollapseCommandBar:(id)arg1;
- (void)commentTextViewDidWantToCollapse:(id)arg1;
- (void)commentTextView:(id)arg1 didTapLinkURL:(id)arg2;
- (void)didTapCloseLinkPopUp;
- (void)commentComposeKeyboardAccessoryViewDidSelectPowerupsGIFs:(id)arg1 powerupsInfo:(id)arg2;
- (void)commentComposeKeyboardAccessoryViewDidSelectPowerupsEmotes:(id)arg1 powerupsInfo:(id)arg2;
- (void)commentComposeKeyboardAccessoryViewDidSelectGIFs:(id)arg1;
- (void)commentComposeKeyboardAccessoryViewDidSelectEmotes:(id)arg1;
- (void)commentComposeKeyboardAccessoryViewDidSelectPhotos:(id)arg1;
- (void)commentComposeKeyboardAccessoryViewDidSelectCamera:(id)arg1;
- (void)commentComposeKeyboardAccessoryViewDidSelectLink:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setPowerupsInfo:(id)arg1;
- (void)configureWithComment:(id)arg1 styling:(id)arg2;
- (id)initWithViewContext:(id)arg1 imageManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


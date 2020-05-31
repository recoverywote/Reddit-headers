//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

@class BaseButton, EditPostView, NSString, Post;

@interface EditPostViewController : BaseViewController
{
    Post *_post;
    EditPostView *_editPostView;
    BaseButton *_postButton;
    NSString *_originalPostSelfText;
    CDUnknownBlockType _onEditSuccess;
}

@property(copy, nonatomic) CDUnknownBlockType onEditSuccess; // @synthesize onEditSuccess=_onEditSuccess;
@property(copy, nonatomic) NSString *originalPostSelfText; // @synthesize originalPostSelfText=_originalPostSelfText;
@property(retain, nonatomic) BaseButton *postButton; // @synthesize postButton=_postButton;
@property(retain, nonatomic) EditPostView *editPostView; // @synthesize editPostView=_editPostView;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (void)updatePostTextWithNewDataAndExit;
- (void)updatePostButtonWithText:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateAfterEditPostRequestSucceeded;
- (void)updateAfterEditPostRequestFailed;
- (void)didTapDoneButton;
- (void)didTapClose;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPost:(id)arg1 onEditSuccess:(CDUnknownBlockType)arg2;

@end


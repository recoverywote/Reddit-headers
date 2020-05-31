//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "RequestToNavigateView-Protocol.h"

@class ComposeMessageView, NSObject, NSString, Subreddit, User;
@protocol AccountContext, ComposeMessageViewControllerDelegate;

@interface ComposeMessageViewController : BaseViewController <RequestToNavigateView>
{
    _Bool _messageModeratorsMode;
    NSObject<ComposeMessageViewControllerDelegate> *_delegate;
    id <AccountContext> _accountContext;
    ComposeMessageView *_composeView;
    User *_user;
    Subreddit *_subreddit;
}

@property(nonatomic) _Bool messageModeratorsMode; // @synthesize messageModeratorsMode=_messageModeratorsMode;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(retain, nonatomic) ComposeMessageView *composeView; // @synthesize composeView=_composeView;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak NSObject<ComposeMessageViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsScreenViewName;
- (void)requestToNavigateAwayWithCompletion:(CDUnknownBlockType)arg1;
- (void)didTapPostButton:(id)arg1;
- (void)resignResponderAndDismiss;
- (void)presentAlertToConfirmUserNavigatingAwayWithCompletion:(CDUnknownBlockType)arg1;
- (void)didTapClose;
- (void)toggleSendButton:(id)arg1 asEnabled:(_Bool)arg2;
- (_Bool)didUserMakeChangesToContent;
- (void)configureWithDeeplinkURL:(id)arg1;
- (void)configureWithSubreddit:(id)arg1;
- (void)configureWithUser:(id)arg1;
- (void)configureWithUsername:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


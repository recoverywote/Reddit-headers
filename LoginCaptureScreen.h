//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CaptureScreen.h"

@class CaptureContentButton, CaptureContentTextEntry, NSString;

@interface LoginCaptureScreen : CaptureScreen
{
    _Bool _revealPassword;
    CaptureContentTextEntry *_usernameContent;
    CaptureContentTextEntry *_passwordContent;
    CaptureContentButton *_forgotPasswordContent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool revealPassword; // @synthesize revealPassword=_revealPassword;
@property(retain, nonatomic) CaptureContentButton *forgotPasswordContent; // @synthesize forgotPasswordContent=_forgotPasswordContent;
@property(retain, nonatomic) CaptureContentTextEntry *passwordContent; // @synthesize passwordContent=_passwordContent;
@property(retain, nonatomic) CaptureContentTextEntry *usernameContent; // @synthesize usernameContent=_usernameContent;
- (void)logTapNextAnalyticsEvent;
- (void)logTapBackAnalyticsEvent;
- (void)didTapCloseForgotPassword;
@property(readonly, nonatomic) NSString *password;
@property(readonly, nonatomic) NSString *username;
- (void)showForgotPasswordScreen;
- (void)toggleRevealPassword:(id)arg1;
- (_Bool)validateContent;
- (_Bool)shouldReloadOnFailure;
- (id)contentItems;

@end


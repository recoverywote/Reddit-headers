//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface _TtC6Reddit26RegistrationViewController : UIViewController
{
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: registerView
    // Error parsing type: , name: confirmationInputAccessoryView
    // Error parsing type: , name: confirmationButton
    // Error parsing type: , name: accountManager
    // Error parsing type: , name: accountContext
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)checkUsernameAvailability;
- (void)register:(id)arg1;
- (void)performPasswordValidation;
- (void)deboncedPerformPasswordValidation;
- (void)performUsernameValidation;
- (void)performEmailValidation;
- (void)emailFieldTextChangedWithSender:(id)arg1;
- (void)passwordFieldTextChangedWithSender:(id)arg1;
- (void)usernameFieldTextChangedWithSender:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountContext:(id)arg1;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) UIView *inputAccessoryView;

@end


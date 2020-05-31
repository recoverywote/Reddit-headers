//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ModFormViewController.h"

#import "ModFormDropdownDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class ModFormDropdown, ModFormDuration, ModFormPadding, ModFormTextField, ModFormTextView, NSArray, NSDate, NSNumber, NSString, NSURL, UIActivityIndicatorView, UINavigationController, UIViewController;

@interface BannedUserFormViewController : ModFormViewController <UITextFieldDelegate, ModFormDropdownDelegate>
{
    _Bool _allowsEditingUsername;
    UIViewController *_fromVC;
    UINavigationController *_fromModal;
    ModFormTextField *_usernameField;
    ModFormDropdown *_reasonDropdown;
    ModFormTextField *_reasonField;
    ModFormTextField *_noteField;
    ModFormDuration *_durationField;
    ModFormTextView *_messageField;
    ModFormPadding *_banContextContainer;
    NSArray *_reasons;
    NSURL *_contextURL;
    UIActivityIndicatorView *_activityIndicator;
    NSString *_initialUserID;
    NSString *_initialUsername;
    NSString *_initialBanMessage;
    NSNumber *_initialBanDuration;
    NSString *_initialModNote;
    NSString *_initialBanReason;
    NSDate *_initialBanDate;
    NSString *_initialContext;
}

@property(readonly, nonatomic) _Bool allowsEditingUsername; // @synthesize allowsEditingUsername=_allowsEditingUsername;
@property(readonly, copy, nonatomic) NSString *initialContext; // @synthesize initialContext=_initialContext;
@property(readonly, copy, nonatomic) NSDate *initialBanDate; // @synthesize initialBanDate=_initialBanDate;
@property(readonly, copy, nonatomic) NSString *initialBanReason; // @synthesize initialBanReason=_initialBanReason;
@property(readonly, copy, nonatomic) NSString *initialModNote; // @synthesize initialModNote=_initialModNote;
@property(readonly, copy, nonatomic) NSNumber *initialBanDuration; // @synthesize initialBanDuration=_initialBanDuration;
@property(readonly, copy, nonatomic) NSString *initialBanMessage; // @synthesize initialBanMessage=_initialBanMessage;
@property(readonly, copy, nonatomic) NSString *initialUsername; // @synthesize initialUsername=_initialUsername;
@property(readonly, copy, nonatomic) NSString *initialUserID; // @synthesize initialUserID=_initialUserID;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSURL *contextURL; // @synthesize contextURL=_contextURL;
@property(retain, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(retain, nonatomic) ModFormPadding *banContextContainer; // @synthesize banContextContainer=_banContextContainer;
@property(retain, nonatomic) ModFormTextView *messageField; // @synthesize messageField=_messageField;
@property(retain, nonatomic) ModFormDuration *durationField; // @synthesize durationField=_durationField;
@property(retain, nonatomic) ModFormTextField *noteField; // @synthesize noteField=_noteField;
@property(retain, nonatomic) ModFormTextField *reasonField; // @synthesize reasonField=_reasonField;
@property(retain, nonatomic) ModFormDropdown *reasonDropdown; // @synthesize reasonDropdown=_reasonDropdown;
@property(retain, nonatomic) ModFormTextField *usernameField; // @synthesize usernameField=_usernameField;
@property(retain, nonatomic) UINavigationController *fromModal; // @synthesize fromModal=_fromModal;
@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
- (void).cxx_destruct;
- (void)didTapContextView;
- (void)configureBanContextContainerWithSubview:(id)arg1;
- (id)commentViewFromComment:(id)arg1;
- (id)postViewFromPost:(id)arg1;
- (void)didGetContextComment:(id)arg1;
- (void)didGetContextPost:(id)arg1;
- (_Bool)isEditingExistingForm;
- (_Bool)isHardcodedUser;
- (void)dropdown:(id)arg1 itemSelectedAtIndex:(long long)arg2;
- (void)banUser:(id)arg1;
- (void)addButtonPress:(id)arg1;
- (void)updateReason;
- (void)buildForm;
- (void)viewDidAppear:(_Bool)arg1;
- (id)addButtonTitle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)fetchRules;
- (void)presentFromViewController:(id)arg1;
- (id)initWithSubreddit:(id)arg1 accountContext:(id)arg2;
- (id)initWithSubreddit:(id)arg1 accountContext:(id)arg2 userID:(id)arg3 username:(id)arg4 message:(id)arg5 banDuration:(id)arg6 modNote:(id)arg7 reason:(id)arg8 banDate:(id)arg9 context:(id)arg10 allowEditingUsername:(_Bool)arg11;
- (id)initWithSubreddit:(id)arg1 accountContext:(id)arg2 contact:(id)arg3;
- (id)initWithSubreddit:(id)arg1 accountContext:(id)arg2 user:(id)arg3 context:(id)arg4;
- (id)initWithSubreddit:(id)arg1 accountContext:(id)arg2 bannedUser:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


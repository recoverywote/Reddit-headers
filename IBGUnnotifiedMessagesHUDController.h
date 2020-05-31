//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGUnnotifiedMessagesAlertWindowDelegate-Protocol.h>

@class IBGChat, IBGUnnotifiedMessagesAlertWindow, NSString;
@protocol IBGUnnotifiedMessagesHUDControllerDelegate;

@interface IBGUnnotifiedMessagesHUDController : NSObject <IBGUnnotifiedMessagesAlertWindowDelegate>
{
    id <IBGUnnotifiedMessagesHUDControllerDelegate> _delegate;
    IBGUnnotifiedMessagesAlertWindow *_notificationWindow;
    IBGChat *_notificationChat;
}

@property(nonatomic) __weak IBGChat *notificationChat; // @synthesize notificationChat=_notificationChat;
@property(retain, nonatomic) IBGUnnotifiedMessagesAlertWindow *notificationWindow; // @synthesize notificationWindow=_notificationWindow;
@property(nonatomic) __weak id <IBGUnnotifiedMessagesHUDControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertWindowWillDealloc;
- (void)didDismissNotificationAlertWindow:(id)arg1;
- (void)didClickNotificationAlertWindow:(id)arg1;
- (id)chatModelFromMessage:(id)arg1;
- (id)getMessagesAlertWindowForSender:(id)arg1 number:(long long)arg2;
- (id)getMessagesAlertWindowForSender:(id)arg1 andByLine:(id)arg2;
- (void)initializeNotificationWindowForMultipleMessages:(id)arg1;
- (void)initializeNotificationWindowForMessage:(id)arg1;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)showWithMessages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


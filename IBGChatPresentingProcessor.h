//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGChat;

@interface IBGChatPresentingProcessor : NSObject
{
    _Bool _isNotification;
    _Bool _shouldShowChat;
    _Bool _shouldClose;
    IBGChat *_chat;
}

@property(nonatomic) _Bool shouldClose; // @synthesize shouldClose=_shouldClose;
@property(nonatomic) _Bool shouldShowChat; // @synthesize shouldShowChat=_shouldShowChat;
@property(nonatomic) _Bool isNotification; // @synthesize isNotification=_isNotification;
@property(retain, nonatomic) IBGChat *chat; // @synthesize chat=_chat;
- (void).cxx_destruct;
- (_Bool)isSDKPresent;
- (unsigned long long)chatCount;
- (id)lastChat;
- (_Bool)isChatListEmpty;
- (_Bool)isPresentedFromSDK;
- (_Bool)shouldDismissViewInChat;
- (_Bool)shouldDismissSDKInChat;
- (_Bool)shouldShowCloseInChat;
- (_Bool)shouldDismissSDKInChatList;
- (_Bool)shouldDisplayChatList;
- (id)selectedChat;
- (id)initWithConfiguration:(id)arg1;

@end


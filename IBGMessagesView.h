//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Instabug/UITableViewDelegate-Protocol.h>

@class IBGChatCollectionView, NSString;

@interface IBGMessagesView : UIView <UITableViewDelegate>
{
    _Bool _firstTimeShowKeyboard;
    IBGChatCollectionView *_messagesCollectionView;
    NSString *_messageCellIdentifier;
    double _message;
}

@property(nonatomic) _Bool firstTimeShowKeyboard; // @synthesize firstTimeShowKeyboard=_firstTimeShowKeyboard;
@property(nonatomic) double message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *messageCellIdentifier; // @synthesize messageCellIdentifier=_messageCellIdentifier;
@property(retain, nonatomic) IBGChatCollectionView *messagesCollectionView; // @synthesize messagesCollectionView=_messagesCollectionView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)keyboardWillShow:(id)arg1;
- (void)scrollToBottom;
- (void)updateWithBlock:(CDUnknownBlockType)arg1;
- (void)initialLoad;
- (void)updateChatTableViewScrollViewWithOffset:(double)arg1;
- (id)cellAtIndexPath:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)applyTheme;
- (void)registerNotifications;
- (void)registerCells;
- (void)initializeView;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


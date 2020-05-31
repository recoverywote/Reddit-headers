//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ChatCompositionViewControllerDelegate-Protocol.h"
#import "ChatConnectionObserverDelegate-Protocol.h"
#import "ChatFeedInteractorDelegate-Protocol.h"
#import "ChatMessageCellDelegate-Protocol.h"
#import "PostActionSheetDelegate-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ASTableNode, BaseLabel, Channel, ChatCompositionViewController, ChatConnectionObserver, ChatConnectionStatusViewController, ChatDiffingAdapter, ChatFeedInteractor, ChatSkeletonView, ChatUserMentionTypeAheadAccessory, ChatUserMentionViewController, ContactActionSheetDelegate, NSString, NSTimer, RedditService, TypingIndicatorView, UIBarButtonItem, UIPanGestureRecognizer;
@protocol AccountContext;

@interface ChatTextureViewController : BaseViewController <ChatMessageCellDelegate, ChatFeedInteractorDelegate, ChatCompositionViewControllerDelegate, UIScrollViewDelegate, RUIThemeUpdateCallbackProtocol, UIGestureRecognizerDelegate, ChatConnectionObserverDelegate, PostActionSheetDelegate>
{
    _Bool _shouldShowLoadingSkeleton;
    Channel *_channel;
    ChatFeedInteractor *_feedInteractor;
    ChatCompositionViewController *_compositionController;
    id <AccountContext> _accountContext;
    ASTableNode *_tableNode;
    UIBarButtonItem *_moreButton;
    ChatDiffingAdapter *_diffingAdapter;
    UIPanGestureRecognizer *_dismissKeyboardGesture;
    TypingIndicatorView *_typingIndicatorView;
    BaseLabel *_titleLabel;
    BaseLabel *_subtitleLabel;
    ContactActionSheetDelegate *_contactActionSheetDelegate;
    ChatSkeletonView *_skeletonView;
    NSTimer *_skeletonLoadingTimer;
    ChatConnectionObserver *_connectionObserver;
    ChatConnectionStatusViewController *_connectIndicatorController;
    ChatUserMentionViewController *_userMentionViewController;
    ChatUserMentionTypeAheadAccessory *_userMentionTypeAheadAccessory;
    double _previousTopInset;
}

@property(nonatomic) double previousTopInset; // @synthesize previousTopInset=_previousTopInset;
@property(retain, nonatomic) ChatUserMentionTypeAheadAccessory *userMentionTypeAheadAccessory; // @synthesize userMentionTypeAheadAccessory=_userMentionTypeAheadAccessory;
@property(retain, nonatomic) ChatUserMentionViewController *userMentionViewController; // @synthesize userMentionViewController=_userMentionViewController;
@property(retain, nonatomic) ChatConnectionStatusViewController *connectIndicatorController; // @synthesize connectIndicatorController=_connectIndicatorController;
@property(retain, nonatomic) ChatConnectionObserver *connectionObserver; // @synthesize connectionObserver=_connectionObserver;
@property(retain, nonatomic) NSTimer *skeletonLoadingTimer; // @synthesize skeletonLoadingTimer=_skeletonLoadingTimer;
@property(retain, nonatomic) ChatSkeletonView *skeletonView; // @synthesize skeletonView=_skeletonView;
@property(retain, nonatomic) ContactActionSheetDelegate *contactActionSheetDelegate; // @synthesize contactActionSheetDelegate=_contactActionSheetDelegate;
@property(retain, nonatomic) BaseLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TypingIndicatorView *typingIndicatorView; // @synthesize typingIndicatorView=_typingIndicatorView;
@property(retain, nonatomic) UIPanGestureRecognizer *dismissKeyboardGesture; // @synthesize dismissKeyboardGesture=_dismissKeyboardGesture;
@property(retain, nonatomic) ChatDiffingAdapter *diffingAdapter; // @synthesize diffingAdapter=_diffingAdapter;
@property(retain, nonatomic) UIBarButtonItem *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) ASTableNode *tableNode; // @synthesize tableNode=_tableNode;
@property(nonatomic) _Bool shouldShowLoadingSkeleton; // @synthesize shouldShowLoadingSkeleton=_shouldShowLoadingSkeleton;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) ChatCompositionViewController *compositionController; // @synthesize compositionController=_compositionController;
@property(retain, nonatomic) ChatFeedInteractor *feedInteractor; // @synthesize feedInteractor=_feedInteractor;
@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)showShareViewForPost:(id)arg1 sender:(id)arg2 origin:(unsigned long long)arg3;
- (void)actionSheetViewController:(id)arg1 didTapSharePost:(id)arg2 sender:(id)arg3;
- (id)analyticsPageType;
- (void)chatConnectionObserver:(id)arg1 didReportConnectionStatusChange:(unsigned long long)arg2;
- (void)skeletonLoadingTimerFired:(id)arg1;
- (void)resetSkeletonLoadingTimer;
- (void)activateSkeletonLoadingTimer;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)themeDidChange:(id)arg1;
- (void)chatCompositionViewControllerDidTapCancelSelectedMedia:(id)arg1;
- (void)chatCompositionViewController:(id)arg1 didTapMediaSource:(long long)arg2;
- (void)chatCompositionViewController:(id)arg1 sizeDidChange:(struct CGSize)arg2;
- (void)scrollToMostRecent;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dismissKeyboardGestureDidPan:(id)arg1;
- (void)didTapOverflow:(id)arg1;
- (void)chatFeedInteractor:(id)arg1 didSendMessage:(id)arg2;
- (void)chatFeedInteractor:(id)arg1 channelMembersWereUpdated:(id)arg2;
- (void)chatFeedInteractor:(id)arg1 channelNameWasUpdated:(id)arg2;
- (void)chatFeedInteractorUserWasBanned:(id)arg1;
- (void)chatFeedInteractor:(id)arg1 presentActionSheet:(id)arg2;
- (void)chatFeedInteractor:(id)arg1 presentViewController:(id)arg2;
- (void)chatFeedInteractor:(id)arg1 pushViewController:(id)arg2;
- (void)chatFeedInteractor:(id)arg1 didFetchFromCache:(_Bool)arg2;
- (void)chatFeedInteractorDidBeginFetch:(id)arg1;
- (void)chatFeedInteractor:(id)arg1 showShareSheetForPost:(id)arg2 fromSource:(id)arg3;
- (void)chatFeedInteractor:(id)arg1 typingMembersDidChange:(id)arg2;
- (void)chatFeedInteractorWantsScrollToBottom:(id)arg1 requiresOffsetAtBottom:(_Bool)arg2;
- (_Bool)isOffsetNearBottom;
- (_Bool)isOffsetNearBottomWithLastMessage;
- (void)removeLoadingSkeleton;
- (void)disableActionViews;
- (void)enableActionViews;
- (void)updateSubtitleLabel;
- (void)updateTitleLabel;
- (void)configureTitleView;
- (void)configureWithContacts:(id)arg1;
- (void)configureWithUrl:(id)arg1;
- (void)configureWithUser:(id)arg1;
- (void)configureWithChannel:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)updateInsetsAndShouldChangeOffset:(_Bool)arg1;
- (struct UIEdgeInsets)invertedPreferredContentInset;
- (struct UIEdgeInsets)preferredContentInset;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1;
- (void)didPressDelete:(id)arg1;
- (void)logComplaintSiteVisitedEvent:(id)arg1 chatMessage:(id)arg2 complaintType:(unsigned long long)arg3;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)showContactActionSheetWithContact:(id)arg1;
- (void)chatMessageCellDidTapUser:(id)arg1 isReportedUser:(_Bool)arg2;
- (void)chatMessageCellDidLongPress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


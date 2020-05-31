//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ListingNetworkSourceDelegate-Protocol.h"
#import "LiveCommentDelegate-Protocol.h"

@class ASBatchContext, Comment, CommentNetworkSource, LiveStream, NSArray, NSDate, NSMutableDictionary, NSString, NSTimer, Post, RedditService, SocketSession;
@protocol AccountContext, ChatPostPresenterDelegate, _TtP6Reddit30ChatPostNetworkManagerProtocol_;

@interface ChatPostPresenter : NSObject <LiveCommentDelegate, ListingNetworkSourceDelegate>
{
    _Bool _hasPinnedStickiedComment;
    _Bool _didLoseConnection;
    id <AccountContext> _accountContext;
    id <ChatPostPresenterDelegate> _delegate;
    LiveStream *_liveStream;
    Post *_post;
    NSArray *_typeAheadUsers;
    unsigned long long _presentationStyle;
    NSString *_deeplinkCommentId;
    long long _currentAppearanceState;
    CDUnknownBlockType _sendButtonAction;
    CDUnknownBlockType _closeButtonAction;
    CDUnknownBlockType _awardButtonAction;
    CDUnknownBlockType _newMessageArrived;
    Comment *_mostRecentComment;
    NSArray *_cellModels;
    CommentNetworkSource *_commentNetworkSource;
    SocketSession *_socketSession;
    NSTimer *_connectionAlertTimer;
    ASBatchContext *_batchContext;
    NSDate *_disconnectTime;
    NSObject<_TtP6Reddit30ChatPostNetworkManagerProtocol_> *_networkManager;
    NSMutableDictionary *_deletedCommentsCache;
    NSArray *_keyValueObservations;
}

+ (void)setHasSeenChatPostRules:(_Bool)arg1;
+ (_Bool)hasSeenChatPostRules;
+ (id)bucketedCommentsWithInitialCellModels:(id)arg1 users:(id)arg2;
+ (id)deleteCommentWithInitialCellModels:(id)arg1 commentToDelete:(id)arg2 handleType:(long long)arg3;
+ (id)insertCommentWithInitialCellModels:(id)arg1 commentNode:(id)arg2 users:(id)arg3 handleType:(long long)arg4 currentAccountPk:(id)arg5;
+ (id)expandBucketWithInitialCellModels:(id)arg1 bucket:(id)arg2;
+ (id)getUserPkWithInitialCellModels:(id)arg1 username:(id)arg2;
+ (id)findCellModelWithCellModels:(id)arg1 commentPk:(id)arg2;
+ (id)findCommentNodeWithInitialCellModels:(id)arg1 commentPk:(id)arg2;
@property(copy, nonatomic) NSArray *keyValueObservations; // @synthesize keyValueObservations=_keyValueObservations;
@property(retain, nonatomic) NSMutableDictionary *deletedCommentsCache; // @synthesize deletedCommentsCache=_deletedCommentsCache;
@property(retain, nonatomic) NSObject<_TtP6Reddit30ChatPostNetworkManagerProtocol_> *networkManager; // @synthesize networkManager=_networkManager;
@property(retain, nonatomic) NSDate *disconnectTime; // @synthesize disconnectTime=_disconnectTime;
@property(retain, nonatomic) ASBatchContext *batchContext; // @synthesize batchContext=_batchContext;
@property(retain, nonatomic) NSTimer *connectionAlertTimer; // @synthesize connectionAlertTimer=_connectionAlertTimer;
@property(nonatomic) _Bool didLoseConnection; // @synthesize didLoseConnection=_didLoseConnection;
@property(retain, nonatomic) SocketSession *socketSession; // @synthesize socketSession=_socketSession;
@property(retain, nonatomic) CommentNetworkSource *commentNetworkSource; // @synthesize commentNetworkSource=_commentNetworkSource;
@property(retain, nonatomic) NSArray *cellModels; // @synthesize cellModels=_cellModels;
@property(retain, nonatomic) Comment *mostRecentComment; // @synthesize mostRecentComment=_mostRecentComment;
@property(nonatomic) _Bool hasPinnedStickiedComment; // @synthesize hasPinnedStickiedComment=_hasPinnedStickiedComment;
@property(copy, nonatomic) CDUnknownBlockType newMessageArrived; // @synthesize newMessageArrived=_newMessageArrived;
@property(copy, nonatomic) CDUnknownBlockType awardButtonAction; // @synthesize awardButtonAction=_awardButtonAction;
@property(copy, nonatomic) CDUnknownBlockType closeButtonAction; // @synthesize closeButtonAction=_closeButtonAction;
@property(copy, nonatomic) CDUnknownBlockType sendButtonAction; // @synthesize sendButtonAction=_sendButtonAction;
@property(nonatomic) long long currentAppearanceState; // @synthesize currentAppearanceState=_currentAppearanceState;
@property(copy, nonatomic) NSString *deeplinkCommentId; // @synthesize deeplinkCommentId=_deeplinkCommentId;
@property(nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) NSArray *typeAheadUsers; // @synthesize typeAheadUsers=_typeAheadUsers;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) LiveStream *liveStream; // @synthesize liveStream=_liveStream;
@property(nonatomic) __weak id <ChatPostPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void).cxx_destruct;
- (_Bool)shouldShowVotingNodeForComment:(id)arg1;
@property(readonly, nonatomic) long long collapsedCommentBehavior;
- (_Bool)isEmptyNodeCurrentlyDisplayed;
- (id)networkSourceParameters;
- (void)resetConnectionAlertTimer;
- (void)activateConnectionAlertTimer;
- (void)connectionAlertTimerFired:(id)arg1;
- (void)handleWebsocketStateChange:(long long)arg1;
- (void)reportConnectionEvent;
- (void)reconnectWebsocket;
- (void)configureLiveCommentSession;
- (id)websocketUrl;
- (void)messageWasReported:(id)arg1;
- (void)userWasBlocked:(id)arg1;
- (void)removeCommentFromDeletedCommentsCache:(id)arg1;
- (_Bool)isCommentInDeletedCommentsCache:(id)arg1;
- (void)cacheDeletedComment:(id)arg1;
- (void)downvoteComment:(id)arg1;
- (void)upvoteComment:(id)arg1;
- (void)didTapApproveWithComment:(id)arg1;
- (void)didTapRemoveWithComment:(id)arg1 asSpam:(_Bool)arg2;
- (void)didTapBlockWithComment:(id)arg1;
- (void)removeCommentTreeNode:(id)arg1;
- (void)deleteCommentTreeNode:(id)arg1;
- (void)didTapParentCommentWithComment:(id)arg1;
- (void)bucketDidTapWithBucket:(id)arg1;
- (void)deleteComment:(id)arg1 withFailureHandler:(CDUnknownBlockType)arg2;
- (void)insertComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)commentParser:(id)arg1 didReceiveUpdateCommentEventWithComment:(id)arg2;
- (void)commentParser:(id)arg1 didReceiveRemoveCommentEventWithPk:(id)arg2;
- (void)commentParser:(id)arg1 didReceiveDeleteCommentEventWithPk:(id)arg2;
- (void)commentParser:(id)arg1 didReceiveNewComment:(id)arg2;
@property(readonly, nonatomic) NSArray *objects;
- (void)sendChatMessage:(id)arg1 forParentComment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (_Bool)didReceiveNewMessageWhileDisconnected;
@property(readonly, nonatomic) _Bool enableAwards;
- (void)fetchBlockedUsersWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isFetching;
- (void)fetchData;
- (void)fetchDataForContext:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowRulesOnStartInput;
@property(readonly, nonatomic) _Bool shouldShowRulesOnView;
@property(readonly, nonatomic) _Bool shouldShowRules;
@property(readonly, nonatomic) _Bool shouldShowDownvote;
@property(readonly, nonatomic) _Bool shouldShowVotingInMessages;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithLiveStream:(id)arg1 accountContext:(id)arg2 networkManager:(id)arg3;
- (id)initWithPost:(id)arg1 accountContext:(id)arg2 networkManager:(id)arg3 deeplinkCommentId:(id)arg4;
- (void)updateTypeAheadUsersWithCellModels:(id)arg1;
- (id)sortCellModelByDateWithInitialCellModels:(id)arg1;
- (id)handleCommentsWithInitialCellModels:(id)arg1 users:(id)arg2 shouldSort:(_Bool)arg3;
- (id)lastCommentTreeNode;
- (void)sendLastCommentViewEventIfNeededFor:(id)arg1;
- (void)willDisplayComment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


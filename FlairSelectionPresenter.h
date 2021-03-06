//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlairSelectionViewControllerDelegate-Protocol.h"

@class NSArray, NSString, Post, Subreddit, User;
@protocol AccountContext, FlairProtocol, FlairSelectionPresentable, FlairSelectionSourceViewProtocol;

@interface FlairSelectionPresenter : NSObject <FlairSelectionViewControllerDelegate>
{
    _Bool _assignedFlairHasMatchingTemplate;
    _Bool _hasModFlairPermission;
    _Bool _isFlairShowing;
    _Bool _isFlairEnabled;
    _Bool _canUserChooseFlair;
    _Bool _isReadOnlyMode;
    _Bool _shouldShowDisabledState;
    _Bool _shouldDisplayShowMyFlairFooter;
    id <FlairSelectionPresentable> _presentable;
    id <FlairSelectionSourceViewProtocol> _sourceView;
    id <AccountContext> _accountContext;
    Subreddit *_subreddit;
    Post *_post;
    long long _flairType;
    NSArray *_flairs;
    NSArray *_filteredFlairs;
    User *_user;
    unsigned long long _modPermissions;
    NSObject<FlairProtocol> *_assignedFlair;
    NSObject<FlairProtocol> *_selectedFlair;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldDisplayShowMyFlairFooter; // @synthesize shouldDisplayShowMyFlairFooter=_shouldDisplayShowMyFlairFooter;
@property(nonatomic) _Bool shouldShowDisabledState; // @synthesize shouldShowDisabledState=_shouldShowDisabledState;
@property(nonatomic) _Bool isReadOnlyMode; // @synthesize isReadOnlyMode=_isReadOnlyMode;
@property(nonatomic) _Bool canUserChooseFlair; // @synthesize canUserChooseFlair=_canUserChooseFlair;
@property(nonatomic) _Bool isFlairEnabled; // @synthesize isFlairEnabled=_isFlairEnabled;
@property(nonatomic) _Bool isFlairShowing; // @synthesize isFlairShowing=_isFlairShowing;
@property(nonatomic) _Bool hasModFlairPermission; // @synthesize hasModFlairPermission=_hasModFlairPermission;
@property(nonatomic) _Bool assignedFlairHasMatchingTemplate; // @synthesize assignedFlairHasMatchingTemplate=_assignedFlairHasMatchingTemplate;
@property(copy, nonatomic) NSObject<FlairProtocol> *selectedFlair; // @synthesize selectedFlair=_selectedFlair;
@property(copy, nonatomic) NSObject<FlairProtocol> *assignedFlair; // @synthesize assignedFlair=_assignedFlair;
@property(nonatomic) unsigned long long modPermissions; // @synthesize modPermissions=_modPermissions;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(copy, nonatomic) NSArray *filteredFlairs; // @synthesize filteredFlairs=_filteredFlairs;
@property(copy, nonatomic) NSArray *flairs; // @synthesize flairs=_flairs;
@property(readonly, nonatomic) long long flairType; // @synthesize flairType=_flairType;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
@property(readonly, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak id <FlairSelectionSourceViewProtocol> sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) __weak id <FlairSelectionPresentable> presentable; // @synthesize presentable=_presentable;
- (id)eventForApplyFlair;
@property(readonly, nonatomic) NSString *analyticsPageType;
- (void)fetchModPermissionsForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getFlairsListWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchData;
- (void)flairSelectionView:(id)arg1 didSetAuthorFlairEnabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)flairSelectionView:(id)arg1 didSelectFlairWithCompletion:(CDUnknownBlockType)arg2;
- (void)processFlairData;
- (void)selectNewFlair:(id)arg1;
- (void)updateDataSourceWithEditedFlair:(id)arg1;
- (void)unfilterEditableFlairs;
- (void)filterEditableFlairs;
- (_Bool)didFlairChange;
- (_Bool)isUserMe;
- (void)resetFilteredFlairs;
- (void)filterFlairsWithSearchText:(id)arg1;
@property(readonly, nonatomic) NSString *pageTitle;
@property(readonly, nonatomic) _Bool shouldShowEmptyState;
@property(readonly, nonatomic) _Bool shouldShowFlairList;
@property(readonly, nonatomic) _Bool shouldAllowUndo;
- (id)initWithAccountContext:(id)arg1 currentAuthorFlair:(id)arg2 subreddit:(id)arg3 user:(id)arg4;
- (id)initWithAccountContext:(id)arg1 post:(id)arg2;
- (id)initWithAccountContext:(id)arg1 flairs:(id)arg2 currentFlair:(id)arg3 subreddit:(id)arg4;
- (id)initWithAccountContext:(id)arg1 subreddit:(id)arg2 post:(id)arg3 flairType:(long long)arg4 currentFlair:(id)arg5 user:(id)arg6 flairs:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


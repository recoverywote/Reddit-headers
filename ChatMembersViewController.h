//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BaseCollectionView, Channel, ContactActionSheetDelegate, NSArray, NSString, RedditService;
@protocol AccountContext;

@interface ChatMembersViewController : BaseViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BaseCollectionView *_collectionView;
    Channel *_channel;
    ContactActionSheetDelegate *_contactActionSheetDelegate;
    NSArray *_members;
    id <AccountContext> _accountContext;
}

@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(retain, nonatomic) ContactActionSheetDelegate *contactActionSheetDelegate; // @synthesize contactActionSheetDelegate=_contactActionSheetDelegate;
@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)trackAnalyticsEventWithAction:(id)arg1 noun:(id)arg2 reportedContact:(id)arg3 blockedContact:(id)arg4;
- (void)showContactActionSheetWithContact:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)contactForIndexPath:(id)arg1;
- (void)configureWithChannel:(id)arg1;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


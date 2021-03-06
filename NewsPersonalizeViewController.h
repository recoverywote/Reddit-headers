//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "NewsPersonalizeViewDataSource-Protocol.h"
#import "NewsPersonalizeViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BaseButton, BaseLabel, BaseTableView, BaseView, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSPredicate, NSString;
@protocol AccountContext, NewsPersonalizeViewControllerDelegate;

@interface NewsPersonalizeViewController : BaseViewController <NewsPersonalizeViewDelegate, NewsPersonalizeViewDataSource, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasUserModifiedTopicOrder;
    _Bool _hasUserPersonalizedNews;
    id <NewsPersonalizeViewControllerDelegate> _delegate;
    id <AccountContext> _accountContext;
    BaseTableView *_tableView;
    BaseView *_headerView;
    BaseButton *_doneButton;
    BaseButton *_reorderButton;
    BaseLabel *_titleLabel;
    NSOrderedSet *_newsTopics;
    NSMutableOrderedSet *_subscribedTopics;
    NSMutableSet *_subscribedSubtopics;
    NSOrderedSet *_pickModeTopics;
    NSMutableSet *_updatedTopics;
    NSMutableSet *_updatedSubTopics;
    NSMutableSet *_expandedTopics;
    NSPredicate *_removeAllTopicPredicate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSPredicate *removeAllTopicPredicate; // @synthesize removeAllTopicPredicate=_removeAllTopicPredicate;
@property(retain, nonatomic) NSMutableSet *expandedTopics; // @synthesize expandedTopics=_expandedTopics;
@property(retain, nonatomic) NSMutableSet *updatedSubTopics; // @synthesize updatedSubTopics=_updatedSubTopics;
@property(retain, nonatomic) NSMutableSet *updatedTopics; // @synthesize updatedTopics=_updatedTopics;
@property(copy, nonatomic) NSOrderedSet *pickModeTopics; // @synthesize pickModeTopics=_pickModeTopics;
@property(retain, nonatomic) NSMutableSet *subscribedSubtopics; // @synthesize subscribedSubtopics=_subscribedSubtopics;
@property(retain, nonatomic) NSMutableOrderedSet *subscribedTopics; // @synthesize subscribedTopics=_subscribedTopics;
@property(copy, nonatomic) NSOrderedSet *newsTopics; // @synthesize newsTopics=_newsTopics;
@property(nonatomic) _Bool hasUserPersonalizedNews; // @synthesize hasUserPersonalizedNews=_hasUserPersonalizedNews;
@property(nonatomic) _Bool hasUserModifiedTopicOrder; // @synthesize hasUserModifiedTopicOrder=_hasUserModifiedTopicOrder;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) BaseButton *reorderButton; // @synthesize reorderButton=_reorderButton;
@property(retain, nonatomic) BaseButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) BaseView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) BaseTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak id <NewsPersonalizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)newsTopicAtIndexPath:(id)arg1;
- (void)reorderSubscriptionListForTopic:(id)arg1;
- (void)recalculatePickModeTopics;
@property(readonly, nonatomic) _Bool hasUserModifiedSubscription;
- (void)updateReorderButtonForTopicSelectionChange;
- (void)updateDoneButtonForTopicSelectionChange;
- (void)updateControlsForTopicSelectionChange;
- (void)reloadCellWithNewsTopic:(id)arg1;
- (void)saveSubscriptionChangeForSubtopic:(id)arg1;
- (void)saveSubscriptionChangeForTopic:(id)arg1;
- (_Bool)newsPersonalizeIsSubscribedSubtopic:(id)arg1;
- (_Bool)newsPersonalizeIsSubscribedTopic:(id)arg1;
- (void)newsPersonalizeDidChangeSubscriptionForNewsSubtopic:(id)arg1 forNewsTopic:(id)arg2 view:(id)arg3;
- (void)newsPersonalizeDidChangeExpandState:(_Bool)arg1 forTopic:(id)arg2;
- (void)newsPersonalizeDidChangeSubscriptionForTopic:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didTapReorder:(id)arg1;
- (void)didTapDoneButton:(id)arg1;
- (void)didTapCloseButton:(id)arg1;
- (void)addHeaderBar;
- (void)configureViewAppearance;
- (void)addTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccountContext:(id)arg1 subscribedTopics:(id)arg2 subscribedSubtopics:(id)arg3 allTopics:(id)arg4 hasPersonalizedNews:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "CommunityViewDataSourceDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BaseSearchBar, BaseTableView, CommunityModeratingViewDataSource, NSArray, NSString;
@protocol AccountContext;

@interface ModQueueCommunitiesViewController : BaseViewController <CommunityViewDataSourceDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    _Bool _isSearching;
    id <AccountContext> _accountContext;
    BaseSearchBar *_searchBar;
    BaseTableView *_tableView;
    CommunityModeratingViewDataSource *_dataSource;
    CDUnknownBlockType _completionBlock;
    NSArray *_filteredSubreddits;
}

@property(retain, nonatomic) NSArray *filteredSubreddits; // @synthesize filteredSubreddits=_filteredSubreddits;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) CommunityModeratingViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) BaseTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) BaseSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void).cxx_destruct;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)communityViewDataSourceDidUpdate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)subredditsWithFilter:(id)arg1;
- (void)fetchData;
- (void)didTapCloseButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAccountContext:(id)arg1 selectionCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


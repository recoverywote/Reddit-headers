//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTableViewController.h"

@class NSString;
@protocol _TtP6Reddit30ModToolsViewControllerDelegate_;

@interface _TtC6Reddit22ModToolsViewController : BaseTableViewController
{
    // Error parsing type: , name: service
    // Error parsing type: , name: subreddit
    // Error parsing type: , name: analyticsManager
    // Error parsing type: , name: modToolsConfig
    // Error parsing type: , name: communityTagsFetcher
    // Error parsing type: , name: delegate
    // Error parsing type: , name: primaryTag
    // Error parsing type: , name: $__lazy_storage_$_navigator
    // Error parsing type: , name: footerLabel
    // Error parsing type: , name: $__lazy_storage_$_layout
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (id)screenViewAnalyticsEvent;
@property(nonatomic, readonly) NSString *analyticsScreenViewName;
@property(nonatomic, readonly) NSString *analyticsPageType;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1 analyticsManager:(id)arg2 subreddit:(id)arg3 modToolsConfig:(id)arg4;
@property(nonatomic) __weak id <_TtP6Reddit30ModToolsViewControllerDelegate_> delegate; // @synthesize delegate;

@end


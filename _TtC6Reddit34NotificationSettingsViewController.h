//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTableViewController.h"

@interface _TtC6Reddit34NotificationSettingsViewController : BaseTableViewController
{
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: settings
    // Error parsing type: , name: firstLoadSpinner
    // Error parsing type: , name: notificationsDisabledView
    // Error parsing type: , name: headerHeight
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (void)goToDeviceSettings:(id)arg1;
- (void)toggleNotificationSetting:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)fetchData;
- (void)applicationDidBecomeActive:(id)arg1;
@property(nonatomic, readonly) struct UIEdgeInsets preferredContentInset;
- (void)viewDidLoad;
- (id)initWithAccountContext:(id)arg1;

@end


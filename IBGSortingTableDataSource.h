//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/UITableViewDataSource-Protocol.h>
#import <Instabug/UITableViewDelegate-Protocol.h>

@class NSString;
@protocol IBGFeatureSortingTableViewDelegate;

@interface IBGSortingTableDataSource : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    long long _type;
    id <IBGFeatureSortingTableViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IBGFeatureSortingTableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)stringFromEnum:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableViewHeight;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


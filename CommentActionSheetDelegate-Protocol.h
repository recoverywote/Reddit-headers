//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CommentActionSheetViewController;

@protocol CommentActionSheetDelegate <NSObject>
- (void)commentActionSheetViewControllerDidReportComment:(CommentActionSheetViewController *)arg1;
- (void)commentActionSheetViewControllerCollapseToRoot:(CommentActionSheetViewController *)arg1;
- (void)commentActionSheetViewControllerDidReplyToComment:(CommentActionSheetViewController *)arg1;
- (void)commentActionSheetViewControllerDidDeletePost:(CommentActionSheetViewController *)arg1;
- (void)commentActionSheetViewControllerDidDeleteComment:(CommentActionSheetViewController *)arg1;
@end


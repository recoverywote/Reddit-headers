//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSString, NSUUID;

@interface _TtC6Reddit26RedditCinemaViewController : BaseViewController
{
    // Error parsing type: , name: correlationId
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: service
    // Error parsing type: , name: sourcePost
    // Error parsing type: , name: feedPostOptions
    // Error parsing type: , name: videoContext
    // Error parsing type: , name: commands
    // Error parsing type: , name: collectionNode
    // Error parsing type: , name: diffingAdapter
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: previousMedia
    // Error parsing type: , name: feedbackGenerator
    // Error parsing type: , name: isMuted
}

- (void).cxx_destruct;
- (id)init;
- (id)screenViewAnalyticsEvent;
- (void)didBlockUser:(id)arg1;
- (void)didUpdateNSFWSettings;
- (void)didHideItem;
- (void)addNotifications;
- (void)viewDidLoad;
- (id)initWithAccountContext:(id)arg1 post:(id)arg2 subredditSeedIdentifier:(id)arg3 videoContext:(id)arg4 previousMedia:(id)arg5;
@property(nonatomic, readonly) NSString *analyticsPageType;
@property(nonatomic, readonly) NSUUID *correlationId;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

@protocol _TtP6Reddit33MetaLandingViewControllerDelegate_;

@interface _TtC6Reddit25MetaLandingViewController : BaseViewController
{
    // Error parsing type: , name: service
    // Error parsing type: , name: presenter
    // Error parsing type: , name: buyImmediately
    // Error parsing type: , name: delegate
    // Error parsing type: , name: $__lazy_storage_$_closeButton
    // Error parsing type: , name: contentView
    // Error parsing type: , name: contentViewConstraints
}

- (void).cxx_destruct;
- (id)init;
- (void)didTapCloseButton:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSubredditId:(id)arg1 service:(id)arg2 correlationID:(id)arg3 buyImmediately:(_Bool)arg4;
- (id)initWithSubredditName:(id)arg1 service:(id)arg2 correlationID:(id)arg3;
@property(nonatomic) __weak id <_TtP6Reddit33MetaLandingViewControllerDelegate_> delegate; // @synthesize delegate;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSString, SubredditMention;
@protocol _TtP6Reddit44SubredditMentionUpsellViewControllerDelegate_;

@interface _TtC6Reddit36SubredditMentionUpsellViewController : BaseViewController
{
    // Error parsing type: , name: subredditMention
    // Error parsing type: , name: analyticsManager
    // Error parsing type: , name: copySet
    // Error parsing type: , name: delegate
    // Error parsing type: , name: headerView
    // Error parsing type: , name: subtextView
    // Error parsing type: , name: stackView
    // Error parsing type: , name: contentView
    // Error parsing type: , name: buttonsView
    // Error parsing type: , name: continueButton
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: iconView
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *analyticsScreenViewName;
@property(nonatomic, readonly) NSString *analyticsPageType;
- (void)didTapCancel;
- (void)didTapContinue;
- (void)viewDidLoad;
- (void)configureViewAppearance;
- (void)loadView;
- (id)initWithSubredditMention:(id)arg1 analyticsManager:(id)arg2;
@property(nonatomic, retain) id <_TtP6Reddit44SubredditMentionUpsellViewControllerDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) SubredditMention *subredditMention; // @synthesize subredditMention;

@end


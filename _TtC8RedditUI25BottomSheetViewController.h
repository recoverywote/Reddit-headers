//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <RedditUI/_TtP8RedditUI21ActionSheetAnimatable_-Protocol.h>

@class BaseControl, BaseView;
@protocol _TtP8RedditUI33BottomSheetViewControllerDelegate_;

@interface _TtC8RedditUI25BottomSheetViewController : UIViewController <_TtP8RedditUI21ActionSheetAnimatable_>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: topAnchorConstraint
    // Error parsing type: , name: child
    // Error parsing type: , name: isFullSheet
    // Error parsing type: , name: contentView
    // Error parsing type: , name: dimmerView
    // Error parsing type: , name: contentHeight
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithChild:(id)arg1 initialHeight:(double)arg2 isFullSheet:(_Bool)arg3;
- (id)initWithChild:(id)arg1 isFullSheet:(_Bool)arg2;
@property(nonatomic) double contentHeight; // @synthesize contentHeight;
@property(nonatomic, retain) BaseControl *dimmerView; // @synthesize dimmerView;
@property(nonatomic, retain) BaseView *contentView; // @synthesize contentView;
@property(nonatomic) __weak id <_TtP8RedditUI33BottomSheetViewControllerDelegate_> delegate; // @synthesize delegate;

@end

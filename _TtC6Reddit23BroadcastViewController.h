//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface _TtC6Reddit23BroadcastViewController : UIViewController
{
    // Error parsing type: , name: presenter
    // Error parsing type: , name: hkView
    // Error parsing type: , name: maskView
    // Error parsing type: , name: backButton
    // Error parsing type: , name: titleTextView
    // Error parsing type: , name: centerLabel
    // Error parsing type: , name: broadcastingView
    // Error parsing type: , name: enabledAlpha
    // Error parsing type: , name: disabledAlpha
    // Error parsing type: , name: didShowFirstTimeBroadcastModal
    // Error parsing type: , name: isTuning
    // Error parsing type: , name: theme
    // Error parsing type: , name: isBroadcasterUIRefreshEnabled
    // Error parsing type: , name: promptViewController
    // Error parsing type: , name: isPromptEnabled
    // Error parsing type: , name: isPromptVisible
    // Error parsing type: , name: chatVC
    // Error parsing type: , name: chatPresenter
    // Error parsing type: , name: awardsAnimator
    // Error parsing type: , name: awardAnnouncementView
    // Error parsing type: , name: continueButton
    // Error parsing type: , name: subredditPickerButtonV2
    // Error parsing type: , name: goLiveButton
    // Error parsing type: , name: timeRemainingButton
    // Error parsing type: , name: sideBar
    // Error parsing type: , name: timeRemainingFormatter
    // Error parsing type: , name: saveButton
    // Error parsing type: , name: subredditButtonLabel
    // Error parsing type: , name: buttonArea
    // Error parsing type: , name: buttonHeight
    // Error parsing type: , name: endButton
    // Error parsing type: , name: flipButton
    // Error parsing type: , name: chatButton
    // Error parsing type: , name: chatRedDot
    // Error parsing type: , name: shareButton
    // Error parsing type: , name: muteButton
    // Error parsing type: , name: meterOverlay
    // Error parsing type: , name: hasMeter
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didTapEnd:(id)arg1;
- (void)didTapFlipButton:(id)arg1;
- (void)didTapMuteButton:(id)arg1;
- (void)didTapChatButton:(id)arg1;
- (void)didTapShare:(id)arg1;
- (void)didTapStart:(id)arg1;
- (void)saveTitle;
- (void)didTapBack:(id)arg1;
- (void)didPinchVideoWithGesture:(id)arg1;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresenter:(id)arg1;

@end

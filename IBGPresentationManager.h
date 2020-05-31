//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGMainWindow, IBGOperation, NSMutableArray, UIView;

@interface IBGPresentationManager : NSObject
{
    _Bool _SDKPresent;
    IBGMainWindow *_window;
    long long _windowLevel;
    IBGOperation *_initializationOperation;
    NSMutableArray *_delegates;
    UIView *_userFirstResponderView;
}

+ (void)destroy;
+ (long long)getLevelsIBGAlertBehindUIAlert;
+ (id)getInstance;
@property(retain, nonatomic) UIView *userFirstResponderView; // @synthesize userFirstResponderView=_userFirstResponderView;
@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) _Bool SDKPresent; // @synthesize SDKPresent=_SDKPresent;
@property(retain, nonatomic) IBGOperation *initializationOperation; // @synthesize initializationOperation=_initializationOperation;
@property(nonatomic) long long windowLevel; // @synthesize windowLevel=_windowLevel;
- (void).cxx_destruct;
- (void)notifyOtherDelegatesOfPresenting:(id)arg1;
- (void)notifyOtherDelegatesOfDimiss:(id)arg1;
- (void)presentViewOnNavaigationController:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentNavigationControllerWithViewController:(id)arg1 animated:(_Bool)arg2 transitionDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentNavigationControllerWithViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)nativeSharePresent;
- (void)dismissKeyboard;
- (void)captureFirstResponderView;
- (void)closeAndCleanUpAllViews;
- (long long)getWindowLevel;
- (void)restoreMainWindow;
- (void)minimizeMainWindow;
- (void)minimizeWithReportType:(long long)arg1 andDismissType:(long long)arg2;
- (void)dismissSDKWithExtraParameters:(id)arg1;
- (void)dismissWithReportType:(long long)arg1 andDismissType:(long long)arg2;
- (void)popViewControllerWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setRootViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 withFadeAnimation:(_Bool)arg3;
- (void)setSDKPresent:(_Bool)arg1;
- (id)lowDiskStorageAlert;
- (void)checkLowDiskStorage;
- (CDUnknownBlockType)didDismissWelcomeMessageHandler;
- (void)setDidDismissWelcomeMessageHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)didSelectPromptOptionHandler;
- (void)setDidSelectPromptOptionHandler:(CDUnknownBlockType)arg1;
- (id)popDelegate;
- (id)currentDelegate;
- (void)addDelegate:(id)arg1;
@property(readonly, nonatomic) IBGMainWindow *currentWindow;
@property(retain, nonatomic) IBGMainWindow *window; // @synthesize window=_window;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGInvocationBase-Protocol.h>
#import <Instabug/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol IBGInvocationBaseDelegate;

@interface IBGInvocationRightEdgePan : NSObject <UIGestureRecognizerDelegate, IBGInvocationBase>
{
    _Bool isInstalled;
    float _delay;
    id <IBGInvocationBaseDelegate> _delegate;
    NSMutableArray *_gestureRecognizers;
}

@property(nonatomic) float delay; // @synthesize delay=_delay;
@property(retain, nonatomic) NSMutableArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(nonatomic) _Bool isInstalled; // @synthesize isInstalled;
@property(nonatomic) __weak id <IBGInvocationBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)invoke;
- (void)uninstall;
- (void)refresh;
- (id)getApplicationWindows;
- (unsigned long long)properEdgesForCurrentOrientationWithRTL:(_Bool)arg1;
- (_Bool)isRTLPopGestureRecognizerNavigationContoler:(id)arg1;
- (void)performInstall;
- (void)install;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


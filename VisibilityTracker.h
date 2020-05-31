//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VisibilitySignalReceiver-Protocol.h"

@class NSMutableDictionary, NSString, VisibilityOptions;
@protocol VisibilitySignaler;

@interface VisibilityTracker : NSObject <VisibilitySignalReceiver>
{
    id <VisibilitySignaler> _visibilitySignaler;
    NSMutableDictionary *_allViews;
    NSMutableDictionary *_viewsToTrack;
    VisibilityOptions *_defaultOptions;
}

+ (id)instance;
@property(retain, nonatomic) VisibilityOptions *defaultOptions; // @synthesize defaultOptions=_defaultOptions;
@property(retain, nonatomic) NSMutableDictionary *viewsToTrack; // @synthesize viewsToTrack=_viewsToTrack;
@property(retain, nonatomic) NSMutableDictionary *allViews; // @synthesize allViews=_allViews;
@property(retain, nonatomic) id <VisibilitySignaler> visibilitySignaler; // @synthesize visibilitySignaler=_visibilitySignaler;
- (void).cxx_destruct;
- (void)didReceiveSignalFromVisibilitySignaler:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateViewsToTrack;
- (void)queueViewsToTrackWithCompletion:(CDUnknownBlockType)arg1;
- (void)trackVisibilityWithVisibilityModel:(id)arg1;
- (void)processImpressionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetTrackingViewWithIdentifier:(id)arg1;
- (void)stopTrackingViewWithIdentifier:(id)arg1;
- (void)stopTrackingView:(id)arg1;
- (void)startTrackingView:(id)arg1 target:(id)arg2 action:(SEL)arg3 forEvents:(unsigned long long)arg4 visibleThreshold:(double)arg5 minimumDuration:(double)arg6 options:(id)arg7 withIdentifier:(id)arg8;
- (void)startTrackingView:(id)arg1 target:(id)arg2 action:(SEL)arg3 forEvents:(unsigned long long)arg4 visibleThreshold:(double)arg5 minimumDuration:(double)arg6 options:(id)arg7;
- (void)startTrackingView:(id)arg1 visibilityTrackable:(id)arg2 visibilityOptions:(id)arg3 withIdentifier:(id)arg4;
- (void)startTrackingView:(id)arg1 visibilityTrackable:(id)arg2 visibilityOptions:(id)arg3;
- (void)startTrackingView:(id)arg1 visibilityTrackable:(id)arg2;
- (id)initWithVisibilitySignaler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


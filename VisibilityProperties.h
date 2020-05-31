//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface VisibilityProperties : NSObject
{
    _Bool _enteredState;
    NSObject *_target;
    SEL _action;
    double _visibleThreshold;
    double _minimumDuration;
    unsigned long long _eventToFireAt;
    NSDate *_timeEnteredVisibilityState;
    double _timeIntervalEnteredVisibilityThreshold;
    double _timeIntervalEnteredVisibilityState;
    double _timeIntervalVisibilityStateDuration;
}

+ (id)identifierForTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic) double timeIntervalVisibilityStateDuration; // @synthesize timeIntervalVisibilityStateDuration=_timeIntervalVisibilityStateDuration;
@property(nonatomic) double timeIntervalEnteredVisibilityState; // @synthesize timeIntervalEnteredVisibilityState=_timeIntervalEnteredVisibilityState;
@property(nonatomic) double timeIntervalEnteredVisibilityThreshold; // @synthesize timeIntervalEnteredVisibilityThreshold=_timeIntervalEnteredVisibilityThreshold;
@property(retain, nonatomic) NSDate *timeEnteredVisibilityState; // @synthesize timeEnteredVisibilityState=_timeEnteredVisibilityState;
@property(nonatomic) _Bool enteredState; // @synthesize enteredState=_enteredState;
@property(nonatomic) unsigned long long eventToFireAt; // @synthesize eventToFireAt=_eventToFireAt;
@property(nonatomic) double minimumDuration; // @synthesize minimumDuration=_minimumDuration;
@property(nonatomic) double visibleThreshold; // @synthesize visibleThreshold=_visibleThreshold;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak NSObject *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)resetVisibilityEnterTimeIntervals;
- (void)resetVisibleState;
@property(readonly, nonatomic) NSDate *timeExitedVisibilityState;

@end


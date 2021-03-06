//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASCellNode.h>

#import "RUICellVisibility-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"
#import "VisibilityTrackable-Protocol.h"

@class NSArray, NSString, VisibilityOptions, VisibilityTracker;

@interface BaseCollectionViewCellNode : ASCellNode <RUIThemeUpdateCallbackProtocol, RUICellVisibility, VisibilityTrackable>
{
    _Bool _fullyVisible;
    _Bool _isPastVisibilityThreshold;
    VisibilityTracker *_visibilityTracker;
    VisibilityOptions *_visibilityOptions;
    NSArray *_previousThemeInfo;
}

+ (id)currentThemeInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *previousThemeInfo; // @synthesize previousThemeInfo=_previousThemeInfo;
@property(copy, nonatomic) VisibilityOptions *visibilityOptions; // @synthesize visibilityOptions=_visibilityOptions;
@property(retain, nonatomic) VisibilityTracker *visibilityTracker; // @synthesize visibilityTracker=_visibilityTracker;
@property(nonatomic) _Bool isPastVisibilityThreshold; // @synthesize isPastVisibilityThreshold=_isPastVisibilityThreshold;
@property(nonatomic) _Bool fullyVisible; // @synthesize fullyVisible=_fullyVisible;
- (void)didExitVisibleStateWithVisibilityContext:(id)arg1;
- (void)didEnterVisibleStateWithVisibilityContext:(id)arg1;
- (void)didExitVisibleThresholdStateWithVisibilityContext:(id)arg1;
- (void)didExitFullyVisibleStateWithVisibilityContext:(id)arg1;
- (void)didEnterVisibleThresholdStateWithVisibilityContext:(id)arg1;
- (void)didEnterFullyVisibleStateWithVisibilityContext:(id)arg1;
- (void)endVisibilityTracking;
- (void)beginVisibilityTracking;
- (void)updateChildrenThemeProperty;
- (void)didEndDisplayingCell;
- (void)willBeginDisplayingCell;
- (void)noLongerFullyVisible;
- (void)didBecomeFullyVisible;
- (void)noLongerPastVisibilityThreshold;
- (void)didPassVisibilityThreshold;
- (double)visibilityThreshold;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)didExitHierarchy;
- (void)didEnterHierarchy;
- (void)didExitDisplayState;
- (void)didEnterDisplayState;
- (id)initWithVisibilityTracker:(id)arg1 visibilityOptions:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


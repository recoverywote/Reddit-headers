//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class ASImageNode, NSMutableDictionary;

@interface ASControlNode : ASDisplayNode
{
    _Bool _enabled;
    _Bool _highlighted;
    _Bool _tracking;
    _Bool _touchInside;
    NSMutableDictionary *_controlEventDispatchTable;
    ASImageNode *_debugHighlightOverlay;
    _Bool _selected;
}

+ (_Bool)enableHitTestDebug;
+ (void)setEnableHitTestDebug:(_Bool)arg1;
@property(getter=isTouchInside) _Bool touchInside; // @synthesize touchInside=_touchInside;
@property(getter=isTracking) _Bool tracking; // @synthesize tracking=_tracking;
@property(getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)debugHighlightOverlay;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)sendActionsForControlEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)allTargets;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (_Bool)supportsLayerBacking;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_cancelTrackingWithEvent:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)__exitHierarchy;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (id)init;
- (void)drawEdgeIfClippedWithEdges:(unsigned long long)arg1 color:(id)arg2 borderWidth:(double)arg3 imgRect:(struct CGRect)arg4;
- (unsigned long long)setEdgesOfIntersectionForChildRect:(struct CGRect)arg1 parentRect:(struct CGRect)arg2 rectEdge:(unsigned long long)arg3;
- (void)layout;

@end


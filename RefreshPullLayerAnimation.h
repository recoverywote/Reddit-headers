//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CABasicAnimation, CALayer, CAShapeLayer, UIColor;

@interface RefreshPullLayerAnimation : NSObject
{
    _Bool _isFinishingAnimation;
    UIColor *_tintColor;
    double _progressPercentage;
    CABasicAnimation *_rotateAnimation;
    CALayer *_planetsLayer;
    CALayer *_planeLayer;
    CAShapeLayer *_orbit1Layer;
    CAShapeLayer *_orbit2Layer;
    CALayer *_planet1Layer;
    CALayer *_planet2Layer;
}

@property(retain, nonatomic) CALayer *planet2Layer; // @synthesize planet2Layer=_planet2Layer;
@property(retain, nonatomic) CALayer *planet1Layer; // @synthesize planet1Layer=_planet1Layer;
@property(retain, nonatomic) CAShapeLayer *orbit2Layer; // @synthesize orbit2Layer=_orbit2Layer;
@property(retain, nonatomic) CAShapeLayer *orbit1Layer; // @synthesize orbit1Layer=_orbit1Layer;
@property(retain, nonatomic) CALayer *planeLayer; // @synthesize planeLayer=_planeLayer;
@property(retain, nonatomic) CALayer *planetsLayer; // @synthesize planetsLayer=_planetsLayer;
@property(retain, nonatomic) CABasicAnimation *rotateAnimation; // @synthesize rotateAnimation=_rotateAnimation;
@property(nonatomic) _Bool isFinishingAnimation; // @synthesize isFinishingAnimation=_isFinishingAnimation;
@property(nonatomic) double progressPercentage; // @synthesize progressPercentage=_progressPercentage;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (id)circlePathForRadius:(double)arg1;
- (id)createCircleWith:(double)arg1 color:(id)arg2;
- (id)orbitPlanet:(double)arg1 angle:(double)arg2 layer:(id)arg3 size:(struct CGSize)arg4 planetDiameter:(double)arg5 tintColor:(id)arg6;
- (void)configureAnimationInLayer:(id)arg1 tintColor:(id)arg2;
@property(readonly, nonatomic) _Bool isConfigured;
- (void)destroyInLayer:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGRectControlPoints.h>

@class IBGAnnotationView, IBGControlPointView;

@interface IBGAspectRatioRectControlPoints : IBGRectControlPoints
{
    IBGAnnotationView *_annotationView;
    IBGControlPointView *_topLeftView;
    IBGControlPointView *_topRightView;
    IBGControlPointView *_bottomLeftView;
    IBGControlPointView *_bottomRightView;
    double _initialDistance;
    struct CGPoint _initialCenter;
    struct CGRect _initialFrame;
}

@property(nonatomic) struct CGPoint initialCenter; // @synthesize initialCenter=_initialCenter;
@property(nonatomic) double initialDistance; // @synthesize initialDistance=_initialDistance;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property(retain, nonatomic) IBGControlPointView *bottomRightView; // @synthesize bottomRightView=_bottomRightView;
@property(retain, nonatomic) IBGControlPointView *bottomLeftView; // @synthesize bottomLeftView=_bottomLeftView;
@property(retain, nonatomic) IBGControlPointView *topRightView; // @synthesize topRightView=_topRightView;
@property(retain, nonatomic) IBGControlPointView *topLeftView; // @synthesize topLeftView=_topLeftView;
@property(nonatomic) __weak IBGAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (void).cxx_destruct;
- (void)handlePanGesture:(id)arg1;
- (void)updateControlPoints;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Lottie/LOTAnimatorNode.h>

@class LOTNumberInterpolator;

@interface LOTTrimPathNode : LOTAnimatorNode
{
    LOTNumberInterpolator *_startInterpolator;
    LOTNumberInterpolator *_endInterpolator;
    LOTNumberInterpolator *_offsetInterpolator;
    double _startT;
    double _endT;
    double _offsetT;
}

- (void).cxx_destruct;
- (id)outputPath;
- (id)localPath;
- (void)rebuildOutputs;
- (void)performLocalUpdate;
- (_Bool)updateWithFrame:(id)arg1 withModifierBlock:(CDUnknownBlockType)arg2 forceLocalUpdate:(_Bool)arg3;
- (_Bool)needsUpdateForFrame:(id)arg1;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg1 trimPath:(id)arg2;

@end


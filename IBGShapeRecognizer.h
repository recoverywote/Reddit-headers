//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGShapeRecognitionEngine;

@interface IBGShapeRecognizer : NSObject
{
    IBGShapeRecognitionEngine *_recgonizingEngine;
}

@property(retain, nonatomic) IBGShapeRecognitionEngine *recgonizingEngine; // @synthesize recgonizingEngine=_recgonizingEngine;
- (void).cxx_destruct;
- (void)recognizeDrawing:(id)arg1 points:(id)arg2 withReturnBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end


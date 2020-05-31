//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGAnnotationMemento, IBGAnnotationView;

@interface IBGAnnotationCommand : NSObject
{
    IBGAnnotationView *_annotationView;
    IBGAnnotationMemento *_previousState;
    IBGAnnotationMemento *_currentState;
}

@property(retain, nonatomic) IBGAnnotationMemento *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) IBGAnnotationMemento *previousState; // @synthesize previousState=_previousState;
@property(nonatomic) __weak IBGAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (void).cxx_destruct;
- (id)description;
- (void)unexecute;
- (void)execute;
- (id)initWithAnnotationView:(id)arg1 previousState:(id)arg2 currentState:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface IBGIntializationManager : NSObject
{
    NSOperationQueue *_queue;
}

+ (id)getInstance;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)addOperations:(id)arg1;
- (void)addOperationBlock:(CDUnknownBlockType)arg1;
- (void)addOperation:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Award, NSString;

@interface _TtC6Reddit19AwardSelectionState : NSObject
{
    // Error parsing type: , name: selectedAward
    // Error parsing type: , name: isAnonymous
    // Error parsing type: , name: isProcessing
    // Error parsing type: , name: message
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *message;
@property(nonatomic) _Bool isProcessing; // @synthesize isProcessing;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous;
@property(nonatomic, retain) Award *selectedAward; // @synthesize selectedAward;

@end


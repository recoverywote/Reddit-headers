//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface IBGVisualUserStepsLog : NSObject
{
    NSString *_parentScreenIdentifier;
    NSString *_screenshotIdentifier;
    NSString *_screenIdentifier;
    NSString *_screenName;
    NSNumber *_timeEpoch;
    NSString *_view;
    NSString *_eventType;
}

@property(copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSString *view; // @synthesize view=_view;
@property(copy, nonatomic) NSNumber *timeEpoch; // @synthesize timeEpoch=_timeEpoch;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(copy, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
@property(copy, nonatomic) NSString *screenshotIdentifier; // @synthesize screenshotIdentifier=_screenshotIdentifier;
@property(copy, nonatomic) NSString *parentScreenIdentifier; // @synthesize parentScreenIdentifier=_parentScreenIdentifier;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithScreenName:(id)arg1 eventType:(id)arg2 view:(id)arg3;

@end


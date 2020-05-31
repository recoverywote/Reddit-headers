//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SubredditRule : NSObject
{
    NSString *_shortName;
    NSString *_fullDescription;
    NSString *_violationReason;
    NSDate *_creationDate;
    long long _priority;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *violationReason; // @synthesize violationReason=_violationReason;
@property(retain, nonatomic) NSString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(retain, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SubredditCalendarWidgetEvent : NSObject
{
    _Bool _isAllDay;
    NSString *_title;
    NSString *_descriptionText;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isAllDay; // @synthesize isAllDay=_isAllDay;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end


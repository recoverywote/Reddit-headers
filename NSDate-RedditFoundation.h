//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (RedditFoundation)
+ (long long)red_numberOfCalendarMinutesBetweenDate:(id)arg1 andDate:(id)arg2;
- (_Bool)red_isBeforeDate:(id)arg1;
- (_Bool)red_isAfterDate:(id)arg1;
- (id)red_dateByAddingDays:(long long)arg1;
- (long long)red_numberOfCalendarDaysToDate:(id)arg1;
- (_Bool)red_isSameMonthAndDayAsDate:(id)arg1;
@property(readonly, nonatomic) _Bool red_isSameMonthAndDayAsToday;
@property(readonly, nonatomic) long long red_millisecondsSince1970;
@end


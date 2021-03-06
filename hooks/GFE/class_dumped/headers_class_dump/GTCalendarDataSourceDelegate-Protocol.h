//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class CalendarEventDetail, CalendarOccurrence, NSArray, NSDate;

@protocol GTCalendarDataSourceDelegate <NSObject>
- (NSArray *)getCalendarOccurrencesForCalendarEventWithId:(unsigned int)arg1 startDate:(NSDate *)arg2 toEndDate:(NSDate *)arg3;
- (CalendarEventDetail *)getCalendarEventDetailWithCalendarOccurrence:(CalendarOccurrence *)arg1;
- (NSArray *)getCalendarOccurrencesFromStartDate:(NSDate *)arg1 toEndDate:(NSDate *)arg2 lazy:(BOOL)arg3;
@end


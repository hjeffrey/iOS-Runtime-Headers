/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKTimeZone;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _dateGr;
    double _dateAbs;
    EKTimeZone *_timeZone;
    unsigned int _flags;
}

+ (id)calendarDateWithDateComponents:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithGregorianDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(id)arg2;
+ (id)calendarDateWithDate:(id)arg1 timeZone:(id)arg2;

- (id)components;
- (unsigned int)dayOfYear;
- (unsigned int)dayOfWeek;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)secondsFromGMT;
- (id)calendarDateForYear;
- (id)calendarDateForEndOfMonth;
- (id)calendarDateForMonth;
- (id)calendarDateForEndOfWeekWithWeekStart:(unsigned int)arg1;
- (id)calendarDateForWeekWithWeekStart:(unsigned int)arg1;
- (id)calendarDateForEndOfDay;
- (unsigned int)weeksInYear;
- (unsigned int)daysInYear;
- (int)differenceInDays:(id)arg1;
- (int)differenceInMonths:(id)arg1;
- (int)differenceInYears:(id)arg1;
- (id)calendarDateWithDate:(id)arg1;
- (id)calendarDateInTimeZone:(id)arg1;
- (id)calendarDateByAddingWeeks:(int)arg1;
- (id)initWithAbsoluteTime:(double)arg1 internalTimeZone:(id)arg2;
- (unsigned int)daysInMonth;
- (id)calendarDateForWeekWithWeekStart:(unsigned int)arg1 daysSinceWeekStart:(int*)arg2;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })differenceAsGregorianUnits:(id)arg1 flags:(unsigned long)arg2;
- (id)initWithGregorianDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 internalTimeZone:(id)arg2;
- (id)initWithDateComponents:(id)arg1 timeZone:(id)arg2;
- (id)initWithGregorianDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(id)arg2;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;
- (id)initWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
- (id)calendarDateByAddingDays:(int)arg1;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })gregorianDate;
- (double)absoluteTime;
- (id)calendarDateByAddingGregorianUnits:(struct { int x1; int x2; int x3; int x4; int x5; double x6; })arg1;
- (id)calendarDateForDay;
- (id)earlierDate:(id)arg1;
- (id)laterDate:(id)arg1;
- (unsigned int)weekOfYear;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)month;
- (unsigned int)year;
- (unsigned int)day;
- (double)second;
- (unsigned int)minute;
- (unsigned int)hour;
- (int)compare:(id)arg1;
- (id)timeZone;
- (id)date;

@end

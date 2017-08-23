//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABtestPoint, NSString;

@interface ABtestPointPeriod : NSObject
{
    unsigned long long checkID;
    struct timeval tvStart;
    NSString *actionResult;
    NSString *clientID;
    unsigned long long serialNum;
    unsigned long long actionResultScene;
    _Bool hasEnd;
    _Bool hasStart;
    ABtestPoint *_testPoint;
}

@property(retain, nonatomic) ABtestPoint *testPoint; // @synthesize testPoint=_testPoint;
- (void).cxx_destruct;
- (id)getValue;
- (void)setCheckID:(unsigned long long)arg1;
- (void)setActionResultScene:(unsigned long long)arg1;
- (void)setActionResult:(id)arg1;
- (void)dealloc;
- (void)setEnd;
- (void)setStart;
- (void)report;
- (id)genClickStreamReport;
- (id)genReportString:(id)arg1 time:(id)arg2;
- (id)initWithTestPoint:(id)arg1 serialNum:(unsigned long long)arg2;

@end


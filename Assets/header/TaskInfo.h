//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface TaskInfo : MMObject
{
    _Bool _bIsPresented;
    double taskAddTime;
    NSString *taskKey;
}

@property(nonatomic) _Bool bIsPresented; // @synthesize bIsPresented=_bIsPresented;
@property(retain, nonatomic) NSString *taskKey; // @synthesize taskKey;
@property(nonatomic) double taskAddTime; // @synthesize taskAddTime;
- (void).cxx_destruct;

@end


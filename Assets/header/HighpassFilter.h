//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AccelerometerFilter.h"

@interface HighpassFilter : AccelerometerFilter
{
    double lastX;
    double lastY;
    double lastZ;
    _Bool hasXCrash;
    _Bool hasYCrash;
    _Bool hasZCrash;
    int xCountDown;
    int yCountDown;
    int zCountDown;
}

- (_Bool)addAccelerationByX:(double)arg1 Y:(double)arg2 Z:(double)arg3;

@end


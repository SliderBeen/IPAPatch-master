//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ResourceInfo : NSObject
{
    double _virtualMemorySize;
    double _residentMemorySize;
    long long _currentCap;
    float _cpuUsage;
}

@property(nonatomic) float _cpuUsage; // @synthesize _cpuUsage;
@property(nonatomic) long long _currentCap; // @synthesize _currentCap;
@property(nonatomic) double residentMemorySize; // @synthesize residentMemorySize=_residentMemorySize;
@property(nonatomic) double virtualMemorySize; // @synthesize virtualMemorySize=_virtualMemorySize;
- (id)init;

@end


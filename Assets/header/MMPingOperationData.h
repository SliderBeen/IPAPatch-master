//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMPingOperationData : NSObject
{
    int _status;
    NSString *_destinationComputer;
    double _pingDuration;
}

@property(nonatomic) double pingDuration; // @synthesize pingDuration=_pingDuration;
@property(copy, nonatomic) NSString *destinationComputer; // @synthesize destinationComputer=_destinationComputer;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;

@end


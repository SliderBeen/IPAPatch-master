//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCADVideoPlayInfo : NSObject
{
    int playCount;
    unsigned long long startPlayTime;
    unsigned long long endPlayTime;
    unsigned long long playTotalTime;
    unsigned long long videoTotalTime;
    int playMode;
    int playOrientation;
}

@property(nonatomic) int playOrientation; // @synthesize playOrientation;
@property(nonatomic) int playMode; // @synthesize playMode;
@property(nonatomic) unsigned long long videoTotalTime; // @synthesize videoTotalTime;
@property(nonatomic) unsigned long long playTotalTime; // @synthesize playTotalTime;
@property(nonatomic) unsigned long long endPlayTime; // @synthesize endPlayTime;
@property(nonatomic) unsigned long long startPlayTime; // @synthesize startPlayTime;
@property(nonatomic) int playCount; // @synthesize playCount;
- (id)init;

@end


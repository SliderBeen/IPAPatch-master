//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol AVAudioSessionDelegate <NSObject>

@optional
- (void)inputIsAvailableChanged:(_Bool)arg1;
- (void)endInterruption;
- (void)endInterruptionWithFlags:(unsigned long long)arg1;
- (void)beginInterruption;
@end


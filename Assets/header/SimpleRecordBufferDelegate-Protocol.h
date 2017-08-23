//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SimpleRecordBufferDelegate <NSObject>
- (double)simpleRateForBuffer;
- (unsigned int)channlesPerFrame;
- (unsigned int)framesPerPacket;
- (unsigned int)bitsPerChannel;
- (void)onAudioBufferRecordEnd;
- (void)outputPeakPower:(float)arg1;
- (unsigned int)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
@end


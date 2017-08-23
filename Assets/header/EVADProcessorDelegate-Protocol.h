//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, StreamInputQueueItem;

@protocol EVADProcessorDelegate <NSObject>
- (void)onVADDetectSilentTooLong;
- (void)onVADDetectDelayVoice:(NSData *)arg1 Pcm:(NSData *)arg2;
- (void)onVADFilterdSpeakingVoice:(StreamInputQueueItem *)arg1;
- (void)onVADDetectSpeakingToSlience:(long long)arg1 data:(StreamInputQueueItem *)arg2;
- (void)onVADDetectSlienceToSpeaking:(long long)arg1 data:(StreamInputQueueItem *)arg2 HasSpeak:(_Bool)arg3;
- (void)onVADDetectFirstStart:(StreamInputQueueItem *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSTNComponent : NSObject
{
    struct PSTNChannelAdapter *mChannelAdapter;
    struct PSTNNetNotifier *mNetNotifier;
    struct ITransportChannel *mTransChannel;
    struct IMVQQEngine *mMVEngine;
    int mEngineChid;
    struct VoIPRingBuffer *mAudioDecBuf;
}

@property(nonatomic) struct VoIPRingBuffer *mAudioDecBuf; // @synthesize mAudioDecBuf;
@property(nonatomic) int mEngineChid; // @synthesize mEngineChid;
@property(nonatomic) struct IMVQQEngine *mMVEngine; // @synthesize mMVEngine;
@property(nonatomic) struct ITransportChannel *mTransChannel; // @synthesize mTransChannel;
@property(nonatomic) struct PSTNNetNotifier *mNetNotifier; // @synthesize mNetNotifier;
@property(nonatomic) struct PSTNChannelAdapter *mChannelAdapter; // @synthesize mChannelAdapter;
- (void)dealloc;
- (id)init;

@end


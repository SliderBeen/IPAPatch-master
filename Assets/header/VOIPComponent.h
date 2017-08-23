//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VOIPComponent : NSObject
{
    int mEngineChid;
    struct VOIPChannelAdapter *mChannelAdapter;
    struct VoipCSChannelAdapter *mCSChannelAdapter;
    struct VOIPNetNotifier *mNetNotifier;
    struct VOIPCSNetNotifier *mCSNetNotifier;
    struct ITransportChannel *mTransChannel;
    struct IMVQQEngine *mMVEngine;
    struct VoIPRingBuffer *mVideoDecBuf;
    struct VoIPRingBuffer *mAudioDecBuf;
}

@property(nonatomic) struct VoIPRingBuffer *mAudioDecBuf; // @synthesize mAudioDecBuf;
@property(nonatomic) struct VoIPRingBuffer *mVideoDecBuf; // @synthesize mVideoDecBuf;
@property(nonatomic) int mEngineChid; // @synthesize mEngineChid;
@property(nonatomic) struct IMVQQEngine *mMVEngine; // @synthesize mMVEngine;
@property(nonatomic) struct ITransportChannel *mTransChannel; // @synthesize mTransChannel;
@property(nonatomic) struct VOIPCSNetNotifier *mCSNetNotifier; // @synthesize mCSNetNotifier;
@property(nonatomic) struct VOIPNetNotifier *mNetNotifier; // @synthesize mNetNotifier;
@property(nonatomic) struct VoipCSChannelAdapter *mCSChannelAdapter; // @synthesize mCSChannelAdapter;
@property(nonatomic) struct VOIPChannelAdapter *mChannelAdapter; // @synthesize mChannelAdapter;
- (void)dealloc;
- (id)initForCustomerService;
- (id)init;

@end


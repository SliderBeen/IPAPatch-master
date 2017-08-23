//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "AVAssetResourceLoaderDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, AVURLAsset, NSString;
@protocol WCNetworkMediaCoreDelegate;

@interface WCNetworkMediaCore : MMObject <AVAssetResourceLoaderDelegate>
{
    WCNetworkMediaCore *weakSelf;
    _Bool hasPlayed;
    _Bool m_isNeedRestartMusic;
    int m_state;
    NSString *url;
    AVPlayerLayer *layer;
    id <WCNetworkMediaCoreDelegate> delegate;
    AVURLAsset *m_asset;
    AVPlayerItem *m_item;
    AVPlayer *m_player;
    double m_duration;
    double m_cacheDuration;
    struct CGSize m_videoSize;
}

@property(nonatomic) _Bool m_isNeedRestartMusic; // @synthesize m_isNeedRestartMusic;
@property(readonly, nonatomic) int state; // @synthesize state=m_state;
@property(nonatomic) double m_cacheDuration; // @synthesize m_cacheDuration;
@property double m_duration; // @synthesize m_duration;
@property struct CGSize m_videoSize; // @synthesize m_videoSize;
@property(retain, nonatomic) AVPlayer *m_player; // @synthesize m_player;
@property(retain, nonatomic) AVPlayerItem *m_item; // @synthesize m_item;
@property(retain, nonatomic) AVURLAsset *m_asset; // @synthesize m_asset;
@property(nonatomic) __weak id <WCNetworkMediaCoreDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) AVPlayerLayer *layer; // @synthesize layer;
@property(retain, nonatomic) NSString *url; // @synthesize url;
- (void).cxx_destruct;
- (void)updateState:(int)arg1;
- (void)onCacheRangeChange:(id)arg1;
- (void)onPlayerStatusChange:(long long)arg1;
- (void)onPlayerItemStatusChange:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onPlaybackFailedToEnd:(id)arg1;
- (void)onPlaybackEnd:(id)arg1;
- (void)onPlaybackStalled:(id)arg1;
- (void)internalPlay;
- (void)initPlayer;
@property(nonatomic) _Bool mute;
- (void)seekTo:(double)arg1;
- (void)accurateSeekTo:(double)arg1;
- (double)currentPosition;
- (struct CGSize)videoSize;
- (double)duration;
- (double)cacheDuration;
- (void)pause;
- (void)play;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


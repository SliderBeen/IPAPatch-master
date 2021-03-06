//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "MMVideoPlayerViewDelegate-Protocol.h"

@class NSString;

@interface WAWebViewPlugin_VideoPlayer : WAWebViewPlugin_embedView <MMVideoPlayerViewDelegate>
{
    _Bool _didAppear;
}

- (id)getCurrentSnapshot;
- (void)setObjectFit:(id)arg1 videoId:(unsigned int)arg2;
- (void)setVideoLive:(_Bool)arg1 videoId:(unsigned int)arg2;
- (void)setVideoAfterWebview:(unsigned int)arg1 afterWeb:(_Bool)arg2;
- (_Bool)operateVideoPlayer:(id)arg1 videoId:(unsigned int)arg2;
- (void)setDanmuList:(id)arg1 videoId:(unsigned int)arg2;
- (unsigned int)getControlsMask:(unsigned int)arg1;
- (void)setControls:(unsigned int)arg1 videoId:(unsigned int)arg2;
- (void)enableDanmu:(_Bool)arg1 videoId:(unsigned int)arg2;
- (void)setDirection:(unsigned long long)arg1 videoId:(unsigned int)arg2;
- (void)disableScroll:(_Bool)arg1 videoId:(unsigned int)arg2;
- (void)playVideo:(unsigned int)arg1;
- (void)enableAutoPlay:(_Bool)arg1 videoId:(unsigned int)arg2;
- (void)setVideoVisible:(unsigned int)arg1 visible:(_Bool)arg2;
- (void)onVideoEvent:(id)arg1 param:(id)arg2;
- (void)onVideoFullScreen:(_Bool)arg1;
- (void)setVideoThumb:(id)arg1 videoId:(unsigned int)arg2;
- (void)resizeVideo:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)setVideoDuration:(double)arg1 videoId:(unsigned int)arg2;
- (void)setNeedUpdateEvent:(_Bool)arg1 videoId:(unsigned int)arg2;
- (void)setUserData:(id)arg1 videoId:(unsigned int)arg2;
- (void)setVideoPath:(id)arg1 videoId:(unsigned int)arg2;
- (unsigned int)insertVideo:(id)arg1 pos:(struct CGRect)arg2 videoId:(unsigned int)arg3;
- (void)pauseAllVideos;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)enterBackground;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


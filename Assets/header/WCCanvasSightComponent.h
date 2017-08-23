//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "SightViewDelegate-Protocol.h"
#import "VoiceComponentExt-Protocol.h"
#import "WCCanvasImageLoaderObserver-Protocol.h"
#import "WCSightLoaderObserver-Protocol.h"

@class NSString, SightView, UIButton;

@interface WCCanvasSightComponent : WCCanvasComponent <SightViewDelegate, WCCanvasImageLoaderObserver, WCSightLoaderObserver, VoiceComponentExt>
{
    _Bool _sightReady;
    _Bool _sightPlaying;
    SightView *_sightView;
    UIButton *_voiceIconButton;
    NSString *_currentSightUrl;
    struct CGSize _sightSize;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(nonatomic) struct CGSize sightSize; // @synthesize sightSize=_sightSize;
@property(retain, nonatomic) NSString *currentSightUrl; // @synthesize currentSightUrl=_currentSightUrl;
@property(nonatomic) _Bool sightPlaying; // @synthesize sightPlaying=_sightPlaying;
@property(nonatomic) _Bool sightReady; // @synthesize sightReady=_sightReady;
@property(retain, nonatomic) UIButton *voiceIconButton; // @synthesize voiceIconButton=_voiceIconButton;
@property(retain, nonatomic) SightView *sightView; // @synthesize sightView=_sightView;
- (void).cxx_destruct;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (void)SightDidFailForUrl:(id)arg1;
- (void)SightDidLoad:(id)arg1 Url:(id)arg2;
- (void)SightDidReceiveProgress:(double)arg1 Url:(id)arg2;
- (void)SightWillBeginLoadForUrl:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)onClickIconViewOfSightView:(id)arg1;
- (unsigned long long)getSightViewScene;
- (void)onVoiceIconBtnClick:(id)arg1;
- (void)tryToPlaySight;
- (_Bool)tryToLoadSight;
- (_Bool)tryToLoadThumbImage;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentHasApperedInMainScreenWithFactor:(double)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setup;
- (void)clear;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


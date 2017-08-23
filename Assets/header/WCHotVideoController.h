//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavAddItemHelperDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "SightViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class ForwardMessageLogicController, NSString, SightView, UIImageView, WCDataItem, WCMediaItem;

@interface WCHotVideoController : MMUIViewController <WCActionSheetDelegate, ForwardMessageLogicDelegate, FavAddItemHelperDelegate, SightViewDelegate, WCFacadeExt>
{
    WCDataItem *m_oDataItem;
    WCMediaItem *m_oMediaItem;
    UIImageView *m_oThumbImageView;
    SightView *m_oSightView;
    _Bool m_bFullScreenPlaying;
    _Bool m_bVideoPause;
    unsigned int m_uOperateMode;
    ForwardMessageLogicController *m_forwardMsgLogic;
}

- (void).cxx_destruct;
- (void)OnVideoStreamDownloadProgressUpdate:(id)arg1 FinishedLength:(unsigned int)arg2 TotalLength:(unsigned int)arg3;
- (void)onMediaVideoDownloadSuccess:(id)arg1;
- (id)getCurrentViewController;
- (void)onAddFavTagBegin;
- (void)onVideoStreamDownloadFail:(_Bool)arg1;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)reStartStateMachine;
- (void)onStartToPlayVideo;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)OnDownloadSuccessForForwardVideoToFriend;
- (void)OnDownloadSuccessForSaveVideoToAlbum;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)trySendSightToFriend;
- (void)tryToSaveVideoToAlbum;
- (void)tryToAddFavorite;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShowSightAction;
- (void)onClickIconViewOfSightView:(id)arg1;
- (void)onLongPressed:(id)arg1;
- (void)onFullScreenSingleTap;
- (_Bool)checkDownloadForOperateMode:(unsigned int)arg1;
- (void)startLoadFullDownloadView;
- (void)pauseVideoPlay;
- (void)exitVideoPlay;
- (void)startPlayHotVideo;
- (void)clearSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)initGestures;
- (void)initView;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1 thumbView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


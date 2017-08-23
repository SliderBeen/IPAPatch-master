//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "FavAddItemHelperDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCSNSNodeVideoViewDelegate-Protocol.h"

@class ForwardMessageLogicController, NSString, WCMediaItem, WCSNSNodeVideoView;

@interface WCTLContentItemTemplateVideo : WCContentItemBaseView <WCActionSheetDelegate, ForwardMessageLogicDelegate, WCSNSNodeVideoViewDelegate, FavAddItemHelperDelegate>
{
    WCSNSNodeVideoView *_videoView;
    ForwardMessageLogicController *m_forwardMsgLogic;
    WCMediaItem *m_oMediaItem;
    unsigned long long _legalityType;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
@property(nonatomic) unsigned long long legalityType; // @synthesize legalityType=_legalityType;
- (void).cxx_destruct;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)OnDownloadSuccessForSaveVideoToAlbum;
- (void)tryToSaveVideoToAlbum;
- (void)OnDownloadSuccessForForwardVideoToFriend;
- (void)trySendSightToFriend;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)tryToAddFavorite;
- (id)getVisibleViewController;
- (void)onAddFavTagBegin;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onMore:(id)arg1;
- (void)onLongTouch;
- (void)onShowSightAction;
- (void)OnSilencePlay;
- (void)onLongPressedWCSightFullScreenWindow:(id)arg1;
- (void)onLongPressedWCSight:(id)arg1;
- (void)onClickWCSight:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 withScene:(unsigned long long)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2;
- (id)initWithWCDataItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


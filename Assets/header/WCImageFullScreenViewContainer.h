//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "FullScreenGestureDelegate-Protocol.h"
#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class MMImageScrollViewHelper, MMLoadingView, MMProgressViewEx, NSArray, NSString, ScanQRCodeLogicController, UIImage, UIImageView, UIView, WCActionSheet, WCMediaItem, WCMediaItemWrap, WXFullScreenGestureRecognizer;
@protocol WCImageFullScreenViewContainerDelegate;

@interface WCImageFullScreenViewContainer : MMUIScrollView <WCActionSheetDelegate, BaseScanLogicDelegate, FullScreenGestureDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate, WCFacadeExt>
{
    WCMediaItem *m_mediaData;
    WCMediaItemWrap *m_mediaDataWrap;
    struct CGRect m_originImageRectInScreen;
    struct CGSize m_initalContentSize;
    UIImage *m_image;
    _Bool m_isAnimating;
    _Bool m_isShowing;
    _Bool m_bIsLongPressHandled;
    _Bool m_isImageReady;
    _Bool m_isComeFromDownload;
    long long m_lastDeviceOrientation;
    UIImageView *m_container;
    MMLoadingView *m_loadingView;
    MMProgressViewEx *m_processView;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WCActionSheet *m_actionSheet;
    id <WCImageFullScreenViewContainerDelegate> m_delegate;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WXFullScreenGestureRecognizer *m_gesture;
    UIView *m_gestureView;
    double _startLoadingTime;
}

@property(nonatomic) double startLoadingTime; // @synthesize startLoadingTime=_startLoadingTime;
@property(readonly, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView;
@property(nonatomic) __weak id <WCImageFullScreenViewContainerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct CGSize m_initalContentSize; // @synthesize m_initalContentSize;
@property(nonatomic) struct CGRect m_originImageRectInScreen; // @synthesize m_originImageRectInScreen;
@property(retain, nonatomic) WCMediaItemWrap *m_mediaDataWrap; // @synthesize m_mediaDataWrap;
@property(retain, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
- (void).cxx_destruct;
- (void)onStopLoading;
- (void)onScanEnds;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenBackgroupColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (_Bool)shouldPreventDragDownCloseGesture;
- (void)onSingleTap:(id)arg1;
- (void)initGestureView;
- (void)animationRotateDidStop;
- (void)contentNeedRotateWithOrientation:(long long)arg1;
- (void)onDeviceRotate:(_Bool)arg1;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)hideWithoutAnimation;
- (void)animationHideDidStop;
- (void)animationHideWithRotate;
- (struct CGAffineTransform)getAnimationRotateTransform;
- (void)tryDownloadImage;
- (void)animationShowWithMediaItem:(id)arg1;
- (void)animationShowStep2;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowDidStop;
- (void)animationShowView;
- (void)setContentOffsetAndSize;
- (void)clearStatus;
- (struct CGRect)getCenterRect:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
- (void)showProcessView;
- (void)reloadView:(id)arg1;
- (void)initScrollViewHelper;
- (id)viewForZooming;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)stopLoading;
- (void)startLoadingNonBlock;
- (void)startLoadingBlocked;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setZoomScale:(float)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGRect frame;
- (void)dealloc;
- (void)stopAllAnimation;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFullScreenViewController.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "IHttpCacheExt-Protocol.h"
#import "MultiImageScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMUIWindow, MultiImageScrollView, NSArray, NSMutableArray, NSString, ScanQRCodeLogicController, UIPageControl;
@protocol GameCenterPhotoViewControllerDelegate;

@interface GameCenterPhotoViewController : MMFullScreenViewController <WCActionSheetDelegate, BaseScanLogicDelegate, MultiImageScrollViewDelegate, IHttpCacheExt>
{
    MultiImageScrollView *pagingScrollView;
    NSMutableArray *m_arrayImageDatas;
    _Bool m_bAnimating;
    _Bool m_isFromWebview;
    MMUIWindow *m_bgWindow;
    NSArray *m_originalFrameInScreen;
    _Bool _oldNavigationBarAlpha;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    UIPageControl *m_pageCtrl;
    unsigned int m_httpType;
    id <GameCenterPhotoViewControllerDelegate> delegate;
    double m_animationTime;
}

@property(nonatomic) unsigned int m_httpType; // @synthesize m_httpType;
@property(nonatomic) double m_animationTime; // @synthesize m_animationTime;
@property(nonatomic) __weak id <GameCenterPhotoViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)PreScanQRCode;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)addToFavorites;
- (void)forwardMessage;
- (void)onOperate;
- (void)onSavedPhotosAlbum;
- (void)onAnimationDidStop;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)arg1;
- (id)tryGetResource:(id)arg1;
- (id)genKeyForUrl:(id)arg1;
- (void)initImageViewerWithItems:(id)arg1 current:(id)arg2;
- (unsigned long long)getIndexArrayImageUrl:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updatePhotoatIndex:(unsigned int)arg1;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (void)onChangePage;
- (void)onMainWindowFrameChanged;
- (void)dealloc;
- (void)viewDidLoad;
- (void)hideSelf;
- (void)showSelf;
- (void)showAnimationWithUrl:(id)arg1;
- (void)showAnimationWithIndex:(unsigned int)arg1;
- (void)initWindow;
- (id)init;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)initScrollView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


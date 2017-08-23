//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "CAAnimationDelegate-Protocol.h"
#import "IHDHeadImageViewExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "IMMImagePickerManagerExt-Protocol.h"
#import "ISvrErrorExt-Protocol.h"
#import "IUiUtilExt-Protocol.h"
#import "IViewControllerExt-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"
#import "SvrErrorTipViewControllerDelegate-Protocol.h"

@class NSString, RichTextView, SvrErrorTipViewController, UIButton, UIView;

@interface SvrErrorTipWindow : MMUIWindow <CAAnimationDelegate, ISvrErrorExt, IUiUtilExt, IViewControllerExt, IHDHeadImageViewExt, IMMImagePickerManagerExt, RichTextLayoutDelegate, ILinkEventExt, SvrErrorTipViewControllerDelegate>
{
    RichTextView *_tipView;
    UIButton *_closeButton;
    unsigned int _lastCloseTipViewTime;
    NSString *_tipMsg;
    NSString *_url;
    NSString *_noticeId;
    _Bool _tipForbidden;
    _Bool _tipTempForbidden;
    _Bool _landscapeForbidden;
    SvrErrorTipViewController *_fullScreenViewController;
    unsigned int _lastShowFullScreenTime;
    UIView *m_lineView;
    double m_lastFullScreenShowTime;
    UIView *m_containerView;
}

- (void).cxx_destruct;
- (void)OnGetSvrError:(id)arg1 Url:(id)arg2 Tips:(id)arg3 TimeOut:(unsigned int)arg4;
- (void)updateSvrError:(id)arg1 Url:(id)arg2 Tips:(id)arg3;
- (void)OnGetBannerDisaster;
- (void)OnGetLoginDisaster:(id)arg1 Tips:(id)arg2 Url:(id)arg3;
- (void)onMMImagePickerManagerShow;
- (void)onMMImagePickerManagerFinish;
- (void)onHDHeadImageWillDisappear;
- (void)onHDHeadImageWillAppear;
- (void)onViewWillAppear:(_Bool)arg1 landscapeForbidden:(_Bool)arg2;
- (void)onViewDidAppear:(id)arg1;
- (void)onStatusBarHiddenChanged:(long long)arg1;
- (void)onTopBarFrameChanged;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)jumpUrl:(id)arg1;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)onSvrErrorTipClickDetailButton;
- (void)onSvrErrorTipClickCancelButton;
- (void)hideSvrErrorTip;
- (void)showSvrErrorTip;
- (_Bool)isTipBusy;
- (void)dealloc;
- (id)init;
- (void)initData;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initView;
- (void)manualCloseTipView;
- (void)closetipView;
- (void)stopBlocking;
- (void)showFullScreenSvrErrorTip:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


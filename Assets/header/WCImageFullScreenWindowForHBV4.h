//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "WCImageFullScreenViewControllerDelegateV4-Protocol.h"

@class NSString, WCImageFullScreenViewControllerForHBV4;
@protocol WCImageFullScreenWindowDelegate;

@interface WCImageFullScreenWindowForHBV4 : MMUIWindow <WCImageFullScreenViewControllerDelegateV4>
{
    WCImageFullScreenViewControllerForHBV4 *m_controller;
    id <WCImageFullScreenWindowDelegate> _wc_delegate;
}

@property(nonatomic) id <WCImageFullScreenWindowDelegate> wc_delegate; // @synthesize wc_delegate=_wc_delegate;
- (void).cxx_destruct;
- (void)showErrorTip:(id)arg1;
- (void)stopLoading;
- (void)startLoadingBlocked;
- (void)cancelCaptureFakeWindow;
- (void)captureFakeWindow;
- (void)onViewBePopByMsgBar;
- (void)onAnimateFadeOut;
- (void)windowHideToLeft;
- (void)windowNeed2Show;
- (void)windowNeed2Hide;
- (void)onViewControllerAnimationHideWillStop;
- (void)onViewControllerAnimationHideStop;
- (void)onViewControllerAnimationShowWillStart;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void)animationShowWithHint:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


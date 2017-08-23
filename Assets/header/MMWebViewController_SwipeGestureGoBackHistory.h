//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MMWebViewController, MMWebViewHistory, NSString, UIImageView, UIScreenEdgePanGestureRecognizer, UIView;

@interface MMWebViewController_SwipeGestureGoBackHistory : MMObject <UIGestureRecognizerDelegate>
{
    UIImageView *m_lastPageShot;
    UIView *m_lastView;
    UIView *m_coverView;
    UIView *m_shadowView;
    double m_lastViewCenterX;
    double m_lastChangedCenterX;
    double m_lastChangedTime;
    double m_lastChangedCenterX2;
    double m_lastChangedTime2;
    UIScreenEdgePanGestureRecognizer *m_swipeGestureRecognizer;
    UIView *m_invisibleScrollPreventer;
    _Bool m_isSwipeDoneAndWaitingGoBackDone;
    unsigned long long m_uiRealGoBackCount;
    MMWebViewHistory *m_history;
    MMWebViewController *_webViewcontroller;
    _Bool m_isSwiping;
}

@property(readonly, nonatomic) MMWebViewHistory *m_history; // @synthesize m_history;
@property(nonatomic) _Bool m_isSwiping; // @synthesize m_isSwiping;
- (void).cxx_destruct;
- (void)goBack;
- (void)checkSwipeGesture;
- (void)setupSnapShotView;
- (void)swipeBack:(id)arg1;
- (void)checkPosition;
- (double)getAnimationTimeWithDirectionRight:(_Bool)arg1;
- (double)getDefaultSpeed;
- (double)getSwipeSpeed;
- (_Bool)isSwipeRight;
- (void)showRealPageAfterSwipeDone;
- (void)showFakePageShotViewAndRemoveWhenWebViewFinishedDraw;
- (void)processSwipeDoneAndWaitingGoBackDone;
- (void)updateSnapshotWithURL:(id)arg1;
- (void)actionWhenShowLoadFailView;
- (void)actionDidRotateFromInterfaceOrientation;
- (void)actionCanNotGoBack;
- (void)actionBeforeGoBack;
- (void)actionBeforeDissmiss;
- (void)actionWhenViewWillBePoped;
- (void)actionWebViewDidFinishLoad;
- (void)actionWebViewShouldStartLoadWithRequest;
- (void)checkHistoryWithNavigationType:(long long)arg1;
- (void)removeSwipeBackGesture;
- (void)addSwipeBackGesture;
- (_Bool)isSupportSwipeBackGesture;
- (void)dealloc;
- (id)initWithWebViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


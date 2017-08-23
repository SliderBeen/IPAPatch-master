//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol BaseScanLogicDelegate <NSObject>

@optional
- (double)getZoomFactor;
- (void)onSetCameraZoomFactor:(double)arg1;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onScanEnds;
- (void)didShowScanResult;
- (float)getBottomBarHeight;
- (struct CGRect)getContentRect;
- (UIViewController *)getMainViewController;
- (void)onShowAlertWording;
- (void)onUpdateWording;
- (void)onStopScanAnimation;
- (void)onStartScanAnimation;
- (void)onStopLoading;
- (void)onStartLoading;
- (void)onPlaySound;
- (void)onPopViewControllerCount:(int)arg1 animated:(_Bool)arg2;
- (void)onPushViewContoller:(UIViewController *)arg1 animated:(_Bool)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol ShortVideoBarDelegate <NSObject>
- (void)onCameraResign;
- (void)onSightPictureTaken:(UIImage *)arg1 withFrontCamera:(_Bool)arg2;
- (void)onShortVideoTaken:(NSString *)arg1 thumbImg:(UIImage *)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4;
- (void)onShortVideoToolBtnClick:(int)arg1;

@optional
- (NSString *)chatUserNameForSightStatistics;
- (void)onStopRecord;
- (void)onStartRecord;
- (void)onDeactiveAnimStart:(double)arg1;
- (void)onPanelDrag:(double)arg1;
- (void)onDeactiveAnimEnd;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol IVOIPModeSwitchExt

@optional
- (void)OnVideoModeChangeToVoiceMode;
- (void)OnFromRemoteVideoToBothVideo;
- (void)OnFromLocalVideoToBothVideo;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnOneWayRemoteVideoMode;
- (void)OnOneWayLocalVideoMode;
- (void)OnOneWayRemoteEarMode;
- (void)OnOneWayLocalEarMode;
- (void)OnOneWayRemoteEarModeFor2G;
- (void)OnOneWayLocalEarModeFor2G;
- (void)OnBothEarMode;
- (void)OnRemoteVideoMode;
- (void)OnRemoteEarMode;
- (void)OnLocalVideoMode;
- (void)OnLocalEarMode;
- (void)OnBothVideoMode;
- (void)OnRemoteEarModeFor2G;
- (void)OnLocalEarModeFor2G;
@end


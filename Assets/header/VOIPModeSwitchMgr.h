//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IVOIPSyncExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSString, VOIPModeSwitchStateMachine;

@interface VOIPModeSwitchMgr : MMService <IVOIPSyncExt, MMService>
{
    _Bool mIsWeakSessionActive;
    _Bool mIsSessionActive;
    _Bool mIsLocalVideoClosed;
    _Bool mIsRemoteVideoClosed;
    _Bool mIsMicClosed;
    _Bool mIsVoiceMode;
    _Bool mIsTalkingWithOldVersion;
    int mRoomId;
    long long mRoomKey;
    _Bool m_isActiveByCaller;
    VOIPModeSwitchStateMachine *mStateMachine;
}

@property(retain, nonatomic) VOIPModeSwitchStateMachine *mStateMachine; // @synthesize mStateMachine;
@property(nonatomic) _Bool m_isActiveByCaller; // @synthesize m_isActiveByCaller;
- (void).cxx_destruct;
- (void)ChangeToAudioMode;
- (_Bool)isVoiceMode;
- (_Bool)isTalkingWithOldVersion;
- (_Bool)isMicClosed;
- (int)CurrentStatus;
- (_Bool)isRemoteVideoClosed;
- (_Bool)isLocalVideoClosed;
- (void)StopSession;
- (void)CloseLocalMic;
- (void)OpenLocalMic;
- (void)OpenLocalVideoMode;
- (void)OpenLocalEarMode;
- (void)OpenLocalEarModeNotPush;
- (void)VideoSwitchToVoiceMode;
- (void)VideoSwitchToVoiceModeNotPushStatus;
- (void)OpenLocalEarModeForBadNetwork;
- (void)OpenLocalEarModeFor2G;
- (void)StartSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2;
- (void)StartWeakSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)SetRemoteVideoEnable:(_Bool)arg1;
- (void)SetLocalVideoEnable:(_Bool)arg1;
- (void)CallBackForModeStatus:(int)arg1;
- (void)SetAudioSpeakerPhone:(_Bool)arg1;
- (void)PushControlStatusToRemote:(unsigned int)arg1;
- (void)OnGotRemoteControlStatus:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


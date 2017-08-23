//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMTimer, NSData, NSMutableArray, NSRecursiveLock, NSString;

@interface VOIPSyncMgr : MMService <PBMessageObserverDelegate, MMService>
{
    _Bool mIsWeakSessionActive;
    _Bool mIsSessionActive;
    _Bool mIsNeedSync;
    int mRoomId;
    long long mRoomKey;
    _Bool m_isDoingSync;
    int cancelInviteStatus;
    NSData *mKeyBuf;
    NSMutableArray *mOplogList;
    NSRecursiveLock *mOplogLock;
    MMTimer *m_syncTimer;
}

@property(retain, nonatomic) MMTimer *m_syncTimer; // @synthesize m_syncTimer;
@property(retain, nonatomic) NSRecursiveLock *mOplogLock; // @synthesize mOplogLock;
@property(retain, nonatomic) NSMutableArray *mOplogList; // @synthesize mOplogList;
@property(retain, nonatomic) NSData *mKeyBuf; // @synthesize mKeyBuf;
- (void).cxx_destruct;
- (void)StopSession;
- (void)PushRelayData:(id)arg1;
- (void)PushControlStatus:(unsigned int)arg1;
- (void)SyncByNotifyWithRoomId:(int)arg1 andRoomKey:(long long)arg2;
- (void)StartSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2;
- (void)StartWeakSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2;
- (void)forceCheck_next_sync;
- (void)StartSyncTimer:(unsigned long long)arg1;
- (void)StopSyncTimer;
- (void)dealloc;
- (id)init;
- (int)getSitemStatus;
- (long long)getRoomKey;
- (int)getRoomId;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (void)ClearOplog;
- (void)RemoveOplog:(id)arg1;
- (id)GetOplog;
- (void)AddOplog:(unsigned int)arg1 data:(id)arg2;
- (void)SendSyncRequestFor:(id)arg1 withSelector:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)retriveKeyFrom:(id)arg1 StatusKey:(unsigned int *)arg2 RelayKey:(unsigned int *)arg3 ConnectingKey:(unsigned int *)arg4;
- (_Bool)isSyncKeyNew:(id)arg1;
- (void)check_next_sync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMTimer, NSMutableArray, NSRecursiveLock, NSString;

@interface PSTNSyncMgr : MMService <PBMessageObserverDelegate, MMService>
{
    _Bool mIsWeakSessionActive;
    _Bool mIsSessionActive;
    _Bool mIsNeedSync;
    int mRoomId;
    long long mRoomKey;
    long long mCallSeq;
    _Bool m_isDoingSync;
    unsigned int m_nCalledStatus;
    unsigned int m_nStatusSyncKey;
    int mAcceptDataFlag;
    MMTimer *m_syncTimer;
    NSMutableArray *_mOplogList;
    NSRecursiveLock *_mOplogLock;
}

@property(retain, nonatomic) NSRecursiveLock *mOplogLock; // @synthesize mOplogLock=_mOplogLock;
@property(retain, nonatomic) NSMutableArray *mOplogList; // @synthesize mOplogList=_mOplogList;
@property(retain, nonatomic) MMTimer *m_syncTimer; // @synthesize m_syncTimer;
- (void).cxx_destruct;
- (void)StopSession;
- (void)StartSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2 andCallSeq:(long long)arg3;
- (void)forceCheck_next_sync;
- (void)StartSyncTimer:(unsigned long long)arg1;
- (void)StopSyncTimer;
- (id)init;
- (void)setAcceptDataFlag:(int)arg1;
- (void)setStatusSyncKey:(unsigned int)arg1;
- (void)setCalledStatus:(unsigned int)arg1;
- (unsigned int)getStatusSyncKey;
- (unsigned int)getCalledStatus;
- (long long)getRoomKey;
- (int)getRoomId;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (void)SendSyncRequestFor;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)check_next_sync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


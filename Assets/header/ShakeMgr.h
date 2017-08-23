//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "ShakeMsgNotifyMgrDelegate-Protocol.h"

@class NSString, ShakeBeaconStorage, ShakeMsgNotifyMgr, ShakeMusicStorage, ShakePeopleStorage, ShakeTvStorage;

@interface ShakeMgr : MMService <ShakeMsgNotifyMgrDelegate, MMService>
{
    int m_shakeType;
    ShakePeopleStorage *m_peopleStorage;
    ShakeMusicStorage *m_musicStorage;
    ShakeTvStorage *m_tvStorage;
    ShakeBeaconStorage *m_beaconStorage;
    long long m_peopleStorageRefCount;
    long long m_pageStorageRefCount;
    long long m_musicStorageRefCount;
    long long m_tvStorageRefCount;
    long long m_shakeShareStorageRefCount;
    long long m_beaconStorageRefCount;
    ShakeMsgNotifyMgr *m_shakeMsgNotifyMgr;
}

- (void).cxx_destruct;
- (void)onShakeMsgUnreadCountChanged;
- (void)insertMsgItem:(id)arg1;
- (void)deleteAllMessages;
- (void)deleteMessageItem:(id)arg1;
- (void)markMessageListRead:(id)arg1;
- (id)getMessagesFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (id)getUnreadMsgPidDesc;
- (id)getLastestUnreadMessage;
- (id)getUnreadMessages;
- (unsigned long long)getUnreadMessageCount;
- (_Bool)hasUnreadMessages;
- (_Bool)onServiceMemoryWarning;
- (id)getShakeBackgroundView;
- (void)endMusicStorage;
- (void)beginMusicStorage;
- (void)endPeopleStorage;
- (void)beginPeopleStorage;
- (void)endTvStorage;
- (void)beginTvStorage;
- (void)endBeaconStorage;
- (void)beginBeaconStorage;
- (void)clearBeaconStorage;
- (void)saveBeaconStorage:(_Bool)arg1;
- (id)getBeaconStorage;
- (void)LoadBeaconStorage;
- (void)ClearTvStorage;
- (void)SaveTvStorage:(_Bool)arg1;
- (id)getTvStorage;
- (void)LoadTvStorage;
- (void)ClearMusicStorage;
- (void)SaveMusicStorage:(_Bool)arg1;
- (id)getMusicStorage;
- (void)LoadMusicStorage;
- (void)ClearPeopleStorage;
- (void)SavePeopleStorage:(_Bool)arg1;
- (id)getPeopleStorage;
- (void)LoadPeopleStorage;
- (void)setSoundStatus:(int)arg1;
- (int)getSoundStatus;
- (void)NotifyStatusChanged;
- (_Bool)canShowShakeTV;
- (_Bool)isShakeMusicOversea;
- (_Bool)canShowShakeMusic;
- (int)getShakeType;
- (void)shakeSwitch:(int)arg1;
- (void)dealloc;
- (id)init;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


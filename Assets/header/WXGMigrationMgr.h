//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSObject, NSString, WXGMigrationInfoDB;
@protocol OS_dispatch_queue;

@interface WXGMigrationMgr : MMService <MMKernelExt, MMService>
{
    WXGMigrationInfoDB *m_infoDB;
    NSObject<OS_dispatch_queue> *m_updateTimeQueue;
    _Bool m_bShouldNotInterruption;
    NSString *m_deviceID;
    _Bool m_bCheckState;
}

- (void).cxx_destruct;
- (void)onAuthOK;
- (_Bool)hasBeenMigrationWithSessionNameArray:(id)arg1;
- (_Bool)hasBeenMigration;
- (void)resetSession:(id)arg1 withLastTime:(unsigned int)arg2;
- (unsigned int)getSessionLastTime:(id)arg1;
- (void)setUserDeviceIDAndCreateTable:(id)arg1;
- (void)showLocalNotificationWhenChatMigrationWorking;
- (void)canInterrutpion;
- (void)shouldNotInterruption;
- (_Bool)isMigrationWorking;
- (void)p_onMainThreadShowServerEntryViewControllerWithNotifyCode:(unsigned long long)arg1;
- (void)p_onMainThreadShowClientEntryViewControllerWithNotifyCode:(unsigned long long)arg1;
- (void)checkState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


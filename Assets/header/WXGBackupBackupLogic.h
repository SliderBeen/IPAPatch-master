//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXGBackupBasicLogic.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, WXGBackupAnalysis, WXGBackupDataInfo, WXGBackupDataMgr, WXGChatLogProtoHandler;
@protocol OS_dispatch_queue;

@interface WXGBackupBackupLogic : WXGBackupBasicLogic
{
    WXGChatLogProtoHandler *m_protoHandler;
    WXGBackupDataMgr *m_dataMgr;
    WXGBackupDataInfo *m_backupDataInfo;
    _Bool m_bFirstTag;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_lastBackupSesionName;
    NSMutableDictionary *m_sessionNickDictionary;
    unsigned int m_startBackupTime;
    NSMutableSet *m_currentDataID;
    NSMutableArray *m_sendingArray;
    WXGBackupAnalysis *m_analysisiHelper;
    _Bool m_bStopService;
    NSObject<OS_dispatch_queue> *m_backupLogicQueue;
}

- (void).cxx_destruct;
- (void)processBackupDataTagResponseData:(id)arg1;
- (void)processDataPushResponseData:(id)arg1;
- (void)processRequestSessionResponseData:(id)arg1;
- (void)processStartResponseData:(id)arg1;
- (void)p_processBackupDataTag:(id)arg1;
- (void)p_sendBackupOutputToRemote:(id)arg1;
- (void)sendLotOfDataPush;
- (void)sendNextDataPushWithResponseID:(id)arg1;
- (void)sendBackupConfirm;
- (void)sendBackupDataTagWithDataInfo:(id)arg1;
- (void)sendFinishRequest;
- (void)sendSvrIDRequest;
- (void)sendRequestSession;
- (void)sendStartRequest;
- (void)p_sendDataOnMainThread:(id)arg1;
- (_Bool)sendData:(id)arg1;
- (void)confirmLogic;
- (void)stopService;
- (void)startService;
- (id)initWithProtoHandler:(id)arg1 withProcessQueue:(id)arg2;

@end


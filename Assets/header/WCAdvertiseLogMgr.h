//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSString, WCAdvertiseLogDB;

@interface WCAdvertiseLogMgr : MMService <PBMessageObserverDelegate, MMKernelExt, MMService>
{
    _Bool adLogReporting;
    _Bool reportTaskRunning;
    WCAdvertiseLogDB *logDB;
    unsigned int reportBeginLocalId;
    unsigned int reportCurrLocalId;
    unsigned int reportEndLocalId;
    _Bool delayInsertDB;
    NSMutableArray *tempLogs;
}

- (void).cxx_destruct;
- (unsigned int)getMaxSendSize;
- (unsigned int)getRandomInternalTime;
- (unsigned int)getExceptionMaxTime;
- (void)saveNextReportTime:(unsigned int)arg1;
- (unsigned int)getNextReportTime;
- (void)onAuthOK;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)startReportADLog;
- (id)getReportADLogPackage;
- (void)tryReportADLog;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)insertDBLogsToDb;
- (void)reportADLog:(unsigned int)arg1 logExt:(id)arg2;
- (id)getKVLogHead;
- (void)setupLogDB;
- (void)onServiceReloadData;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)getPathForLogCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


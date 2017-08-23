//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "ReportStrategyExt-Protocol.h"

@class MMTimer, NSMutableDictionary, NSString;

@interface MMMonitorConfigMgr : MMService <ReportStrategyExt, MMService>
{
    NSMutableDictionary *m_dicMainThreadMonitorCongfig;
    MMTimer *m_checkUpdateTimer;
}

- (void).cxx_destruct;
- (unsigned int)UinHash:(unsigned int)arg1;
- (_Bool)isHitSample:(double)arg1;
- (void)onReceiveStrategy:(int)arg1 withContene:(id)arg2;
- (void)saveIsMonitorState:(_Bool)arg1;
- (_Bool)saveAlreadyUploadCnt:(unsigned long long)arg1;
- (unsigned long long)getAlreadyUploadCnt;
- (unsigned long long)getReportEnv;
- (unsigned long long)getOneTimeUpload;
- (unsigned long long)getMaxDailyReport;
- (_Bool)getIsAutoReport;
- (_Bool)getIsMonitor;
- (_Bool)isIPXXExpired;
- (void)onStategy:(id)arg1;
- (void)onIPXX:(id)arg1;
- (void)onIPXXReportBlockDump:(id)arg1;
- (void)onIPXXStrategy:(id)arg1;
- (_Bool)parseCommonNode:(struct XmlReaderNode_t *)arg1 toConfig:(id)arg2;
- (id)getConfigFilePath;
- (void)saveDumpReportConfig;
- (_Bool)updateAlreadyUploadCnt;
- (id)getDateStringFromDate:(id)arg1;
- (void)loadConfig;
- (void)onTimeOffsetTime;
- (void)onTimeCheck;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


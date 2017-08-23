//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMTimer, NSMutableArray, NSString, ReportDeviceInfo;

@interface WARealTimeReportMgr : MMService <PBMessageObserverDelegate, MMService>
{
    MMTimer *_timerReportCheck;
    NSMutableArray *_arrReportInfo;
    unsigned int _reportTimeInterval;
    unsigned int _lastReportTime;
    ReportDeviceInfo *_deviceInfo;
}

- (void).cxx_destruct;
- (void)onReportResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)realTimeReportInfo;
- (void)onTimerRealTimeReportTimer:(id)arg1;
- (void)invadateRealTimeReportTimer;
- (void)startRealTimeReportTimer;
- (void)reportJSRealtimeAction:(id)arg1 appID:(id)arg2 withExtBaseItem:(id)arg3;
- (void)reportPageRouteInfo:(id)arg1 appID:(id)arg2 withExtBaseItem:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


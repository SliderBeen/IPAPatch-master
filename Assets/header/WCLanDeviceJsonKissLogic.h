//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCLanDeviceBaseKissLogic.h"

#import "IWCLanDeviceMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCLanDeviceJsonKissLogic : WCLanDeviceBaseKissLogic <IWCLanDeviceMgrExt, PBMessageObserverDelegate>
{
    NSMutableDictionary *m_sendTaskMap;
}

- (void).cxx_destruct;
- (_Bool)cancelTaskWithDevice:(id)arg1;
- (void)onSendDataToWCLanDevice:(long long)arg1 ErrCode:(int)arg2;
- (void)kissDeviceWithJsonStr:(id)arg1 deviceType:(id)arg2 deviceId:(id)arg3;
- (void)handleDeviceMsgTransferAppMsg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(_Bool)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWCLanDeviceMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, WCLanDeviceData, WCLanDeviceMgr;
@protocol WCLanDeviceKissLogicDelegate;

@interface WCLanDeviceBaseKissLogic : NSObject <IWCLanDeviceMgrExt, PBMessageObserverDelegate>
{
    NSMutableSet *m_deviceMd5Set;
    NSMutableDictionary *m_lanDeviceDict;
    NSMutableDictionary *m_reqEventMap;
    WCLanDeviceMgr *m_lanMgr;
    id <WCLanDeviceKissLogicDelegate> _delegate;
    unsigned long long _deviceScene;
    WCLanDeviceData *_deviceData;
}

@property(retain, nonatomic) WCLanDeviceData *deviceData; // @synthesize deviceData=_deviceData;
@property(nonatomic) unsigned long long deviceScene; // @synthesize deviceScene=_deviceScene;
@property(nonatomic) __weak id <WCLanDeviceKissLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2 Device:(id)arg3;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(_Bool)arg3;
- (void)onReceiveWCLanDeviceProfile:(id)arg1;
- (_Bool)filterSearchLanDevice:(id)arg1;
- (_Bool)cancelTaskWithDevice:(id)arg1;
- (unsigned int)popEventIdRelatedWithDevice:(id)arg1;
- (id)lanDeviceWithDeviceMD5:(id)arg1;
- (id)devicesApplyScene;
- (id)devicesApplySceneAndSupportInternetKissOnly;
- (void)disconnect;
- (void)stopScan;
- (void)startScan;
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


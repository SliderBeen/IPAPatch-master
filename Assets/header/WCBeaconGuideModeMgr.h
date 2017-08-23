//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCBeaconGuideModeExt-Protocol.h"

@class CLLocationManager, MMTimer, NSMutableArray, NSString;

@interface WCBeaconGuideModeMgr : MMService <PBMessageObserverDelegate, CLLocationManagerDelegate, MMService, WCBeaconGuideModeExt>
{
    MMTimer *m_timer;
    _Bool _m_isPreviousRequestRunning;
    NSMutableArray *_shakeRangeBeacons;
    CLLocationManager *_m_locationMgr;
}

@property(nonatomic) _Bool m_isPreviousRequestRunning; // @synthesize m_isPreviousRequestRunning=_m_isPreviousRequestRunning;
@property(retain, nonatomic) CLLocationManager *m_locationMgr; // @synthesize m_locationMgr=_m_locationMgr;
@property(retain, nonatomic) NSMutableArray *shakeRangeBeacons; // @synthesize shakeRangeBeacons=_shakeRangeBeacons;
- (void).cxx_destruct;
- (void)onDidFetchedNoContentWithError:(unsigned long long)arg1;
- (void)onDidFetchedContent:(id)arg1;
- (void)onServiceEnterForeground;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handlePreGetGuideModeInfoResponse:(id)arg1;
- (void)preGetGuideInfoByBeacon:(id)arg1 withOwner:(unsigned long long)arg2 inLocation:(id)arg3;
- (void)uploadBeaconsToSvr;
- (_Bool)isChannelOpen;
- (_Bool)shakeBeaconTabShouldStay;
- (void)openGuideChannelForShopId:(unsigned long long)arg1;
- (void)stopRangeBeacons;
- (void)startRangeBeacons;
- (void)dealloc;
- (id)init;
- (void)cleanGuideModeCache;
- (void)clearIsInShakeViewController;
- (void)markIsInShakeViewController;
- (_Bool)isInShakeViewController;
- (id)shakeVcFlagFilePath;
- (void)clearRedDot:(unsigned long long)arg1;
- (void)markRedDot:(unsigned long long)arg1;
- (_Bool)hasTabRedDot;
- (_Bool)hasShakeRedDot;
- (id)tabRedDotFlagFilePath;
- (id)shakeRedDotFlagFilePath;
- (_Bool)isDeviceHasBeenFirstReadWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)isDeviceHasBeenDiscoveredWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)isDeviceHasBeenReadWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)updateRangedDeviceFirstReadStateByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)updateRangedDeviceDiscoverStateByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)updateRangedDeviceReadStateByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (id)loadRangedDeviceByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)addHadRangedDevice:(id)arg1;
- (id)rangedDevicesFilePath;
- (unsigned int)getShakeTabDisplay;
- (unsigned int)getChannelOpenTime;
- (unsigned int)getChannelOpenMethod;
- (id)loadGuideSwitcgFromFile;
- (_Bool)saveGuideSwitch:(id)arg1;
- (id)guideSwitchFilePath;
- (void)clearLastFetchedContent;
- (id)loadLastFetchedContentFromFile;
- (_Bool)saveLastFetchedContent:(id)arg1;
- (id)lastFetchedContentFilePath;
- (unsigned long long)getShopId;
- (id)loadAuthorizationInfoFromFile;
- (_Bool)saveAuthorizationInfo:(id)arg1;
- (id)authorizedInfoFilePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


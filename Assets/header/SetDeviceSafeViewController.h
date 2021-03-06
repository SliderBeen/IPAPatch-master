//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate-Protocol.h"
#import "NewDeviceLoginViewControllerDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCAccountBindPhoneControlLogicDelegate-Protocol.h"

@class DelaySwitchSettingLogic, MMTableViewInfo, NSString, WCAccountBindPhoneControlLogic;

@interface SetDeviceSafeViewController : MMUIViewController <WCAccountBindPhoneControlLogicDelegate, PBMessageObserverDelegate, NewDeviceLoginViewControllerDelegate, MMTableViewInfoDelegate, UIAlertViewDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    WCAccountBindPhoneControlLogic *m_bindLogic;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnUpdateDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnDelDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnClickRightTopBtn;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)setDeviceName:(id)arg1 deviceInfo:(id)arg2;
- (void)actionCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)onSwitchSafeDeviceVerify:(id)arg1;
- (void)closeSafeDeviceVerify;
- (void)openSafeDeviceVerify;
- (void)onSetSafeDevice;
- (void)bindPhoneReturn;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)newDeviceLoginVerifyOK:(id)arg1 ticket:(id)arg2;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)willAppear;
- (void)updatView;
- (void)updateUnSetView;
- (void)updateSetView;
- (void)updateTopRightButtion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


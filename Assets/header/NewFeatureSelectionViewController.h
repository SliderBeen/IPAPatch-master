//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "VoicePrintLogicControllerDelegate-Protocol.h"
#import "VoicePrintSwitchOpDelegate-Protocol.h"

@class MMTableViewInfo, MMUIView, NSString, VPSwitchOpCgi, VoicePrintLogicControllerFactory;

@interface NewFeatureSelectionViewController : MMUIViewController <VoicePrintSwitchOpDelegate, VoicePrintLogicControllerDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    MMUIView *m_tableHeadView;
    VoicePrintLogicControllerFactory *m_createVoicePrintLogic;
    VoicePrintLogicControllerFactory *m_verifyVoicePrintLogic;
    VPSwitchOpCgi *m_switchOpCgiHandle;
    _Bool _bIsResetPwd;
    _Bool _bIsResetPwdPassVerify;
    _Bool _bIsSwitchOffNeedVerify;
    _Bool m_bIsVoicePrintExist;
}

@property(nonatomic) _Bool m_bIsVoicePrintExist; // @synthesize m_bIsVoicePrintExist;
- (void).cxx_destruct;
- (void)presentResetView;
- (void)OnVerifySuccessful;
- (void)OnClickCanNotUnLockBtn;
- (void)presentTryVerifyView;
- (void)OnCreateSuccessfulAndClickTryVerifyBtn;
- (void)OnCreateSuccessful;
- (void)NotifyUserGetSwitchFail;
- (void)OnSwitchOpErrorWithScene:(unsigned int)arg1 andErrorCode:(int)arg2;
- (void)OnSwitchOp:(int)arg1 andSwitch:(int)arg2 withScene:(unsigned int)arg3;
- (void)ShowVoicePrintVerifyVC;
- (void)ShowVoicePrintReCreateVC;
- (void)ShowVoicePrintCreateVC;
- (void)onActionCellClicked:(id)arg1 indexPath:(id)arg2;
- (void)onOpenVoicePrintFunction;
- (void)reloadTableDataAndView;
- (void)reloadHeaderView;
- (void)pressCreateBtn:(id)arg1;
- (void)makeCustomActionCell:(id)arg1 cellInfo:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initTableView;
- (void)initTitle;
- (void)onCancel:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


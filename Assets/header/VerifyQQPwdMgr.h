//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ICheckQQExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PasswordLogicDelegate-Protocol.h"

@class NSString, PasswordLogic;

@interface VerifyQQPwdMgr : MMService <MMService, PasswordLogicDelegate, ICheckQQExt>
{
    unsigned long long m_lastCanOldWTBufTime;
    PasswordLogic *m_pswLogic;
}

- (void).cxx_destruct;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)passwordLogicPause:(id)arg1;
- (void)passwordLogicStart:(id)arg1;
- (void)passwordLogicCancel:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordFail:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)OnCheckQQ;
- (void)dealloc;
- (id)init;
- (void)unregExt;
- (void)regExt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


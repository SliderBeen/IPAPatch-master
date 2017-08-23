//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayPayPwdViewControllerDelegate-Protocol.h"

@class NSString;

@interface WCPayCreditPayUnbindLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate>
{
}

- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnUnbindCreditPay:(id)arg1;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)BackToRootView;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)confirmToUnbind;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


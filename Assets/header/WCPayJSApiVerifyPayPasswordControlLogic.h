//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayPayPwdViewControllerDelegate-Protocol.h"
#import "WCPayVerifyPayCardViewControllerDelegate-Protocol.h"

@class JSEvent, NSString;
@protocol WCPayJSApiVerifyDelegate;

@interface WCPayJSApiVerifyPayPasswordControlLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate>
{
    JSEvent *m_jsEvent;
    int m_enWCPayCheckAuthorityScene;
    NSString *m_nsAppToken;
    NSString *m_nsResultToken;
    NSString *m_nsRelationKey;
    id <WCPayJSApiVerifyDelegate> _paramDelegate;
}

@property(nonatomic) __weak id <WCPayJSApiVerifyDelegate> paramDelegate; // @synthesize paramDelegate=_paramDelegate;
- (void).cxx_destruct;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(id)arg1 Error:(id)arg2;
- (void)OnGetCheckPayPwdByToken:(id)arg1 Error:(id)arg2;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)checkStopLogic;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


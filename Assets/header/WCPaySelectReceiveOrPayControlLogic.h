//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IWCPayControlLogicExt-Protocol.h"
#import "LocationRetrieveDelegate-Protocol.h"
#import "MMPatternLockLogicDelegate-Protocol.h"
#import "WCPaySelectReceiveOrPayViewControllerDelegate-Protocol.h"

@class LocationRetriever, NSString, WCPaySelectReceiveOrPayViewController;

@interface WCPaySelectReceiveOrPayControlLogic : WCPayControlLogic <WCPaySelectReceiveOrPayViewControllerDelegate, MMPatternLockLogicDelegate, LocationRetrieveDelegate, IWCPayControlLogicExt>
{
    WCPaySelectReceiveOrPayViewController *targetViewController;
    unsigned int _patternLockLogicTag;
    LocationRetriever *locationRetriever;
}

- (void).cxx_destruct;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockLogicOperateCancel;
- (id)getEnteranceViewContoller;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)ReceiveClickLogic;
- (void)OnReceiveButtonClick;
- (void)OnPayButtonClick;
- (void)OnCancel;
- (void)stopLogic;
- (void)startLogic;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


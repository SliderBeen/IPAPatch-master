//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCPayOverseaTransferOrderResp;

@protocol WCPayOverseaTransferOrderCgiDelegate <NSObject>
- (void)onWCPayOverseaTransferOrderBizErrorWithRetCode:(int)arg1 ErrorMsg:(NSString *)arg2;
- (void)onWCPayOverseaTransferOrderCgiErrorWithRetCode:(int)arg1 ErrorMsg:(NSString *)arg2;
- (void)onWCPayOverseaTransferOrderCgiReturnHasTheSameAmountUnreceiveTransferWithResp:(WCPayOverseaTransferOrderResp *)arg1;
- (void)onWCPayOverseaTransferOrderCgiRetrunHasUnreceiveTransferWithResp:(WCPayOverseaTransferOrderResp *)arg1;
- (void)onWCPayOverseaTransferOrderCgiOkWithResp:(WCPayOverseaTransferOrderResp *)arg1;
@end


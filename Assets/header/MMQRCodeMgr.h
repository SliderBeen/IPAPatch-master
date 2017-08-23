//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface MMQRCodeMgr : MMService <MMService, PBMessageObserverDelegate>
{
    NSMutableSet *m_downloadSet;
    NSMutableSet *m_revokeQRCodeSet;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRevokeChatrommQRCodeResponse:(id)arg1;
- (void)handleGetQRCodeResponse:(id)arg1;
- (_Bool)revokeChatRoomQRCode:(id)arg1 qrcode:(id)arg2;
- (void)getNextQRCode:(id)arg1;
- (id)getQRCode:(id)arg1 pullIfNotExist:(_Bool)arg2;
- (void)getQRCodeFromServer:(id)arg1 withStyle:(unsigned int)arg2;
- (unsigned int)getCurStyle:(id)arg1;
- (id)getQRCodeStylePath:(id)arg1;
- (id)getQRCodeImagePath:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"

@class BrandServiceStorage, NSString;

@interface BrandServiceMgr : MMService <MMService, IMsgExt>
{
    BrandServiceStorage *m_serviceStorage;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)GetBrandUserForConnectMessageType:(int)arg1;
- (int)GetConnectorTypeByMessageWrap:(id)arg1;
- (void)saveStorage;
- (void)loadStorage;
- (id)pathForStorage;
- (void)ResetLocationForUser:(id)arg1;
- (_Bool)HasSetLocationForUser:(id)arg1;
- (void)MarkHasSetLocationForUser:(id)arg1;
- (long long)GetContinueLocationReportInterval;
- (id)GetBrandContactListByType:(int)arg1;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


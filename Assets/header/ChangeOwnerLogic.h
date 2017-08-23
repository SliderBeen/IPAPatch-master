//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGroupMgrExt-Protocol.h"
#import "RoomContactSelectDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class CContact, NSString, RoomContactSelectViewController;
@protocol ChangeOwnerLogicDelegate;

@interface ChangeOwnerLogic : NSObject <RoomContactSelectDelegate, contactInfoDelegate, IGroupMgrExt>
{
    id <ChangeOwnerLogicDelegate> m_delegate;
    RoomContactSelectViewController *m_vc;
    _Bool m_bNeedReload;
    CContact *_m_oContact;
}

@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
@property(nonatomic) __weak id <ChangeOwnerLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)OnChangeChatRoomOwner:(id)arg1 NewOwner:(id)arg2 Success:(_Bool)arg3;
- (void)onChangeOwner:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


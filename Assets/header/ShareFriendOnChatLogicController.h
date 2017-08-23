//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "SelectContactsViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CContact, CMessageWrap, ForwardMessageLogicController, NSString, SelectContactsViewController;
@protocol ShareFriendOnChatDelegate;

@interface ShareFriendOnChatLogicController : MMObject <ForwardMessageLogicDelegate, SelectContactsViewControllerDelegate, UIAlertViewDelegate>
{
    id <ShareFriendOnChatDelegate> m_delegate;
    CContact *m_contactToShare;
    CContact *m_contactShareToWho;
    SelectContactsViewController *m_selectContactViewController;
    _Bool m_bIsShareToChatRoom;
    ForwardMessageLogicController *m_forwardMsgLogic;
    CMessageWrap *m_msg;
}

@property(nonatomic) _Bool m_bIsShareToChatRoom; // @synthesize m_bIsShareToChatRoom;
@property(retain, nonatomic) CContact *m_contactShareToWho; // @synthesize m_contactShareToWho;
@property(retain, nonatomic) CContact *m_contactToShare; // @synthesize m_contactToShare;
@property(retain, nonatomic) SelectContactsViewController *selectContactViewController; // @synthesize selectContactViewController=m_selectContactViewController;
- (void).cxx_destruct;
- (_Bool)onFilterSendReceiver:(id)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)start;
- (void)onDismiss:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (id)contactShareMsgFromUser:(id)arg1 toUser:(id)arg2 sharedContact:(id)arg3;
- (void)showConfirmShareView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "ContactsCreateChatRoomLogicDelegate-Protocol.h"
#import "IWCPayControlLogicExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"
#import "WCRedEnvelopesMadeHBSuccessViewDelegate-Protocol.h"
#import "WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesMultiSelectContactsViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesSessionSelectViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesWelcomePageViewControllerDelegate-Protocol.h"

@class ContactsCreateChatRoomLogic, NSString, WCPayControlData, WCPayPayMoneyLogic, WCRedEnvelopesMadeHBSuccessView;

@interface WCRedEnvelopesSendControlLogic : WCRedEnvelopesControlLogic <MMWebViewDelegate, UIAlertViewDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesWelcomePageViewControllerDelegate, WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCActionSheetDelegate, IWCPayControlLogicExt, WCRedEnvelopesMadeHBSuccessViewDelegate, ContactsCreateChatRoomLogicDelegate>
{
    WCPayPayMoneyLogic *m_payMoneyLogic;
    WCPayControlData *oPayData;
    int m_scene;
    int m_enMadeRedEnvelopesType;
    WCRedEnvelopesMadeHBSuccessView *m_oWCRedEnvelopesMadeHBSuccessView;
    ContactsCreateChatRoomLogic *createChatRoomLogic;
    NSString *_curAlertRightUrl;
}

@property(retain, nonatomic) NSString *curAlertRightUrl; // @synthesize curAlertRightUrl=_curAlertRightUrl;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWebViewWillClose:(id)arg1;
- (void)setScene:(int)arg1;
- (void)OnJumpedToReceiveList;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)OnGenH5RedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryRedEnvelopesUserInfo:(id)arg1 Error:(id)arg2;
- (_Bool)gotoViewController:(id)arg1;
- (void)WCRedEnvelopesMadeHBSuccessViewSendHB;
- (void)WCRedEnvelopesMadeHBSuccessViewBack;
- (void)OnWCRedEnvelopesSendSuccessViewAnimationDidStop;
- (void)OnCreateRoom:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (_Bool)OnFilterSessionContact:(id)arg1;
- (void)GotoNotReceivedListLogic;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnConfirmCreateChatRoomAndSendMessageSelectSessionViewController;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnGotoRootViewController;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)gotoSelectSessionViewController;
- (void)OnClickNotReceivedButton;
- (void)OnMakeWCRedEnvelopesButtonClick:(id)arg1;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
- (void)OnWCRedEnvelopesWelcomePageViewControllerSelectNormalRedEnvelopes;
- (void)OnWCRedEnvelopesWelcomePageViewControllerSelectRadmonRedEnvelopes;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnWCRedEnvelopesWelcomePageViewControllerMyRedEnvelopesList;
- (void)OnWCRedEnvelopesWelcomePageViewControllerBack;
- (void)stopLogic;
- (void)dealloc;
- (void)startLogic;
- (id)initWithData:(id)arg1 Scene:(int)arg2 RedEnvelopesType:(int)arg3;
- (id)initWithData:(id)arg1;
- (id)getData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


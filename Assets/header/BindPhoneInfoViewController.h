//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AccountBaseViewController.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCAccountBindPhoneControlLogicDelegate-Protocol.h"

@class MMAnimationTipView, MMTableViewInfo, NSString, UIButton, UIImageView, WCAccountBindPhoneControlLogic;
@protocol VerifyPhoneDelegate;

@interface BindPhoneInfoViewController : AccountBaseViewController <UIAlertViewDelegate, PBMessageObserverDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    MMAnimationTipView *m_tipView;
    int m_alertStatus;
    UIImageView *m_bindImageView;
    UIButton *m_unChangeButton;
    UIButton *m_inviteFriendButton;
    id <VerifyPhoneDelegate> m_delegate;
    MMTableViewInfo *m_tableViewInfo;
    unsigned int m_uiFromScene;
    NSString *m_nsOldPhone;
    WCAccountBindPhoneControlLogic *m_bindLogic;
}

@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene;
@property(nonatomic) __weak id <VerifyPhoneDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)bindPhoneReturn;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)popBack;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)dismissAndBack:(id)arg1;
- (void)updateView;
- (void)showNoVerifyView;
- (void)showBindedView;
- (void)updateInviteFriendBtnTitle;
- (void)OnOperate;
- (void)onSyncAddressBookSwitch:(id)arg1;
- (void)cancelCloseSyncAddressBook:(id)arg1;
- (void)closeSyncAddressBook;
- (void)showNoBindView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onDelete:(id)arg1;
- (void)onPrivacy;
- (void)onUnBind;
- (void)onChange;
- (void)onBind;
- (void)startSyncAddressBook;
- (void)onUnBindAccount;
- (void)unBoundSucess;
- (void)showInviteFriendView;
- (void)showValifyView;
- (id)getNotVerifyPhone;
- (id)getBoundPhone;
- (_Bool)notVerifyed;
- (_Bool)hasBound;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


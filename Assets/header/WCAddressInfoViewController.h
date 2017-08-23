//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAddressBaseViewController.h"

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"
#import "MMPickLocationViewControllerDelegate-Protocol.h"

@class MMPickLocationViewController, NSIndexPath, NSMutableArray, NSString, UIButton, WCAddressPickerItem, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCBaseTextViewItem;
@protocol WCAddressInfoViewControllerDelegate;

@interface WCAddressInfoViewController : WCAddressBaseViewController <ABPeoplePickerNavigationControllerDelegate, CNContactPickerDelegate, MMPickLocationViewControllerDelegate>
{
    UIButton *m_footerButton;
    WCBaseTextFieldItem *m_textFieldNameItem;
    WCAddressPickerItem *m_pickerDistrictItem;
    WCBaseTextViewItem *m_textViewStreetItem;
    WCBaseTextFieldItem *m_textFieldPostalCodeItem;
    WCBaseTextFieldItem *m_textFieldPhoneItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    NSMutableArray *m_arrayInfo;
    id <WCAddressInfoViewControllerDelegate> m_delegate;
    NSIndexPath *m_selectItemIndex;
    MMPickLocationViewController *_pickLocationViewController;
}

@property(retain, nonatomic) MMPickLocationViewController *pickLocationViewController; // @synthesize pickLocationViewController=_pickLocationViewController;
- (void).cxx_destruct;
- (void)onCancelSeletctedLocation;
- (id)onGetRightBarButton;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)onFinishSelectedLocation;
- (void)addressButtonDidClicked;
- (void)contactButtonDidClicked;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (_Bool)checkIsEmpty:(id)arg1;
- (void)onNext;
- (_Bool)getData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)OnCancelClick;
- (void)OnComfireEnsureAlert;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)initInfoTemplate;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


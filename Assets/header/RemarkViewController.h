//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CommonImageBrowserDelegate-Protocol.h"
#import "ContactRemarkImgExt-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CContact, ContactRemarkLogic, MMTableViewInfo, MMTableViewSectionInfo, NSMutableArray, NSMutableDictionary, NSString, UIImage, UIImageView, UILabel, UITextField, UITextView, UIView;

@interface RemarkViewController : MMUIViewController <ContactRemarkImgExt, UITextViewDelegate, UITextFieldDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate, CommonImageBrowserDelegate, UIAlertViewDelegate, MMTableViewInfoDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    MMTableViewSectionInfo *m_phoneSection;
    MMTableViewSectionInfo *m_descSection;
    NSMutableArray *m_arrPhoneItem;
    ContactRemarkLogic *m_logic;
    CContact *m_contact;
    UIImage *m_cardImg;
    UITextField *m_nameView;
    UITextView *m_descView;
    UILabel *m_descHint;
    UIView *m_tagView;
    UIImageView *m_imageView;
    NSMutableDictionary *m_phoneEdit;
    long long m_firstResponderIndex;
    _Bool m_downloadingImg;
    _Bool m_isDownloadFail;
    _Bool m_hasEditImg;
    _Bool m_needEditState;
    _Bool m_deleteHashPhone;
    NSString *m_recommandRemark;
    _Bool m_bNeedReloadSubviews;
    _Bool m_bIsRemarkEdit;
}

@property(retain, nonatomic) NSString *recommandRemark; // @synthesize recommandRemark=m_recommandRemark;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) _Bool needEditState; // @synthesize needEditState=m_needEditState;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollRectToVisibleForView:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)adjustDescTextView;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)executeOpLog;
- (void)onDownloadCardImg:(id)arg1;
- (void)onUploadCardImgFinish:(id)arg1 returnUrl:(id)arg2;
- (void)uploadCardImg;
- (void)onPerformEdit;
- (_Bool)checkEdit;
- (id)checkEditPhone;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteImage;
- (void)onDeleteItemAtIndex:(unsigned long long)arg1;
- (void)onDeleteImage;
- (void)showImg:(id)arg1;
- (void)showTagEdit;
- (void)useRecommandRemark;
- (void)hideKeyboard;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onDismissRemarkView:(id)arg1;
- (void)dealloc;
- (void)reflashImageCell;
- (id)makeRecommBtnView;
- (_Bool)needRecommBtn;
- (void)onModifyContact:(id)arg1;
- (id)getRemarkText;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)makeRemarkCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeTagsCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeDescriptionCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeDescView;
- (void)fixDescViewHeight:(double)arg1;
- (void)makeImageCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeImageView;
- (void)dottedLine:(id)arg1;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)showPhoneTip;
- (void)onAddPhone;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (id)getPhoneTextFieldAt:(long long)arg1;
- (id)getPhoneItemInfoAt:(unsigned long long)arg1;
- (void)reloadTableView;
- (void)viewDidLoad;
- (void)startDownCardImg;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


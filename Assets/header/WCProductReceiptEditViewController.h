//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MMTableView, MMTableViewCellInfo, MMTableViewInfo, NSMutableArray, NSString;
@protocol WCProudctReceiptEditDelegate;

@interface WCProductReceiptEditViewController : MMUIViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    MMTableViewCellInfo *m_editInfo;
    MMTableView *m_searchTableView;
    NSMutableArray *m_sourceArray;
    NSMutableArray *m_destArray;
    NSString *m_receiptStr;
    double m_keyBoardHeight;
    id <WCProudctReceiptEditDelegate> m_delegate;
}

@property(retain, nonatomic) NSString *m_receiptStr; // @synthesize m_receiptStr;
@property(retain, nonatomic) NSMutableArray *m_destArray; // @synthesize m_destArray;
@property(retain, nonatomic) NSMutableArray *m_sourceArray; // @synthesize m_sourceArray;
@property(nonatomic) __weak id <WCProudctReceiptEditDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateDestAry:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onSaveText;
- (void)disMissThisViewAnimated;
- (void)reloadSearchTableView;
- (void)keyboardWillShow:(id)arg1;
- (id)initWithReceiptStr:(id)arg1;
- (void)onClearHistoryRecord;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)initSearchTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMPickerViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MMPickerView, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UITextField;

@interface MMKVLogDebugViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMPickerViewDelegate, UIGestureRecognizerDelegate, UITextFieldDelegate>
{
    MMTableView *_tableView;
    NSMutableDictionary *_kvLogDic;
    NSMutableArray *_selectedKvList;
    NSString *_selectedLogId;
    MMPickerView *m_pickerView;
    unsigned long long _fromScene;
    UITextField *m_textField;
    UIButton *m_selectBtn;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genShowLabel:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sortedAllKey;
- (void)MMPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)setListWithLogId;
- (id)convertLogid2IdKeyValue:(id)arg1 mul:(_Bool)arg2;
- (id)convertLogid2IdKey:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)switchInput:(id)arg1;
- (void)onClickSelectLogId:(id)arg1;
- (void)onClickClear:(id)arg1;
- (void)onClickRefresh:(id)arg1;
- (id)genTableHeaderView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithFromScene:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


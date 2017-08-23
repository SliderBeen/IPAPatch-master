//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "WCBizPickerViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, WCBizPickerView, WCPayBindCardInfo;

@interface WCPayBindCardItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate>
{
    UILabel *m_textLabel;
    WCBizPickerView *m_pickerView;
    NSMutableArray *m_arrSection;
    WCPayBindCardInfo *m_selectType;
    long long m_iCurrentSectoin;
    _Bool m_bUsedNewCardControl;
    NSString *m_nsNewCardControlWording;
}

- (void).cxx_destruct;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void)WCBizPickerViewDidCancel;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)setEnable:(_Bool)arg1;
- (void)addNewCardControl:(id)arg1;
- (void)setBindCardList:(id)arg1;
- (void)setSelectNewCardControl;
- (void)setSelectBindCard:(id)arg1;
- (void)setTextFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setText:(id)arg1;
- (id)getValue;
- (void)becomeFirstResponder;
- (id)getStringFrom:(id)arg1;
- (void)dealloc;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


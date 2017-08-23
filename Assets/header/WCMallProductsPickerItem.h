//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "WCBizPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIImageView, UILabel, UIPickerView, WCMallPayProductInfo;

@interface WCMallProductsPickerItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate, WCBizPickerViewDelegate>
{
    NSArray *m_arrProducts;
    WCMallPayProductInfo *m_oSelectedPayProductInfo;
    UIPickerView *m_pickerView;
    UIImageView *m_oRightCrossImageView;
    UILabel *m_oPriceLabel;
}

- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)UIPickerViewDidFinish;
- (void)UIPickerViewDidCancel;
- (id)getValue;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)SetText:(unsigned int)arg1;
- (void)SetText;
- (void)becomeFirstResponder;
- (void)dealloc;
- (void)initView:(struct CGRect)arg1;
- (id)getSelectedProductInfo;
- (void)setPriceLabelText:(id)arg1;
- (void)setSeletedProductLatestInfo:(id)arg1;
- (void)setSeletedProduct:(id)arg1;
- (void)setProductsList:(id)arg1;
- (void)updateFlowProducts:(id)arg1;
- (id)productInfoInProductComponentForRow:(unsigned long long)arg1 inPickerView:(id)arg2;
- (_Bool)multiComponets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


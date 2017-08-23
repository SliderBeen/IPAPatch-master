//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, TenpayDelegate;

@interface TenpayEditableBankNum : UIView <UITextFieldDelegate>
{
    TenpayDelegate *_dataHandler;
    NSMutableArray *arrTextField;
}

- (void)textFieldDidBeginEditing:(id)arg1;
- (id)Get3DesEncryptData;
- (id)GetRsaEncryptData;
- (id)getFullBankNum;
- (void)SelectRsaKey:(int)arg1;
- (void)SetSalt:(id)arg1;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)setKeyboradImgWithNumNormal:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 andCodeNum:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


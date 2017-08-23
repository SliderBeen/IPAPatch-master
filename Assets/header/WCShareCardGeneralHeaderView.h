//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCShareCardBaseHeaderView.h"

@protocol WCShareCardGeneralCardHeaderDelegate;

@interface WCShareCardGeneralHeaderView : WCShareCardBaseHeaderView
{
    _Bool _bIsShowUseCodeBtn;
    _Bool _bIsIphone5ShareCardMode;
    id <WCShareCardGeneralCardHeaderDelegate> _delegate;
}

@property(nonatomic) _Bool bIsIphone5ShareCardMode; // @synthesize bIsIphone5ShareCardMode=_bIsIphone5ShareCardMode;
@property(nonatomic) _Bool bIsShowUseCodeBtn; // @synthesize bIsShowUseCodeBtn=_bIsShowUseCodeBtn;
@property(nonatomic) __weak id <WCShareCardGeneralCardHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)getApplyBtnFrame;
- (double)getRealHeight;
- (void)onClickOperationBtn:(id)arg1;
- (void)onClickApplyBtn:(id)arg1;
- (_Bool)hasLimitField;
- (_Bool)hasOperateField;
- (id)getLogoName;
- (double)initSubViewWhenHasNoOperateFieldWithTitleBottom:(double)arg1;
- (double)initSubViewWhenHasOperateFieldWithTitleBottom:(double)arg1;
- (double)initSubViewWhenHasLimitFieldWithTitleBottom:(double)arg1;
- (void)initGeneralCardContentViewWithStartY:(double)arg1;
- (void)initView;
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 isShareCard:(_Bool)arg3 isShowUseCodeBtn:(_Bool)arg4 isIphone5ShareCardMode:(_Bool)arg5 cardStatus:(int)arg6 isNeedHideAccecptBtn:(_Bool)arg7 delegate:(id)arg8;

@end


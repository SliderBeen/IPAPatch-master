//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "WCPayLogicMgrExt-Protocol.h"

@class NSString, UIImageView, UILabel, WCPayBankLogoView, WCPayBindCardInfo;

@interface WCPayCardDetailView : UIButton <WCPayLogicMgrExt>
{
    WCPayBindCardInfo *m_info;
    UIImageView *backView;
    UIImageView *waterMaskView;
    WCPayBankLogoView *logoView;
    _Bool needUpdateResource;
    UILabel *bankTypeLabel;
}

@property(nonatomic) _Bool needUpdateResource; // @synthesize needUpdateResource;
- (void).cxx_destruct;
- (void)OnGetBankResourcesNotification:(id)arg1;
- (id)getInfo;
- (void)CancelPerformGetData;
- (void)dealloc;
- (id)initWithBindCardInfo:(id)arg1 Data:(id)arg2;
- (void)initViewWithBindCardInfo:(id)arg1 Data:(id)arg2;
- (void)OnGetBankResources:(id)arg1 Error:(id)arg2;
- (void)OnGetBankPackage:(id)arg1 Error:(id)arg2;
- (void)OnSuccessGetBankResources:(id)arg1;
- (void)OnSuccessGetBankPackage:(id)arg1;
- (void)SaveAndShowBankLogoImage:(id)arg1;
- (void)SaveAndShowBackGroundImage:(id)arg1;
- (void)layoutLogoView:(id)arg1;
- (void)SaveAndShowWaterMaskImage:(id)arg1;
- (void)GetAboutAllImage;
- (id)getBackGroundImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


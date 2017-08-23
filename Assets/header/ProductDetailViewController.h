//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IScanBookMgrExt-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "ProductDetailLogicHelperDelegate-Protocol.h"
#import "ProductTableViewDelegate-Protocol.h"
#import "SendAppMsgHandleDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMAnimationTipView, MMWebImageView, NSString, ProductDetailLogicHelper, ProductTableView, ScanProductItem, SendAppMsgHandler, UIButton, UIImage, UIImageView, UIView;
@protocol ProductDetailViewControllerDelegate;

@interface ProductDetailViewController : MMUIViewController <MMWebImageViewDelegate, ProductDetailLogicHelperDelegate, ProductTableViewDelegate, WCActionSheetDelegate, SendAppMsgHandleDelegate, IScanBookMgrExt>
{
    _Bool _canShareToFriend;
    _Bool _canShareToWC;
    _Bool _canAddToFav;
    _Bool _canEditTag;
    _Bool _canDelete;
    id _userdata;
    UIView *_infoView;
    double _infoViewHeight;
    MMWebImageView *_infoBgView;
    UIImageView *_blurView;
    UIImage *_snapShotImg;
    UIView *_maskView;
    MMWebImageView *_thumbImgView;
    UIButton *_containView;
    ScanProductItem *_productItem;
    NSString *_qrcodeUrl;
    ProductTableView *_productTableView;
    SendAppMsgHandler *_sendAppMsgHandler;
    MMAnimationTipView *_tipView;
    ProductDetailLogicHelper *_logicHelper;
    unsigned int _fromScene;
    UIImageView *_disclosureBtn;
    int _functionType;
    double beginTime;
    id <ProductDetailViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <ProductDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id userdata; // @synthesize userdata=_userdata;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool canEditTag; // @synthesize canEditTag=_canEditTag;
@property(nonatomic) _Bool canAddToFav; // @synthesize canAddToFav=_canAddToFav;
@property(nonatomic) _Bool canShareToWC; // @synthesize canShareToWC=_canShareToWC;
@property(nonatomic) _Bool canShareToFriend; // @synthesize canShareToFriend=_canShareToFriend;
- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (void)onEditProductTag;
- (void)onDeleteProduct;
- (void)OnSendAppMsgOK;
- (void)updateInfoViewAlpha:(double)arg1;
- (void)onProuductTableViewDidScroll:(id)arg1;
- (void)updateInfoViewSnapshot;
- (id)getThumbImageData;
- (id)getMessageWrap:(id)arg1;
- (id)getUpLoadTask:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAction:(id)arg1;
- (void)onCertificationClick;
- (void)onHeaderClick;
- (void)onExposeClick;
- (void)onIntroTitleClick;
- (void)dealloc;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)OnReturn;
- (void)initView;
- (unsigned int)getJumpProfileScenceFromFunctionType;
- (unsigned int)getGetA8KeyScenceFromFunctionType;
- (void)setTableFooterView;
- (void)initTableView;
- (void)headerTouchUp:(id)arg1;
- (void)headerTouchDown:(id)arg1;
- (void)initInfoView;
- (_Bool)useTransparentNavibar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onAsyncDataRefreshed:(id)arg1;
- (void)OnGetRemoteProductItem:(id)arg1 QRCodeUrl:(id)arg2 Error:(int)arg3;
- (void)startAsyncGetActionInfo;
- (id)initWithExtContent:(id)arg1 Scence:(unsigned int)arg2;
- (id)initWithQRCodeUrl:(id)arg1 Scence:(unsigned int)arg2 FunctionType:(int)arg3;
- (id)initWithScanItem:(id)arg1 FunctionType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


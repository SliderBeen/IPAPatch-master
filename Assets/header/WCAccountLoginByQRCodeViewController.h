//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLConnection, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UIView, WCAccountQRCodeLoginControlLogic;
@protocol WCAccountLoginByQRCodeViewControllerDelegate;

@interface WCAccountLoginByQRCodeViewController : WCAccountBaseViewController <NSURLConnectionDelegate>
{
    UIView *_scanQRCodeView;
    UIView *_qrCodeFrameView;
    UIImageView *_qrCodeImgView;
    UIActivityIndicatorView *_loadingView;
    UIView *_qrCodeScannedView;
    UIImageView *_headImgView;
    UIImage *_headImg;
    UILabel *_tipsLabel;
    UILabel *_descriptionLabel;
    UILabel *_nickNameLabel;
    UIButton *_cancelLogIn;
    UIButton *_refreshBtn;
    UIImageView *_qrCodeFailedImgView;
    UIActivityIndicatorView *_logingLoading;
    UIButton *_switchAccountBtn;
    NSURLConnection *_downloadConnection;
    _Bool _isDownloading;
    NSMutableData *_headImgData;
    id <WCAccountLoginByQRCodeViewControllerDelegate> m_delegate;
    WCAccountQRCodeLoginControlLogic *_delegateLogic;
}

- (void).cxx_destruct;
- (void)viewDidTransitionToNewSize;
- (void)setDelegate:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)startDownloadHeadImgWithURL:(id)arg1;
- (void)onRefreshBtnClicked;
- (void)onCancel;
- (void)createQRCodeFailedView;
- (void)createDescriptionView;
- (void)createTipsView;
- (void)createLoadingView;
- (void)createQRCodeView;
- (void)createQRCodeFrame;
- (void)createNickNameLabel;
- (void)createHeadImgView;
- (void)createQRCodeScannedView;
- (void)createScanQRCodeView;
- (void)removeRefreshBtn;
- (void)showQRCodeExpiredView;
- (void)showQRCodeFailedView;
- (void)showFailedView;
- (void)showLoginingViewWithNickName:(id)arg1 headImgURL:(id)arg2;
- (void)showQRCodeScanView;
- (void)showUserInfoViewWithHeadImgURL:(id)arg1 nickName:(id)arg2;
- (void)onGetQRCodeImgFailed;
- (void)onGetQRCodeImg:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


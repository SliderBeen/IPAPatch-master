//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCPayChooseCardViewControllerDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"

@class MMUIButton, MMUILabel, MMUIView, NSDictionary, NSString, UIButton, UITextField, WCPayBalanceTipsLogic, WCPayBindCardInfo, WCPayNoticeBanner;
@protocol WCPayNewFetchViewControllerDelegate;

@interface WCPayNewFetchViewController : WCPayBaseViewController <WCPayChooseCardViewControllerDelegate, UITextFieldDelegate, UITableViewDelegate, WCPayNoticeBannerDelegate, MMTipsViewControllerDelegate>
{
    WCPayBindCardInfo *m_oCardInfo;
    WCPayNoticeBanner *m_banner;
    MMUIView *m_containerView;
    MMUIView *m_cardBgView;
    MMUILabel *m_cardLabel;
    MMUIButton *m_bankNameBtn;
    MMUILabel *m_bankChargeFeeLabel;
    MMUIView *m_fetchBgView;
    MMUILabel *m_fetchLabel;
    MMUILabel *m_symbolLabel;
    UITextField *m_fetchMoneyFeild;
    MMUIView *m_fetchLine;
    MMUILabel *m_fetchTipLabel;
    MMUIButton *m_fetchAllBtn;
    MMUIView *m_bottomBgView;
    MMUILabel *m_bankArriveTimeLabel;
    UIButton *m_fetchNextBtn;
    WCPayBalanceTipsLogic *tipLogic;
    _Bool m_bFetchAll;
    NSDictionary *m_dicBanners;
    id <WCPayNewFetchViewControllerDelegate> _m_delegate;
}

@property(nonatomic) __weak id <WCPayNewFetchViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)checkAndShowFirstVisitTips;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)showFetchRuleTips;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (double)getRealtimeChargeFeeFor:(double)arg1;
- (void)showFetchBalanceTip;
- (void)showChargeFeeTip:(double)arg1;
- (void)showBeyondFetchBalanceErrorTip;
- (void)updateFetchTipLable:(id)arg1;
- (void)textFieldDidChange;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)callAddNewCardDelegate;
- (void)chooseCardViewControllerChooseAddNewCard;
- (void)chooseCardViewControllerChooseCardInfo:(id)arg1;
- (void)onFetchAllBtnClick:(id)arg1;
- (void)doNext;
- (void)onClickBankName:(id)arg1;
- (void)onClickNext:(id)arg1;
- (void)onCancelClick;
- (void)onRightBarButtonClick;
- (void)setCurrentCardInfo:(id)arg1;
- (id)getNoticeBanner;
- (void)setCardInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)getCardNameFrom:(id)arg1;
- (id)genLabelWithFontSize:(int)arg1 textColor:(id)arg2;
- (void)layoutBottomView;
- (void)layoutFetchInfo;
- (void)layoutBankCardInfo;
- (void)layoutAllViews;
- (void)setupView;
- (void)setupNavigationBar;
- (id)getFirstAvailableCard;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


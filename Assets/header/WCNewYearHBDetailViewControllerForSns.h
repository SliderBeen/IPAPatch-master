//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class MMTableView, MMUIWindow, MMWebImageView, NSString, UILabel, UIView, WCMediaItem, WCNewYearHBDetailDataForSns;

@interface WCNewYearHBDetailViewControllerForSns : MMUIViewController <WCFacadeExt, UITableViewDelegate, UITableViewDataSource>
{
    WCMediaItem *_mediaItem;
    MMUIWindow *_fullScreenWindow;
    UIView *_bgView;
    UIView *_coverFrameView;
    MMWebImageView *_coverImgView;
    double _curProgress;
    UILabel *_moneyLabel;
    UILabel *_tipsLabel;
    MMTableView *m_tableView;
    UIView *m_oHeaderView;
    WCNewYearHBDetailDataForSns *_detailData;
    UILabel *_rmbUnitLabel;
}

- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getUsernameListFromMyContactList:(unsigned long long)arg1;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(int)arg2;
- (void)setNaviBarTransparent:(_Bool)arg1;
- (id)findBarButtonView:(id)arg1;
- (id)getEnterpriseLogo:(unsigned int)arg1;
- (id)getEnterpriseName:(unsigned int)arg1;
- (void)updateWithDetailData:(id)arg1;
- (void)setupSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (id)GetHeaderView:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)initTableView;
- (_Bool)useTransparentNavibar;
- (void)initGradientBgView;
- (void)onClose;
- (void)initNavBar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


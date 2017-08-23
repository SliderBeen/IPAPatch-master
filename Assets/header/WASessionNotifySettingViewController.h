//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WASessionNotifyMgrExtension-Protocol.h"
#import "WASessionNotifyTableViewCellDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSNumber, NSString, UITableView, WAContactGetter;

@interface WASessionNotifySettingViewController : MMUIViewController <WASessionNotifyMgrExtension, UITableViewDelegate, UITableViewDataSource, WASessionNotifyTableViewCellDelegate, MMTipsViewControllerDelegate>
{
    NSNumber *_originGlobalOpenStatus;
    NSArray *_arrOriginCloseItem;
    NSNumber *_operatedGlobalOpenStatus;
    NSMutableArray *_arrOperatedOpenUserName;
    NSString *_askingOpenUserName;
    UITableView *_tableView;
    WAContactGetter *m_contactGetter;
    NSString *_sceneID;
}

@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void).cxx_destruct;
- (void)onSessionNotifyUpdate;
- (void)checkAndSendNotifyOperationToServer;
- (_Bool)currentGlobalNotifyOpenStatus;
- (void)removeUserNameInClostItemList:(id)arg1;
- (void)updateNotifyData;
- (void)initData;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onClickNotifyOpenButton:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)genHeaderFooterView:(id)arg1 topMargin:(unsigned long long)arg2 bottomMargin:(unsigned long long)arg3;
- (void)onClickGlobalNotifySwitch:(id)arg1;
- (id)makeSessionListCellWithRow:(long long)arg1 tableView:(id)arg2;
- (id)makeGolbalNotifyCell;
- (void)reloadTableView;
- (void)layoutTableView;
- (void)layoutAllSubview;
- (void)initTableView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


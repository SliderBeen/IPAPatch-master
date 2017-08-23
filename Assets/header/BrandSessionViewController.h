//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BrandArticleSearchControllerDelegate-Protocol.h"
#import "BrandSessionMgrExt-Protocol.h"
#import "IWCDeviceBrandMgrExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class BrandArticleSearchController, MMTableView, NSString;

@interface BrandSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, BrandArticleSearchControllerDelegate, WCActionSheetDelegate, IWCDeviceBrandMgrExt, BrandSessionMgrExt>
{
    MMTableView *m_tableView;
    BrandArticleSearchController *m_articleSearchController;
    unsigned int m_stayTimeStart;
}

- (void).cxx_destruct;
- (void)endRecordSessionListStayTime;
- (void)abortRecordSessionListStayTime;
- (void)startRecordSessionListStayTime;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)viewControllerForBrandArticleSearch;
- (void)initSearchBar;
- (void)onBrandSessionAllDeleted;
- (void)handleAllBrandSessionDeleted;
- (void)handleAllBrandSessionDeletedStep2;
- (void)onBrandSessionsChanged;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)unsubscribeOnTableView:(id)arg1 IndexPath:(id)arg2;
- (void)deleteSessionOnIndexPath:(id)arg1;
- (void)updateTopSessionCellBackgroundColor:(id)arg1 withCellData:(id)arg2;
- (void)updateSessionCellMenu:(id)arg1 withCellData:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString;
@protocol WCPayF2FReceiveHistoryViewControllerDelegate;

@interface WCPayF2FReceiveHistoryViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _bIsLoadingMorePrevious;
    _Bool _bIsLoadingMoreNew;
    _Bool _bIsLoadMoreDataEnd;
    _Bool _bIsLoadNewDataEnd;
    id <WCPayF2FReceiveHistoryViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    NSMutableArray *_historyList;
}

@property(nonatomic) _Bool bIsLoadNewDataEnd; // @synthesize bIsLoadNewDataEnd=_bIsLoadNewDataEnd;
@property(nonatomic) _Bool bIsLoadMoreDataEnd; // @synthesize bIsLoadMoreDataEnd=_bIsLoadMoreDataEnd;
@property(nonatomic) _Bool bIsLoadingMoreNew; // @synthesize bIsLoadingMoreNew=_bIsLoadingMoreNew;
@property(nonatomic) _Bool bIsLoadingMorePrevious; // @synthesize bIsLoadingMorePrevious=_bIsLoadingMorePrevious;
@property(retain, nonatomic) NSMutableArray *historyList; // @synthesize historyList=_historyList;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayF2FReceiveHistoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)genTableHeaderView;
- (id)genTableFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onHistoryItemHasBeenPress:(id)arg1;
- (void)makeRecordHistoryItemContentView:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupEmptyTipsView;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)viewControllerBack;
- (void)refreshControllerWithLoadDataFail;
- (void)replaceControllerRecordHistoryListAfterSelectTime:(id)arg1;
- (void)refreshControllerWithLoadMoreNewRecordHistoryList:(id)arg1 isDataLoadEnd:(_Bool)arg2;
- (void)refreshControllerWithLoadMorePreviousRecordHistoryList:(id)arg1 isDataLoadEnd:(_Bool)arg2 isRefresh:(_Bool)arg3;
- (void)setupData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


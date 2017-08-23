//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "GameCenterMsgCenterCellDataSource-Protocol.h"
#import "GameCenterMsgCenterCellViewDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIView, WCTimeLineFooterView;

@interface GameCenterMsgCenterViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, tableViewDelegate, WCActionSheetDelegate, MMRefreshTableFooterDelegate, GameCenterMsgCenterCellDataSource, GameCenterMsgCenterCellViewDelegate>
{
    _Bool _hasMore;
    _Bool _showHeader;
    int _sourceScene;
    MMTableView *_msgTableView;
    WCTimeLineFooterView *_footerView;
    NSMutableArray *_readMsgList;
    NSMutableArray *_unReadMsgList;
    UIView *_splitView;
    NSMutableDictionary *_cellCache;
    NSMutableDictionary *_cellHeightCache;
    long long _msgListType;
    NSString *_msgCenterSettingUrl;
}

@property(retain, nonatomic) NSString *msgCenterSettingUrl; // @synthesize msgCenterSettingUrl=_msgCenterSettingUrl;
@property(nonatomic) _Bool showHeader; // @synthesize showHeader=_showHeader;
@property(nonatomic) long long msgListType; // @synthesize msgListType=_msgListType;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSMutableDictionary *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
@property(retain, nonatomic) NSMutableDictionary *cellCache; // @synthesize cellCache=_cellCache;
@property(retain, nonatomic) UIView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) NSMutableArray *unReadMsgList; // @synthesize unReadMsgList=_unReadMsgList;
@property(retain, nonatomic) NSMutableArray *readMsgList; // @synthesize readMsgList=_readMsgList;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *msgTableView; // @synthesize msgTableView=_msgTableView;
@property(nonatomic) int sourceScene; // @synthesize sourceScene=_sourceScene;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)launchAppWithJumpDetailFallback:(id)arg1 Action:(int *)arg2;
- (int)jumpToDetailView:(id)arg1;
- (void)jumpToWebView:(id)arg1;
- (void)loadReadMsgNextPageList:(unsigned int)arg1;
- (void)onMsgCenterHeaderBtnClicked;
- (long long)getCurrentMsgListType;
- (void)initCurrentMsgListType;
- (id)getMsgItem:(long long)arg1 MsgIndex:(long long *)arg2 isInUnRead:(_Bool *)arg3;
- (void)onLoadMore;
- (id)getCellContentView:(id)arg1;
- (id)getSplitView;
- (long long)getRowNum;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClearMsgList;
- (void)onMessageCardClick:(id)arg1;
- (void)onMergeUserImageClick:(id)arg1 Url:(id)arg2;
- (void)onUserNickNameClick:(id)arg1;
- (void)onUserHeadClick:(id)arg1;
- (void)jumpWithPosition:(unsigned int)arg1 JumpInfo:(id)arg2 MsgItem:(id)arg3;
- (void)onContentPicClick:(id)arg1;
- (void)onSecondLineClick:(id)arg1;
- (void)onSourceClick:(id)arg1;
- (void)cellForView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateTableFooterView;
- (void)initHeaderView;
- (id)getFirstPageReadMsgList:(unsigned int)arg1;
- (unsigned int)getUnReadMsgList;
- (void)initView;
- (void)initHeaderSetting;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initFirstPageMsgList;
- (id)initWithSourceScene:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


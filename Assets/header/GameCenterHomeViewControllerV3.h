//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "GameCenterBottomViewDelegate-Protocol.h"
#import "GameCenterHeaderActionDelegate-Protocol.h"
#import "GameCenterHotAdListViewDelegate-Protocol.h"
#import "GameCenterMyGameViewDelegate-Protocol.h"
#import "GameCenterRankedGameInfoCellDelegate-Protocol.h"
#import "GameCenterRecentGamesCellDelegate-Protocol.h"
#import "GameCenterSearchLogicControllerDelegate-Protocol.h"
#import "GameCenterTodayRecommendViewDelegate-Protocol.h"
#import "GameCenterTopRecommendViewDelegate-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GameCenterBottomView, GameCenterHeaderView, GameCenterHomeLogicControllerV3, GameCenterSearchLogicController, MMLoadingView, MMTableView, NSMutableArray, NSMutableSet, NSString, UIView;

@interface GameCenterHomeViewControllerV3 : MMUIViewController <MMSearchBarDelegate, GameCenterSearchLogicControllerDelegate, GameCenterMyGameViewDelegate, GameCenterTodayRecommendViewDelegate, GameCenterTopRecommendViewDelegate, GameCenterHotAdListViewDelegate, GameCenterBottomViewDelegate, UITableViewDelegate, UITableViewDataSource, GameCenterHeaderActionDelegate, GameCenterRecentGamesCellDelegate, GameCenterRankedGameInfoCellDelegate>
{
    NSMutableArray *_resultGroupList;
    MMLoadingView *_loadingView;
    UIView *_bgBlurView;
    GameCenterSearchLogicController *_searchLogic;
    MMTableView *_tableView;
    _Bool _bNeedReloadWhenAppear;
    GameCenterHomeLogicControllerV3 *_logicController;
    GameCenterHeaderView *_headerView;
    GameCenterBottomView *_bottomView;
    double _preContentOffsetY;
    _Bool _retFromCgi;
    _Bool _myGameAllModuleReported;
    _Bool _profileExposureReported;
    int _entryNotifyType;
    int _sourceScene;
    NSMutableSet *_reportedIndexSet;
}

@property(retain, nonatomic) NSMutableSet *reportedIndexSet; // @synthesize reportedIndexSet=_reportedIndexSet;
@property(nonatomic) _Bool profileExposureReported; // @synthesize profileExposureReported=_profileExposureReported;
@property(nonatomic) _Bool myGameAllModuleReported; // @synthesize myGameAllModuleReported=_myGameAllModuleReported;
@property(nonatomic) _Bool retFromCgi; // @synthesize retFromCgi=_retFromCgi;
@property(nonatomic) int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) int entryNotifyType; // @synthesize entryNotifyType=_entryNotifyType;
- (void).cxx_destruct;
- (_Bool)needKvReportOnce:(long long)arg1 row:(long long)arg2;
- (void)exposureKvReport:(unsigned int)arg1 AppId:(id)arg2 ExtInfo:(id)arg3;
- (void)profileExposureKvReport;
- (void)promotedGameExposureKvReport:(id)arg1 Index:(long long)arg2;
- (void)topRecommendBannerExposureKvReport:(id)arg1;
- (void)myGameExposureKvReport:(id)arg1;
- (void)onGameCenterHotAdListImgClick:(id)arg1;
- (void)onTopRecommendImageTap:(id)arg1;
- (void)onTopRecommendGameClick:(id)arg1 ExternInfo:(id)arg2;
- (void)onTodayRecommendViewRecoItemClick:(id)arg1;
- (void)onMyGame:(id)arg1 gameRowClick:(id)arg2 Index:(long long)arg3;
- (void)onMyGame:(id)arg1 downloadGameClick:(id)arg2;
- (void)onMyGameCommonModuleClick:(id)arg1 AppID:(id)arg2;
- (void)onMyGameBannerClick:(id)arg1 AppID:(id)arg2;
- (void)onMyGameRankClick:(id)arg1 AppID:(id)arg2;
- (void)onMyGameGameCircleClick:(id)arg1 AppID:(id)arg2;
- (void)onMyGameGiftCenterClick:(id)arg1 AppID:(id)arg2;
- (void)checkDBAutoRecover;
- (void)onSearchBarClassifyBtnClicked;
- (void)onStopSearch;
- (void)onStartSearch;
- (void)onOpenSearchWebResultItem:(id)arg1;
- (void)onOpenSearchGameRecommendResultItem:(id)arg1;
- (void)onOpenSearchGameResultItem:(id)arg1 sourceScene:(int)arg2;
- (void)searchBarDidEndSearch;
- (void)searchBarBecomeFirstResponder;
- (void)viewWillLayoutSubviews;
- (void)updateSearchLogic;
- (void)onInstalledMoreIconClicked:(id)arg1;
- (void)onRecentGameIconClicked:(id)arg1;
- (void)handleDownloadButtonClicked:(id)arg1 Action:(int *)arg2;
- (void)rankedGameInfoCellDownloadButtonClicked:(id)arg1;
- (void)topBannerBigPicClicked:(id)arg1;
- (void)userActionButtonClicked:(long long)arg1;
- (void)onFeedBackButtonClicked;
- (void)bubbleButtonClicked;
- (void)onLaunchPrivilegeClicked:(id)arg1;
- (void)openGameListView;
- (void)showWebViewWithUrl:(id)arg1 EntryScene:(id)arg2;
- (int)openGameDetailViewWithGameInfo:(id)arg1 sourceScene:(int)arg2;
- (int)launchGameOrOpenDetailViewWithGameInfo:(id)arg1 sourceScene:(int)arg2;
- (id)makeBubbleCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeOverSeaRecentCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeTopRecommendCell:(id)arg1 identifier:(id)arg2 section:(long long)arg3 Index:(long long)arg4;
- (id)makeTodayRecommendCell:(id)arg1 identifier:(id)arg2;
- (id)makeRecentMoreCell:(id)arg1 identifier:(id)arg2;
- (id)makeRecentGrayGapCell:(id)arg1 identifier:(id)arg2;
- (id)makeInstalledCellWithReusableCell:(id)arg1 identifier:(id)arg2 index:(long long)arg3;
- (id)makeRecentCellWithReusableCell:(id)arg1 identifier:(id)arg2 section:(long long)arg3 index:(long long)arg4;
- (id)makeMoreGamesCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeHotAddListCellWithResuableCell:(id)arg1 identifier:(id)arg2;
- (id)makePromotedGameCellWithReusableCell:(id)arg1 identifier:(id)arg2 section:(long long)arg3 index:(long long)arg4;
- (void)viewDidTransitionToNewSize;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)initTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showSettingView;
- (void)initRightBarBtns;
- (void)initBottomView;
- (void)refreshBottomView;
- (void)initHeaderView;
- (void)refreshHeaderView;
- (void)refreshHeaderViewIfNeed;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithSourceScene:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


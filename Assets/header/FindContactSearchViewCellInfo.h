//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCellInfo.h"

#import "FTSWebSearchViewDelegate-Protocol.h"
#import "IBrandServiceSearchExt-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "SearchContactDataProviderDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class CContact, FTSWebSearchController, MMLoadingView, MMSearchBar, MMUILabel, MMUIViewController, NSString, SearchContactDataProvider, UITextField, UIView;

@interface FindContactSearchViewCellInfo : MMTableViewCellInfo <SearchContactDataProviderDelegate, FTSWebSearchViewDelegate, IBrandServiceSearchExt, PBMessageObserverDelegate, contactInfoDelegate, UIAlertViewDelegate, MMSearchBarDelegate>
{
    UITextField *m_userNameTextField;
    MMLoadingView *m_loadingView;
    NSString *m_nsUserNameToFind;
    MMUIViewController *m_containViewController;
    MMSearchBar *m_searchBar;
    UIView *m_backGroundView;
    UIView *m_backGroundBlurView;
    unsigned int _requestEventID;
    _Bool _didSearchContactDone;
    _Bool _isSearching;
    _Bool _bShowNoResult;
    _Bool _bHasShownWebSearchCell;
    _Bool _bHasOperateOnlineResult;
    CContact *_foundContact;
    unsigned long long _searchContactState;
    SearchContactDataProvider *_searchContactDataProvider;
    MMUILabel *_nonResultLabel;
    FTSWebSearchController *_webSearchLogicController;
}

@property(nonatomic) _Bool bHasOperateOnlineResult; // @synthesize bHasOperateOnlineResult=_bHasOperateOnlineResult;
@property(nonatomic) _Bool bHasShownWebSearchCell; // @synthesize bHasShownWebSearchCell=_bHasShownWebSearchCell;
@property(retain, nonatomic) FTSWebSearchController *webSearchLogicController; // @synthesize webSearchLogicController=_webSearchLogicController;
@property(nonatomic) _Bool bShowNoResult; // @synthesize bShowNoResult=_bShowNoResult;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) _Bool didSearchContactDone; // @synthesize didSearchContactDone=_didSearchContactDone;
@property(retain, nonatomic) MMUILabel *nonResultLabel; // @synthesize nonResultLabel=_nonResultLabel;
@property(retain, nonatomic) SearchContactDataProvider *searchContactDataProvider; // @synthesize searchContactDataProvider=_searchContactDataProvider;
@property(nonatomic) unsigned long long searchContactState; // @synthesize searchContactState=_searchContactState;
@property(retain, nonatomic) CContact *foundContact; // @synthesize foundContact=_foundContact;
@property(retain, nonatomic) NSString *m_nsUserNameToFind; // @synthesize m_nsUserNameToFind;
@property(retain, nonatomic) UITextField *m_userNameTextField; // @synthesize m_userNameTextField;
- (void).cxx_destruct;
- (void)onTestCrash;
- (void)logWebSearchClickByKeyword:(id)arg1 clickType:(unsigned int)arg2;
- (void)onWebSearchViewDidShow;
- (void)onWebSearchViewDidPop;
- (void)onWebSearchViewWillPop;
- (void)onWebSearchViewReturn:(_Bool)arg1;
- (void)endSearch;
- (void)removeWebSearchView;
- (void)onGetSearchDetailPageResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)do_LogExt:(int)arg1;
- (void)onSearchResultViewNeedStartWebSearch;
- (void)onSearchResultViewNeedPushViewController:(id)arg1;
- (void)onSearchResultViewNeedReload;
- (void)openContactInfoViewForGoogle:(id)arg1;
- (void)openContactInfoViewForPhone:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)showWebSearchEntryWithSrvErrMsg:(id)arg1;
- (void)showContactListInfoView:(id)arg1;
- (void)onGetNonResult;
- (void)SearchBarBecomeUnActive;
- (void)SearchBarBecomeActive;
- (void)onSearch:(id)arg1;
- (_Bool)isValidLocalQuery:(id)arg1;
- (void)removeNoResultLabelWhenSearching;
- (_Bool)searchKeyMatchesCommand:(id)arg1;
- (_Bool)allTextIsBlank;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)addFriendScene:(id)arg1;
- (_Bool)isBestGuessPhoneNumber:(id)arg1;
- (_Bool)isObj:(id)arg1 match:(id)arg2;
- (id)filterUserName:(id)arg1;
- (id)getSearchBarText;
- (void)stopLoading;
- (void)startLoading;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendBrandContactListRequest;
- (void)onGetSearchContactRet:(id)arg1 req:(id)arg2;
- (void)doSearch;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (id)getAddressBookPersonImage:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)mmSearchDisplayControllerDidHideSearchResultsTableView:(id)arg1;
- (void)mmSearchDisplayControllerWillShowSearchResultsTableView:(id)arg1;
- (void)hideDimmingView;
- (void)setSearchDisplayControllerContainerViewIn:(id)arg1 hidden:(_Bool)arg2;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)cancelSearch;
- (void)mmsearchBarCancelButtonClicked:(id)arg1;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (id)makeEntryCell:(id)arg1;
- (void)makeCell:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)handleRotate;
- (void)layoutViews;
- (id)initWithContentController:(id)arg1 backGroundView:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


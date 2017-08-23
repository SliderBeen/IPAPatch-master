//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IBrandServiceSearchExt-Protocol.h"

@class BSBusinessContent, NSMutableArray, NSString;
@protocol BSSHomePageLogicControllerDelegate;

@interface BSSHomePageLogicController : NSObject <IBrandServiceSearchExt>
{
    _Bool _isSearchWaiting;
    _Bool _isLastSearchSuccess;
    unsigned int _requestEventID;
    id <BSSHomePageLogicControllerDelegate> _delegate;
    BSBusinessContent *_curContent;
    NSString *_searchKeyword;
    NSMutableArray *_homePageContentList;
    unsigned long long _responseTime;
}

@property(nonatomic) unsigned int requestEventID; // @synthesize requestEventID=_requestEventID;
@property(nonatomic) unsigned long long responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) _Bool isLastSearchSuccess; // @synthesize isLastSearchSuccess=_isLastSearchSuccess;
@property(retain, nonatomic) NSMutableArray *homePageContentList; // @synthesize homePageContentList=_homePageContentList;
@property(nonatomic) _Bool isSearchWaiting; // @synthesize isSearchWaiting=_isSearchWaiting;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) BSBusinessContent *curContent; // @synthesize curContent=_curContent;
@property(nonatomic) __weak id <BSSHomePageLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onGetSearchDetailPageResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onRetrieveLocationFinished:(int)arg1;
- (void)sendHomePageLoadMoreRequest;
- (void)sendHomePageSearchRequest;
- (void)handleLoadMoreCellSelectWithIndexPath:(id)arg1;
- (void)handleMovieServiceSelectWithIndexPath:(id)arg1;
- (void)handleJobServiceSelectWithIndexPath:(id)arg1;
- (void)handleHouseServiceSecectWithIndexPath:(id)arg1;
- (void)handleUrlTypeServiceSelectWithIndexPath:(id)arg1;
- (void)handleMusicServiceSelectWithIndexPath:(id)arg1;
- (void)handleBrandContactSelectWithIndexPath:(id)arg1;
- (void)handleProductSelectWithIndexPath:(id)arg1;
- (_Bool)isLoadMoreCell:(id)arg1;
- (_Bool)isMovieServiceSection:(long long)arg1;
- (_Bool)isJobServiceSection:(long long)arg1;
- (_Bool)isHouseServiceSection:(long long)arg1;
- (_Bool)isMusicServiceSection:(long long)arg1;
- (_Bool)isBrandContactSection:(long long)arg1;
- (_Bool)isProductSection:(long long)arg1;
- (void)doRealSearch;
- (void)resetData;
- (unsigned long long)getResponseTime;
- (void)handleHomePageLoadMore;
- (_Bool)hasMoreHomePageData;
- (id)getLoadMoreWordingInSection:(long long)arg1;
- (id)getTitleWithSection:(long long)arg1;
- (id)getResultItemAtIndexPath:(id)arg1;
- (id)getKeywordListAtIndexPath:(id)arg1;
- (long long)getResultTypeOfIndexPath:(id)arg1;
- (long long)numberOfRowInSection:(long long)arg1;
- (long long)numberOfSectionInSearchResult;
- (void)handleSearchCancel;
- (void)handleTableViewSelecttionWithIndexPath:(id)arg1;
- (void)handleHomepageSearchWithKeyWord:(id)arg1;
- (void)prepareSearch;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


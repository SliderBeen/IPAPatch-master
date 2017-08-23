//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IWCShareCardPkgExt-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, WCNewShareCardLayoutCache;
@protocol WCNewShareCardListLogicDelegate;

@interface WCNewShareCardListLogicController : MMObject <IWCShareCardPkgExt>
{
    _Bool _bIsLocalCityLayoutDataEnd;
    _Bool _bIsOtherCityLayourDataEnd;
    _Bool _bIsLayoutCacheExist;
    _Bool _bIsProcessingLayoutRequest;
    id <WCNewShareCardListLogicDelegate> _delegate;
    NSMutableDictionary *_dictAllShareCardTpIdData;
    NSMutableDictionary *_dictAllGroupShareCardData;
    WCNewShareCardLayoutCache *_shareCardLayoutCache;
    NSString *_curCityName;
    NSMutableArray *_arrSections;
    NSString *_curSelectCardId;
}

@property(retain, nonatomic) NSString *curSelectCardId; // @synthesize curSelectCardId=_curSelectCardId;
@property(retain, nonatomic) NSMutableArray *arrSections; // @synthesize arrSections=_arrSections;
@property(nonatomic) _Bool bIsProcessingLayoutRequest; // @synthesize bIsProcessingLayoutRequest=_bIsProcessingLayoutRequest;
@property(nonatomic) _Bool bIsLayoutCacheExist; // @synthesize bIsLayoutCacheExist=_bIsLayoutCacheExist;
@property(nonatomic) _Bool bIsOtherCityLayourDataEnd; // @synthesize bIsOtherCityLayourDataEnd=_bIsOtherCityLayourDataEnd;
@property(nonatomic) _Bool bIsLocalCityLayoutDataEnd; // @synthesize bIsLocalCityLayoutDataEnd=_bIsLocalCityLayoutDataEnd;
@property(retain, nonatomic) NSString *curCityName; // @synthesize curCityName=_curCityName;
@property(retain, nonatomic) WCNewShareCardLayoutCache *shareCardLayoutCache; // @synthesize shareCardLayoutCache=_shareCardLayoutCache;
@property(retain, nonatomic) NSMutableDictionary *dictAllGroupShareCardData; // @synthesize dictAllGroupShareCardData=_dictAllGroupShareCardData;
@property(retain, nonatomic) NSMutableDictionary *dictAllShareCardTpIdData; // @synthesize dictAllShareCardTpIdData=_dictAllShareCardTpIdData;
@property(nonatomic) __weak id <WCNewShareCardListLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setShareCardCommonPropertyTo:(id)arg1 from:(id)arg2;
- (_Bool)replaceShareCard:(id)arg1 inList:(id)arg2;
- (_Bool)delUselessCardTpIdInOtherCityList:(id)arg1;
- (_Bool)delUselessCardTpIdInLocalCityList:(id)arg1;
- (_Bool)delUselessCardTpId:(id)arg1;
- (_Bool)delCurrentShareCardListDataWithSvrData:(id)arg1;
- (_Bool)updateCurrentShareCardListDataWithSvrData:(id)arg1;
- (_Bool)getShareCardDataFromDBWithCardTpId:(id)arg1 withAouncementStr:(id)arg2 isNew:(_Bool)arg3;
- (void)getShareCardHomePageLayout;
- (void)onGetShareCardsLayoutError;
- (void)onUpdateShareCard:(id)arg1 Error:(int)arg2;
- (void)onUpdateShareCardList:(id)arg1;
- (void)handleHomePageOtherCityLayout:(id)arg1 isLocalCityEnd:(_Bool)arg2;
- (void)handleHomePageLocalCityLayout:(id)arg1 isFirstPage:(_Bool)arg2 isLocalCityEnd:(_Bool)arg3;
- (void)onGetShareCardsHomePageLayout:(id)arg1 andOtherCityList:(id)arg2 withCityName:(id)arg3 isLocalCityEnd:(_Bool)arg4 isOtherCityEnd:(_Bool)arg5 isFirstPageData:(_Bool)arg6 entryTip:(id)arg7 entryIcons:(id)arg8;
- (void)getShareCardDataFromDBWithCacheLocalCityList:(id)arg1 withCacheOtherCityList:(id)arg2 withCacheCityName:(id)arg3;
- (_Bool)loadShareCardLayoutCacheIfExist;
- (unsigned long long)getAllAvaiableCardTpIdCount;
- (void)reloadViewController:(_Bool)arg1;
- (void)calcTableViewSectionData;
- (_Bool)loadMoreHomePageLayoutData;
- (void)refreshHomePageLayoutData;
- (_Bool)isProcessingLayoutRequest;
- (_Bool)hasMoreLayoutData;
- (_Bool)hasMoreOtherCityLoyoutData;
- (_Bool)hasMoreLocalCityLayoutData;
- (void)setCurrentSelectCardId:(id)arg1;
- (id)getShareCardFromDBWithCardId:(id)arg1;
- (id)getOtherCityShareCardDataListInRow:(unsigned long long)arg1;
- (id)getLocalCityShareCardDataListInRow:(unsigned long long)arg1;
- (unsigned long long)getOtherCityShareCardCount;
- (unsigned long long)getLocalCityShareCardCount;
- (id)getSectionTypeOfIndex:(unsigned long long)arg1;
- (unsigned long long)getTableViewSectionCount;
- (void)hasEnterViewController;
- (id)detectAnimationCardIndexPathInLocalCityList;
- (void)handleViewControllerWillReload;
- (void)handleUserDeleteShareCardList:(id)arg1;
- (void)syncShareCardData;
- (id)getCurCityName;
- (unsigned long long)getAllAvaiableShareCardCount;
- (_Bool)hasCardDataToShow;
- (void)initData;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


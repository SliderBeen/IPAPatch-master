//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MyFavoritesBaseCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol FavoritesUsageDataControllerDelegate;

@interface MMFavoritesUsageDataController : MMObject <UITableViewDataSource, UITableViewDelegate, MyFavoritesBaseCellDelegate>
{
    NSMutableDictionary *m_cellViewCache;
    NSMutableArray *m_arrFavItem;
    int m_curMinItemDataSize;
    _Bool m_bEditing;
    _Bool m_bReadyToLoad;
    _Bool m_bHasMoreData;
    _Bool _m_bAnimating;
    id <FavoritesUsageDataControllerDelegate> m_delegate;
    NSMutableDictionary *m_selectedItemsDict;
}

@property(nonatomic) _Bool m_bAnimating; // @synthesize m_bAnimating=_m_bAnimating;
@property(readonly, nonatomic) NSMutableDictionary *m_selectedItemsDict; // @synthesize m_selectedItemsDict;
@property(nonatomic) _Bool m_bHasMoreData; // @synthesize m_bHasMoreData;
@property(nonatomic) _Bool m_bReadyToLoad; // @synthesize m_bReadyToLoad;
@property(nonatomic) _Bool m_bEditing; // @synthesize m_bEditing;
@property(nonatomic) __weak id <FavoritesUsageDataControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)PushXMLContentForItem:(id)arg1;
- (void)onLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)removeFavItemData:(id)arg1;
- (void)removePostImgs:(id)arg1;
- (void)deleteFavItems:(id)arg1;
- (void)deleteFavItemAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)genNormalCellView:(long long)arg1;
- (double)getHeightForItem:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)getContentOffsetAfterAdd:(id)arg1 firstVisibleItemIndex:(long long)arg2;
- (int)indexOfFavItem:(unsigned int)arg1;
- (void)safeAddItemList:(id)arg1;
- (_Bool)hasData;
- (void)initData;
- (void)clearCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


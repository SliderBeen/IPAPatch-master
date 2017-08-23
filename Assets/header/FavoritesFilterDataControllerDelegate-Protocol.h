//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavoritesItem, MMUIViewController, NSIndexPath, NSMutableArray;

@protocol FavoritesFilterDataControllerDelegate <NSObject>
- (void)onSelectFilterFavItem:(FavoritesItem *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (_Bool)onResponseForSelectFavItem:(FavoritesItem *)arg1;
- (void)onSelectCountChanged:(unsigned long long)arg1;
- (void)reloadTableAtIndexPath:(NSIndexPath *)arg1;
- (void)reloadTableView;
- (void)showEmptyView;
- (void)onGetSearchResult:(NSMutableArray *)arg1;
- (MMUIViewController *)getCurrentViewController;

@optional
- (void)forwardItem:(FavoritesItem *)arg1;
- (void)onBtnEdit;
@end


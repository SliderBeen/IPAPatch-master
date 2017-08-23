//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class FavoritesItemDB, FavoritesSearchDB;
@protocol FavoritesSearchMgrDelegate;

@interface FavoritesSearchMgr : MMObject
{
    FavoritesItemDB *_favItemDB;
    FavoritesSearchDB *_favSearchDB;
    _Bool _isStop;
    id <FavoritesSearchMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <FavoritesSearchMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopSearch;
- (void)search:(id)arg1 byType:(int)arg2;
- (id)syncSearch:(id)arg1 byType:(int)arg2 tags:(id)arg3;
- (void)search:(id)arg1 byType:(int)arg2 tags:(id)arg3;
- (_Bool)deleteSearchItemByLocalFavId:(unsigned int)arg1;
- (_Bool)insertOrUpdateSearchItem:(id)arg1;
- (void)broadcastGetSearchResult:(id)arg1;
- (void)initDB:(id)arg1;
- (id)init;

@end


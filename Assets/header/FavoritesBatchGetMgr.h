//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "INetworkStatusMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class FavoritesItemDB, NSMutableArray;
@protocol FavoritesBatchGetMgrDelegate;

@interface FavoritesBatchGetMgr : MMObject <PBMessageObserverDelegate, INetworkStatusMgrExt>
{
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_batchGetArray;
    id <FavoritesBatchGetMgrDelegate> _delegate;
    _Bool _isGetting;
    unsigned int _autoBatchGetCount;
    _Bool _hasStartBatchGet;
}

@property(nonatomic) __weak id <FavoritesBatchGetMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldBetchGetAll;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleBatchGetFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)asyncDoAddNewItemList:(id)arg1;
- (_Bool)checkConflict:(id)arg1 vs:(id)arg2;
- (void)TryStartBatchGet;
- (void)addBatchGetFavoritesItemList:(id)arg1;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (id)init;

@end


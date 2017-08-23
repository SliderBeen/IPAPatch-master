//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class FavoritesItemDB, NSData;
@protocol FavoritesSyncMgrDelegate;

@interface FavoritesSyncMgr : MMObject <PBMessageObserverDelegate>
{
    NSData *_syncKeyBuffer;
    FavoritesItemDB *_favItemDB;
    id <FavoritesSyncMgrDelegate> _delegate;
    _Bool _isSendingReq;
}

@property(nonatomic) __weak id <FavoritesSyncMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleFavoritesSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)aysncHandleFavoritesSyncRespCmdList:(id)arg1 Response:(id)arg2;
- (void)SyncByNotify:(unsigned int)arg1;
- (void)clearSyncKey;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)reloadSyncKeyBuffer;
- (void)loadSyncKeyBuffer;
- (_Bool)saveSyncKeyBuffer:(id)arg1;
- (id)getSyncKeyBufferFilePath;

@end


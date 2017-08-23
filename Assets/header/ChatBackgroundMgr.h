//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMPackageDownloadMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class ChatBackgroundSettings, NSMutableArray, NSMutableDictionary, NSString, UIImage;

@interface ChatBackgroundMgr : MMService <MMService, MMPackageDownloadMgrExt>
{
    ChatBackgroundSettings *m_settings;
    NSMutableArray *m_serverItems;
    NSMutableArray *m_downloadingItems;
    NSMutableArray *m_cancelingItems;
    NSMutableDictionary *m_downloadTaskBook;
    NSString *m_nsCachePathString;
    UIImage *m_ocacheImage;
    struct CGRect m_cacheRect;
}

@property(retain, nonatomic) NSMutableArray *m_cancelingItems; // @synthesize m_cancelingItems;
@property(retain, nonatomic) NSMutableArray *m_downloadingItems; // @synthesize m_downloadingItems;
@property(retain, nonatomic) NSMutableArray *m_serverItems; // @synthesize m_serverItems;
@property(retain, nonatomic) ChatBackgroundSettings *m_settings; // @synthesize m_settings;
@property(retain, nonatomic) NSMutableDictionary *m_downloadTaskBook; // @synthesize m_downloadTaskBook;
- (void).cxx_destruct;
- (void)removeCancelingItem:(id)arg1;
- (void)addCancelingItem:(id)arg1;
- (void)removeDownloadingItem:(id)arg1;
- (void)addDownloadingItem:(id)arg1;
- (void)removeServerItem:(id)arg1;
- (void)addServerItem:(id)arg1;
- (void)onPackageCancelFinish:(id)arg1;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (void)cancelItem:(id)arg1;
- (void)downloadItem:(id)arg1 forUsername:(id)arg2;
- (id)getAllItemsList;
- (void)tryUpdateListFromServer;
- (void)updateListenerData;
- (id)getChatBackgroundViewForUser:(id)arg1;
- (id)getPluginChatBackgroundView:(int)arg1;
- (id)getThumbImageViewForCID:(id)arg1;
- (id)imageInPath:(id)arg1;
- (_Bool)getBOOLByName:(id)arg1 forUser:(id)arg2;
- (id)getColorByName:(id)arg1 forUser:(id)arg2;
- (void)resetAllPreferece;
- (_Bool)setBackgroundPreferenceByCustomImage:(id)arg1 forUsername:(id)arg2;
- (void)setBackgroundPreference:(id)arg1 forUsername:(id)arg2;
- (id)getBackgroundPreferenceForUsername:(id)arg1;
- (void)saveUserChatBackgroundSetting;
- (void)loadUserChatBackgroundSetting;
- (_Bool)unPackChatBackgroundPackToDir;
- (_Bool)unPackChatBackgroundPackIfNotExist;
- (_Bool)installChatUpdatePack:(id)arg1;
- (_Bool)isChatBKZipInBundle;
- (void)loadAllItems;
- (_Bool)createDirIfNotExist:(id)arg1;
- (id)getDownloadFinishedUsernameForCID:(long long)arg1;
- (void)setDownadFinishedCID:(long long)arg1 forUsername:(id)arg2;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


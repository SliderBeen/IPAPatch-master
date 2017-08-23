//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IAcctStorageMgrExt-Protocol.h"
#import "IBrandAttrMgrExt-Protocol.h"
#import "IContactProfileMgrExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CContactDB, CContactOPLog, NSMutableDictionary, NSRecursiveLock, NSString, NewContactDB;

@interface CContactMgr : MMService <MMService, MessageObserverDelegate, IContactProfileMgrExt, PBMessageObserverDelegate, IAcctStorageMgrExt, IMMLanguageMgrExt, IBrandAttrMgrExt>
{
    NSRecursiveLock *m_oLock;
    unsigned int m_uiLoadedType;
    CContactDB *m_oContactDB;
    NewContactDB *m_oNewContactDB;
    CContactOPLog *m_oContactOPLog;
    NSRecursiveLock *m_oMainControllerLock;
    NSMutableDictionary *m_dicRemark;
    NSMutableDictionary *m_dicLastAccessTime;
    NSMutableDictionary *m_dicContacts;
    NSMutableDictionary *m_dicEncodeContacts;
    NSMutableDictionary *m_mapLastGetTime;
    NSMutableDictionary *m_dicHardCodeUsers;
    unsigned int m_uiDBVersion;
    _Bool m_shouldContactDBMigration;
    _Bool m_bContactDBMigrationFinished;
    unsigned int m_uiMaxStrangerCache;
    _Bool m_bOpenStrangerCache;
}

- (void).cxx_destruct;
- (id)getAllContactUserName;
- (id)getContactForSearchByName:(id)arg1;
- (_Bool)isOpenStrangerCache;
- (void)callModifyContactForCPState:(id)arg1;
- (_Bool)isHeadImgUpdated:(id)arg1 Local:(id)arg2;
- (void)onBrandContactModified:(id)arg1 withAttrChanged:(id)arg2;
- (_Bool)ChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)ChangeNotifyStatusForChatRoom:(id)arg1 withStatus:(_Bool)arg2 sync:(_Bool)arg3;
- (void)main_onPushModifyContact:(id)arg1;
- (id)thread_onBatchModifyChatRoomMember:(id)arg1;
- (id)thread_onpushBatchModContact:(id)arg1;
- (void)main_onPushAddContact:(id)arg1;
- (void)main_onPushDeleteContact:(id)arg1;
- (void)setSelfContactUpdated;
- (id)getSelfContact;
- (_Bool)updateContactToCache:(id)arg1;
- (_Bool)shouldUpdateContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetContact:(id)arg1;
- (id)HandleMemContact:(id)arg1;
- (void)MainThread_ReloadMemContact:(id)arg1;
- (void)thread_ReloadMemConact:(id)arg1 ChatRoom:(id)arg2;
- (id)thread_HandleMemContact:(id)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)main_onPushBatchModContact:(id)arg1;
- (void)onLanguageChange;
- (void)onSettingChange;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (_Bool)onServiceMemoryWarning;
- (void)updateContactLocalData;
- (void)fixContactPluginOldData;
- (id)getGroupCardMemberList:(id)arg1;
- (_Bool)getContactsFromServer:(id)arg1 chatContact:(id)arg2 withScene:(int)arg3 withTicket:(id)arg4 usrData:(id)arg5;
- (_Bool)getInviteeContactsFromServer:(id)arg1 withTicket:(id)arg2;
- (_Bool)getContactsFromServer:(id)arg1;
- (_Bool)getContactsFromServer:(id)arg1 chatContact:(id)arg2;
- (_Bool)getContactsFromSvrForTempChat:(id)arg1;
- (_Bool)internalGetContactsFromSvr:(id)arg1 chatContact:(id)arg2 usrData:(id)arg3;
- (void)addToGetContactMap:(id)arg1;
- (_Bool)checkIfForbiddenGetContact:(id)arg1;
- (_Bool)syncAllSXContact;
- (void)tryLoadExtInfoForContact:(id)arg1;
- (void)reloadContact:(id)arg1;
- (_Bool)delayLoadAllContactInBackGround;
- (void)reportIDKey:(id)arg1 stranger:(id)arg2;
- (void)thread_saveContactImageStatus:(id)arg1 Status:(id)arg2 Image:(id)arg3 Url:(id)arg4;
- (void)reloadContactImageStatus:(id)arg1 Status:(id)arg2 Image:(id)arg3;
- (_Bool)setHDHeadUpdated:(id)arg1;
- (_Bool)setContact:(id)arg1 chatState:(unsigned int)arg2;
- (_Bool)setContact:(id)arg1 textTranslateOpen:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setLocalContactToUntopSession:(id)arg1;
- (_Bool)setContact:(id)arg1 sessionTop:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setContact:(id)arg1 notifyOpen:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setContact:(id)arg1 hideHashPhone:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setContact:(id)arg1 watchContact:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setContact:(id)arg1 favour:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setLocalContact:(id)arg1 notifyOpen:(_Bool)arg2;
- (_Bool)setContact:(id)arg1 typeBit:(unsigned int)arg2 set:(_Bool)arg3 sync:(_Bool)arg4;
- (_Bool)setContact:(id)arg1 typeBit:(unsigned int)arg2 set:(_Bool)arg3 sync:(_Bool)arg4 localSet:(_Bool)arg5;
- (_Bool)setNoBlack:(id)arg1 sync:(_Bool)arg2;
- (_Bool)setBlack:(id)arg1 sync:(_Bool)arg2;
- (_Bool)setNoBlack:(id)arg1;
- (_Bool)setBlack:(id)arg1;
- (_Bool)setBlack:(id)arg1 blackFlag:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setContact:(id)arg1 chatRoomAccessType:(unsigned int)arg2;
- (_Bool)setContact:(id)arg1 RoomDetail:(id)arg2;
- (_Bool)setContact:(id)arg1 chatRoomData:(id)arg2;
- (_Bool)setContact:(id)arg1 owner:(id)arg2;
- (_Bool)setContact:(id)arg1 snsBlack:(_Bool)arg2;
- (_Bool)setContact:(id)arg1 mobileIdentify:(id)arg2;
- (_Bool)setContact:(id)arg1 googleContactName:(id)arg2;
- (_Bool)setContact:(id)arg1 googleContactNickName:(id)arg2;
- (_Bool)clearDraftForContact:(id)arg1;
- (_Bool)setContact:(id)arg1 nickName:(id)arg2;
- (_Bool)setContact:(id)arg1 cardUrl:(id)arg2;
- (_Bool)setContact:(id)arg1 cardDesc:(id)arg2;
- (_Bool)setPhone:(id)arg1 Contact:(id)arg2;
- (_Bool)setContact:(id)arg1 remark:(id)arg2;
- (_Bool)setContact:(id)arg1 remark:(id)arg2 hideHashPhone:(_Bool)arg3;
- (void)modifyContactNickName:(id)arg1 nickName:(id)arg2 callMod:(_Bool)arg3;
- (_Bool)RemoveContactFromChatList:(id)arg1;
- (_Bool)deleteContact:(id)arg1 listType:(unsigned int)arg2 andScene:(unsigned int)arg3 sync:(_Bool)arg4 local:(_Bool)arg5;
- (_Bool)deleteContact:(id)arg1 listType:(unsigned int)arg2 andScene:(unsigned int)arg3 sync:(_Bool)arg4;
- (_Bool)deleteContact:(id)arg1 listType:(unsigned int)arg2 sync:(_Bool)arg3;
- (_Bool)deleteContact:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)deleteContactLocal:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)addFromMobileContact:(id)arg1;
- (_Bool)addFromQQContact:(id)arg1;
- (_Bool)addLocalContact:(id)arg1 listType:(unsigned int)arg2;
- (void)addContactInternal:(id)arg1;
- (_Bool)addContact:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)addContact:(id)arg1 listType:(unsigned int)arg2 opLog:(_Bool)arg3;
- (id)getAllBrandContacts;
- (id)getAllEnterpriseMainBrandContacts;
- (id)getContactList:(unsigned int)arg1 contactType:(unsigned int)arg2 needLoadExt:(_Bool)arg3;
- (id)getContactList:(unsigned int)arg1 contactType:(unsigned int)arg2;
- (_Bool)isBelongToMMContactInCache:(id)arg1;
- (_Bool)isInContactList:(id)arg1;
- (_Bool)isContactExistLocal:(id)arg1;
- (_Bool)isContactBlack:(id)arg1;
- (id)getContactByNameFromCache:(id)arg1;
- (id)getContactByNameFromDB:(id)arg1;
- (id)getContactByName:(id)arg1;
- (void)updateCache:(id)arg1;
- (void)initDB:(id)arg1 lock:(id)arg2;
- (void)updateNewDB:(id)arg1 NewUser:(_Bool)arg2;
- (_Bool)isUserNewDB;
- (void)onPushDeleteContact:(id)arg1;
- (void)onPushModifyContact:(id)arg1 updateImage:(_Bool)arg2;
- (void)handleLocalField:(id)arg1 oldContact:(id)arg2;
- (id)reloadContact:(id)arg1 mergeImage:(id)arg2;
- (void)callOnRemoveContactFromAddressBook:(id)arg1;
- (void)callOnModifyContactHeadImageExt:(id)arg1;
- (void)callOnDeleteExt:(id)arg1;
- (void)callOnModifyExt:(id)arg1;
- (void)internalDeleteContact:(id)arg1;
- (void)internalModifyContact:(id)arg1;
- (void)internalNewContact:(id)arg1;
- (void)mergeChatRoomData:(id)arg1 oldContact:(id)arg2;
- (void)handleWeChatTeamNickName:(id)arg1;
- (void)handleOfficalContactName:(id)arg1;
- (_Bool)isContactMatch:(id)arg1 listType:(unsigned int)arg2 contactType:(unsigned int)arg3;
- (int)interalReloadContacts:(unsigned int)arg1 needLoadExt:(_Bool)arg2;
- (_Bool)isHardCodeContact:(id)arg1;
- (void)addHardCodeContacts;
- (void)addAddHardcodeContact:(id)arg1 selector:(SEL)arg2;
- (id)generateOfficialContact:(id)arg1;
- (id)generatePluginContactNoListContact:(id)arg1;
- (id)generatePluginContact:(id)arg1;
- (id)generatePluginContact:(id)arg1 uiType:(unsigned int)arg2;
- (void)internalUpdateContactLocalDataWithUserName:(id)arg1;
- (void)refreshContactLocalData;
- (void)refreshPluginNickName:(_Bool)arg1;
- (void)addDictoryDataToCache:(id)arg1 listType:(unsigned int)arg2;
- (int)autoreloadContacts:(unsigned int)arg1 needLoadExt:(_Bool)arg2;
- (int)autoreloadContacts:(unsigned int)arg1;
- (id)addSelfContactToCache;
- (_Bool)isCacheAllLoaded;
- (void)dealloc;
- (void)removeListen;
- (void)initListen;
- (id)init;
- (_Bool)SetFriendMetaFlag:(unsigned int)arg1 ForUser:(id)arg2;
- (_Bool)SetLastUpdateTime:(unsigned int)arg1 ForUser:(id)arg2;
- (_Bool)ModifyNotifyStatus:(id)arg1 withStatus:(unsigned int)arg2;
- (_Bool)thread_onPushModifyContact:(id)arg1 isInit:(_Bool)arg2;
- (_Bool)thread_BatchModifyContact:(id)arg1;
- (id)addOrUpdateContactToDB:(id)arg1 listType:(unsigned int)arg2 add:(_Bool *)arg3 modify:(_Bool *)arg4;
- (_Bool)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllUserName:(id)arg1;
- (_Bool)getAllContactNoExtInfoList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllContactList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)migrationContacts:(unsigned int)arg1 first:(_Bool)arg2;
- (void)reportMigrationStat:(unsigned int)arg1 status:(unsigned int)arg2;
- (_Bool)splist_migrationContactList:(id)arg1;
- (void)setMigrationFinished;
- (_Bool)loadContactExtInfo:(id)arg1;
- (_Bool)updateContactToDb:(id)arg1;
- (_Bool)addContactToDb:(id)arg1;
- (_Bool)removeContactFromDB:(id)arg1;
- (id)getContactFromDB:(id)arg1;
- (void)removeContactFromDic:(id)arg1;
- (void)setContactToDic:(id)arg1 forKey:(id)arg2;
- (id)getContactFromDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


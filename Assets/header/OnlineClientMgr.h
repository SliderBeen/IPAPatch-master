//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMMFontMgrExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, SendActiveCGI;

@interface OnlineClientMgr : MMService <IMMLanguageMgrExt, MessageObserverDelegate, PBMessageObserverDelegate, IMMNewSessionMgrExt, MMKernelExt, IMMFontMgrExt, MMService>
{
    _Bool m_isRunningAsBakDevice;
    _Bool m_hasGetChatList;
    _Bool m_needHeartBeat;
    _Bool m_shouldVibrateOrSound;
    _Bool m_isLoginWebWX;
    _Bool m_isGettingOnlineInfo;
    _Bool m_shouldIgnorePushOpen;
    unsigned int m_curOnlineVersion;
    unsigned int m_iconType;
    NSString *m_summaryXml;
    NSArray *m_arrOnlineInfo;
    NSMutableSet *m_markingMsgRead;
    NSMutableSet *m_pendingMarkMsgRead;
    NSMutableArray *m_lastDeviceActiveMsg;
    SendActiveCGI *m_sendActiveCGI;
    unsigned long long m_lastReadItemCreateTime;
    unsigned int m_markVoiceAsReadEventID;
    unsigned long long m_extDeviceControls;
    CDUnknownBlockType m_logoutCallBackBlock;
    _Bool m_isNeedCallLoginWeb;
}

- (void).cxx_destruct;
- (id)GetBannerIcon;
- (void)markVoiceMsgAsReadWithMessage:(id)arg1;
- (void)handleMarkEnterpriseChatRead:(id)arg1;
- (void)handleQuitEnterpriseChat:(id)arg1;
- (void)handleEnterEnterpriseChat:(id)arg1;
- (void)handleMarkPatternLockUpdate:(id)arg1;
- (void)markPatternLockUpdate;
- (void)onManulLogOut;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)onKickQuit;
- (void)DidEnterForeground:(id)arg1;
- (void)DidEnterBackground:(id)arg1;
- (void)sendUnActiveRequest;
- (void)sendActiveRequest;
- (id)getSendActiveCGI;
- (_Bool)shoudlSendActiveCGI;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isNeedSyncChatname:(id)arg1;
- (void)onRemoteDeviceEnterSession:(id)arg1;
- (void)onRemoteDeviceQuitSession:(id)arg1;
- (void)onGetChatListResponsed:(id)arg1;
- (void)onGetEnterFunction:(id)arg1;
- (void)onGetQuitFunction:(id)arg1;
- (void)onGetMarkFunction:(id)arg1;
- (void)onGetNotifyUnlockFunction:(id)arg1;
- (void)onGetSendCommandFunction:(id)arg1;
- (void)onGetSyncEnd;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)getAllChat;
- (id)GetExtDeviceOnlineInfo;
- (_Bool)isExtDeviceLocked;
- (unsigned long long)GetExtDeviceControls;
- (id)GetOnlineClient;
- (id)GetSelfOnlineInfo;
- (id)GetOnlineSummaryForKey:(id)arg1;
- (id)GetOnlineSummary;
- (unsigned int)GetOnlineIconType;
- (void)statusNotifyGetChatListRequest;
- (void)checkExtdeviceControlsWithFlag:(unsigned int)arg1;
- (void)checkShouldIgnorePushOpenWithFlag:(unsigned int)arg1;
- (void)checkShouldAddFileHelperToTopWithFlag:(unsigned int)arg1;
- (void)checkShouldHideOnelineInfoBarWithFlag:(unsigned int)arg1;
- (void)checkExtDeviceOnlineStatusWithOnlineList:(id)arg1;
- (void)onGetOnlineInfoResponse:(id)arg1 newOnlineVersion:(unsigned int)arg2;
- (_Bool)createGetOnlineInfoEventWithNewOnlineVersion:(unsigned int)arg1;
- (void)GetOnlineInfoFromServerWithNewOnlineVersion:(unsigned int)arg1;
- (void)GetOnlineInfoFromServer;
- (void)handleMarkTimelineListRead:(id)arg1;
- (void)markTimelineListReadWithLastItemId:(id)arg1 itemCreateTime:(unsigned long long)arg2;
- (void)handleEnterWCMsgList:(id)arg1;
- (void)enterWCMsgListWithLastItemCreateTime:(unsigned long long)arg1;
- (void)setLastDeviceActiveMsg:(id)arg1;
- (void)onMarkMsgReadReturn:(id)arg1 withResponse:(id)arg2;
- (void)MarkChatRead:(id)arg1;
- (void)QuitChat:(id)arg1;
- (void)EnterChat:(id)arg1;
- (void)resetNeedCallLoginWeb;
- (_Bool)isNeedCallLoginWeb;
- (_Bool)isRunningAsBakDevice;
- (void)setIsNeedShowPush:(_Bool)arg1;
- (_Bool)isNeedShowPush;
- (void)logoutWeb:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)isLoginWebWX;
- (void)forceCheckIsLoginWebWX;
- (void)setAuthFlag:(unsigned long long)arg1;
- (unsigned int)genRandomClienMsgId;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


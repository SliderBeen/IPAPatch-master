//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "EmoticonDescMgrExt-Protocol.h"
#import "EmoticonStoreItemExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"

@class EmoticonServerTip, NSString;

@interface EmoticonRecommendMgr : MMService <EmoticonDescMgrExt, MMService, IMsgExt, EmoticonStoreItemExt>
{
    EmoticonServerTip *m_serverTip;
    NSString *m_lastEmotionStoreNodePid;
    NSString *m_lastEmotionStoreContent;
}

@property(retain, nonatomic) EmoticonServerTip *m_serverTip; // @synthesize m_serverTip;
- (void).cxx_destruct;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 downloadFlag:(unsigned int)arg2 pid:(id)arg3;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 pid:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onServerTipsUpdated;
- (void)setEmoticonStoreTipsFromNode:(struct XmlReaderNode_t *)arg1;
- (_Bool)hasBoardViewPlusNew;
- (void)clearBoardViewPlusNew;
- (_Bool)ClearNew;
- (_Bool)lastUpdateTimeNoneZero;
- (void)resetLastUpdateTime;
- (_Bool)isTipsExpired;
- (id)iconUrl;
- (id)tipString;
- (_Bool)isFreeTip;
- (_Bool)HasNew;
- (void)clearDesignerEmojiEntranceNew;
- (_Bool)hasDesignerEmojiEntranceNew;
- (_Bool)clearPersonalNew;
- (_Bool)hasPersonalNew;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IContactMgrExt-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "MultiTalkMgrExt-Protocol.h"

@class NSMutableDictionary;

@interface MainFrameCellDataManager : MMObject <IContactMgrExt, IGroupMgrExt, MultiTalkMgrExt>
{
    NSMutableDictionary *m_dictMainFrameCellData;
}

- (void).cxx_destruct;
- (void)onMultiTalkMsgCellIconChange:(id)arg1;
- (void)OnChangeGroup:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)updateTimeFieldForCellData;
- (void)removeCellData:(id)arg1;
- (id)getCellDataByUsrName:(id)arg1;
- (void)cleanupAllCache;
- (id)updateCellData:(id)arg1;
- (id)getCellData:(id)arg1;
- (void)clearOldVersionCellDataFile;
- (void)dealloc;
- (id)init;

@end


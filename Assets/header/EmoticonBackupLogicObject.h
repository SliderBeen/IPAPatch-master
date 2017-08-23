//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "EmoticonBackupMd5ListCgiDelegate-Protocol.h"
#import "EmoticonUploadCgiDelegate-Protocol.h"

@class EmoticonBackupMd5ListCgi, EmoticonUploadCgi;
@protocol EmoticonBackupLogicObjectDelegate;

@interface EmoticonBackupLogicObject : MMObject <EmoticonBackupMd5ListCgiDelegate, EmoticonUploadCgiDelegate>
{
    _Bool m_isActive;
    _Bool m_hasStartLogic;
    _Bool _stopFileMagration;
    _Bool _m_isIgnoreOnceLimit;
    EmoticonBackupMd5ListCgi *m_backupCgi;
    EmoticonUploadCgi *m_uploadCgi;
    id <EmoticonBackupLogicObjectDelegate> m_delegate;
}

@property(nonatomic) _Bool m_isIgnoreOnceLimit; // @synthesize m_isIgnoreOnceLimit=_m_isIgnoreOnceLimit;
@property(nonatomic) _Bool stopFileMagration; // @synthesize stopFileMagration=_stopFileMagration;
@property(nonatomic) __weak id <EmoticonBackupLogicObjectDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_hasStartLogic; // @synthesize m_hasStartLogic;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive;
@property(retain, nonatomic) EmoticonUploadCgi *m_uploadCgi; // @synthesize m_uploadCgi;
@property(retain, nonatomic) EmoticonBackupMd5ListCgi *m_backupCgi; // @synthesize m_backupCgi;
- (void).cxx_destruct;
- (void)onEmoticonUploadMd5Failed:(id)arg1;
- (void)onEmoticonUploadMd5Ok:(id)arg1;
- (_Bool)canResumeEmoticonBackupMd5List;
- (void)onEmoticonBackupMd5ListOverLimitWithNeedUploadMd5List:(id)arg1;
- (void)onEmoticonBackupMd5ListRunOutWithNeedUploadMd5List:(id)arg1;
- (void)onEmoticonBackupMd5ListNoNeedToBackUp;
- (void)onEmoticonBackupMd5ListFailed;
- (void)onEmoticonBackupMd5ListOk;
- (void)callFailedDelegate;
- (void)callOkDelegate;
- (void)uploadEmoticon;
- (_Bool)canStartCgiNow;
- (_Bool)isActive;
- (void)startBackup;
- (void)asyncMigrateFiles;
- (void)startLogic;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 isIgnoreOnceLimit:(_Bool)arg2;

@end


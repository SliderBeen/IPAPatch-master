//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WXGBackupIndexDB;
@protocol OS_dispatch_queue, WXGBackupRecoverHelperDelegate;

@interface WXGBackupRecoverHelper : NSObject
{
    NSObject<OS_dispatch_queue> *m_FileSerialQueue;
    WXGBackupIndexDB *m_indexDB;
    unsigned int m_msgListCount;
    NSData *m_encryptKey;
    id <WXGBackupRecoverHelperDelegate> _delegate;
}

@property(nonatomic) __weak id <WXGBackupRecoverHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_writeBufferFileToPersistentPath;
- (_Bool)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
- (_Bool)p_writeMsgListDataPush:(id)arg1 toPath:(id)arg2;
- (void)asynProcessRequestSessionDataInfoArray:(id)arg1;
- (void)asynProcessPieceOfData:(id)arg1;
- (void)asynProcessDataTag:(id)arg1;
- (void)dealloc;
- (id)initWithEncryptKey:(id)arg1;
- (id)init;

@end


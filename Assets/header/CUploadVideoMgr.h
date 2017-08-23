//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NotifyFromMainCtrlDelegate-Protocol.h"

@class CMessageWrap, NSMutableArray;

@interface CUploadVideoMgr : NSObject <NotifyFromMainCtrlDelegate>
{
    NSMutableArray *m_arrUploadList;
    CMessageWrap *m_wrapCurUploadMsg;
    unsigned int m_uiCurUploadEventID;
    unsigned int m_uiUploadMaxPacketLen;
}

@property(retain, nonatomic) CMessageWrap *m_wrapCurUploadMsg; // @synthesize m_wrapCurUploadMsg;
- (void).cxx_destruct;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)StopUpload:(id)arg1 MsgWrap:(id)arg2;
- (void)StartUpload:(id)arg1 MsgWrap:(id)arg2;
- (id)GetMsg:(id)arg1;
- (_Bool)IsMsgInUploadQueue:(id)arg1;
- (void)Stop;
- (void)InitWithLock:(id)arg1;
- (void)UploadVideo:(id)arg1;
- (_Bool)CreateUploadEvent:(id)arg1;
- (_Bool)LoadMediaData:(id)arg1 Path:(id)arg2 Offset:(unsigned int)arg3 TotalLen:(unsigned int)arg4 HasRead:(unsigned int)arg5 RealRead:(unsigned int *)arg6 ReadData:(id)arg7;
- (id)LoadDataFromPath:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3;
- (void)SendMsgFail:(id)arg1 RetCode:(int)arg2;
- (void)StopCurUpload;
- (void)DelMsgInUploadQueue:(id)arg1;
- (id)GetUpdateInfoByID:(unsigned int)arg1 From:(id)arg2 To:(id)arg3;
- (void)SetMaxPacketLenFor8K;
- (void)dealloc;
- (id)init;

@end


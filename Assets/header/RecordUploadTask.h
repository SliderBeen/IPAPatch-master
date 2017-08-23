//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "IDownloadImageExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CMessageWrap, CdnRecordMediaInfo, CdnUploadTaskInfo, FavoritesItemDataField, NSString;
@protocol RecordUploadTaskDelegate;

@interface RecordUploadTask : NSObject <ICdnComMgrExt, PBMessageObserverDelegate, IMsgExt, IDownloadImageExt>
{
    _Bool m_hasDownload;
    _Bool m_enableHitCheck;
    _Bool m_isThumb;
    FavoritesItemDataField *m_recordData;
    CMessageWrap *m_sourceMsg;
    CMessageWrap *m_recordMsg;
    unsigned int m_index;
    CdnRecordMediaInfo *_cdnInfo;
    CdnUploadTaskInfo *_uploadResult;
    id <RecordUploadTaskDelegate> _delegate;
}

@property(nonatomic) __weak id <RecordUploadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CdnUploadTaskInfo *uploadResult; // @synthesize uploadResult=_uploadResult;
@property(retain, nonatomic) CdnRecordMediaInfo *cdnInfo; // @synthesize cdnInfo=_cdnInfo;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkMd5:(id)arg1;
- (void)OnDownloadImageStopByChatName:(id)arg1 FromDelMsg:(_Bool)arg2;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnMsgDownloadVideoCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)startDownload;
- (void)OnCdnUpload:(id)arg1;
- (void)startUpload;
- (void)dealloc;
- (id)initWithThumbInMsg:(id)arg1 fromFav:(_Bool)arg2;
- (id)initWithMsg:(id)arg1 dataIndex:(unsigned int)arg2 isThumb:(_Bool)arg3 fromFav:(_Bool)arg4;
- (id)initWithMsg:(id)arg1 dataIndex:(unsigned int)arg2 isThumb:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

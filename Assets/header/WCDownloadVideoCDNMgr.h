//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"

@class CdnTaskInfo, NSMutableArray, NSString;

@interface WCDownloadVideoCDNMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray *_arrDownloadTask;
    CdnTaskInfo *_curTaskInfo;
}

- (void).cxx_destruct;
- (void)downloadVideoError;
- (void)downloadVideoSucess:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnVideoDownloadToEnd:(id)arg1;
- (void)OnCdnVideoMoovReady:(id)arg1;
- (void)OnCdnDownloadPartialData:(id)arg1;
- (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 durationSec:(unsigned int)arg4;
- (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (void)CheckQueue;
- (void)StopDownloadVideo:(id)arg1 Result:(struct CDNDownloadResult *)arg2;
- (void)reportKVVideoArgsWithResult:(struct CDNDownloadResult *)arg1;
- (void)StopCurDownload:(struct CDNDownloadResult *)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (unsigned long long)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (unsigned long long)StartDownloadVideo:(id)arg1;
- (void)updateVideoDownloadModeWithMediaId:(id)arg1 downloadMode:(unsigned long long)arg2;
- (_Bool)isShouldUseDCIP:(id)arg1;
- (id)getDownloadIPList:(id)arg1;
- (id)getDownloadReferUrl:(id)arg1;
- (unsigned long long)GetMediaVideoDownloadingModeWithMediaItem:(id)arg1;
- (_Bool)checkDownloadState:(id)arg1;
- (_Bool)IsMediaItemInDownloadQueue:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


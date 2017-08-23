//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "EmoticonDownloadProxyDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class EmoticonDownloadProxy, NSString, OrderedDictionary;

@interface StoreEmotionSingleDownloadMgr : MMService <EmoticonDownloadProxyDelegate, MMService>
{
    OrderedDictionary *m_downloadQueue;
    EmoticonDownloadProxy *m_downloadCgi;
}

- (void).cxx_destruct;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)finishDownloadEmotionWithMd5:(id)arg1;
- (void)checkDownload;
- (id)dataOfEmoticonIfExistedWithWrap:(id)arg1;
- (_Bool)saveToNotTempPathWithMD5:(id)arg1;
- (_Bool)downloadEmotionWithWrap:(id)arg1;
- (_Bool)downloadEmotionWithMD5:(id)arg1 andCdnUrl:(id)arg2;
- (_Bool)downloadEmotionWithMD5:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCCardCDNDownloadHelper : NSObject <ICdnComMgrExt>
{
    NSMutableDictionary *_clientMsgId2DownloadInfoMap;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnInit;
- (id)getMd5:(id)arg1;
- (_Bool)cancelDownloadByClientMsgId:(id)arg1;
- (id)download:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


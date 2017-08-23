//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSString, WebviewLocalResItem;
@protocol WebResourceCDNUploadHelperDelegate;

@interface WebResourceCDNUploadHelper : MMObject <ICdnComMgrExt, PBMessageObserverDelegate>
{
    _Bool _isUploading;
    NSMutableArray *_uploadArray;
    WebviewLocalResItem *_curUploadingItem;
    id <WebResourceCDNUploadHelperDelegate> _delegate;
}

@property(nonatomic) __weak id <WebResourceCDNUploadHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)handleGetMediaIdResp:(id)arg1;
- (void)sendNextResItemGetMediaIdRequest;
- (void)sendGetMediaIdRequest;
- (void)sendUploadRequest;
- (_Bool)stopUpload;
- (_Bool)startUpload;
- (void)addUploadCDNItem:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

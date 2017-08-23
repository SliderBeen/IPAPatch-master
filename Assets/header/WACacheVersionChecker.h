//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWALocalCacheMgrExt-Protocol.h"

@class NSDictionary, NSString, WAInfoData, WALoadingViewController;

@interface WACacheVersionChecker : NSObject <IWALocalCacheMgrExt>
{
    NSString *_appID;
    NSString *_userName;
    NSDictionary *_dicExtraInfo;
    NSString *_relativePath;
    WAInfoData *_appInfo;
    WALoadingViewController *_loadingVC;
    CDUnknownBlockType _completeHandler;
    CDUnknownBlockType _progressHandler;
    unsigned long long _startDownloadTime;
}

- (void).cxx_destruct;
- (unsigned long long)appstateWithExtraInfo:(id)arg1;
- (void)reportIntallOrUpdateInfo:(_Bool)arg1 withContact:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withContact:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)onUpdateAppPkgProgress:(float)arg1 remainingTime:(unsigned long long)arg2 withContact:(id)arg3;
- (_Bool)actionSameVersionLogicWithContact:(id)arg1 appInfoData:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (_Bool)actionDebugModeLogicWithContact:(id)arg1 appInfoData:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (_Bool)triggerPkgDownloadWithContact:(id)arg1 fromScene:(unsigned long long)arg2;
- (void)checkCacheReadyWithContact:(id)arg1 appInfoData:(id)arg2 context:(id)arg3 completeHandler:(CDUnknownBlockType)arg4 progressHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithAppID:(id)arg1;

@end


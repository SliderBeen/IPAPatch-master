//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession, NSURLSessionDownloadTask;
@protocol OS_dispatch_queue, WADownloadFileTaskDelegate;

@interface WADownloadFileTask : NSObject
{
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSURLSession *_urlSession;
    NSURLSessionDownloadTask *_task;
    CDUnknownBlockType _completionHandler;
    _Bool _isRedirectInvalid;
    NSString *_url;
    _Bool _isExceedMaxFileSize;
    _Bool _isCanceled;
    id <WADownloadFileTaskDelegate> delegate;
    NSString *_savePath;
    NSString *_localID;
}

@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(retain) NSString *localID; // @synthesize localID=_localID;
@property(retain) NSString *savePath; // @synthesize savePath=_savePath;
@property _Bool isExceedMaxFileSize; // @synthesize isExceedMaxFileSize=_isExceedMaxFileSize;
@property __weak id <WADownloadFileTaskDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)taskDidEnd;
- (id)workerQueue;
- (void)callCompletionHandlerWithLocalID:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)markRedirectFail;
- (id)task;
- (void)cancelWithError:(id)arg1;
- (void)cancelForExceedMaxSize;
- (void)cancel;
- (void)taskDidCompleteWithError:(id)arg1 statusCode:(unsigned long long)arg2;
- (void)anyThread_didFinishDownloadingToURL:(id)arg1 mimeType:(id)arg2;
- (void)startWithURL:(id)arg1 httpHeaders:(id)arg2 userAgent:(id)arg3 referer:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2 workerQueue:(id)arg3;

@end


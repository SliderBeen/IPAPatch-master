//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMResBatchDownloadMgr-Protocol.h"
#import "MMResBatchDownloadMgrDelegate-Protocol.h"

@class MMResourceDownloadMgr, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol MMResBatchDownloadMgrDelegate;

@interface MMResBatchDownloadMgr : NSObject <MMResBatchDownloadMgrDelegate, MMResBatchDownloadMgr>
{
    MMResourceDownloadMgr *_resDownloadMgr;
    NSMutableArray *_batchTaskQueue;
    NSMutableDictionary *_dictBatchingTask;
    NSRecursiveLock *_lock;
    id <MMResBatchDownloadMgrDelegate> _mgrDelegate;
}

+ (unsigned int)genBatchTaskId;
@property(nonatomic) __weak id <MMResBatchDownloadMgrDelegate> mgrDelegate; // @synthesize mgrDelegate=_mgrDelegate;
- (void).cxx_destruct;
- (void)onBatchDownloadFinish:(_Bool)arg1 errMsgList:(id)arg2 batchTask:(id)arg3;
- (void)checkQueue;
- (void)addBatchDownloadTask:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


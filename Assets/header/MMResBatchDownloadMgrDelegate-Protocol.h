//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMResBatchDownloadTask, NSArray;

@protocol MMResBatchDownloadMgrDelegate <NSObject>

@optional
- (void)onBatchDownloadFinish:(_Bool)arg1 errMsgList:(NSArray *)arg2 batchTask:(MMResBatchDownloadTask *)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class MMTimer, NSMutableArray;
@protocol UploadInputVoiceMgrDelegate;

@interface UploadInputVoiceMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned int _curVoiceId;
    _Bool _isUploading;
    _Bool _isEnd;
    id <UploadInputVoiceMgrDelegate> delegate;
    MMTimer *checkUploadQueueTimer;
    NSMutableArray *_uploadQueue;
}

@property(retain, nonatomic) NSMutableArray *_uploadQueue; // @synthesize _uploadQueue;
@property(retain, nonatomic) MMTimer *checkUploadQueueTimer; // @synthesize checkUploadQueueTimer;
@property(nonatomic) __weak id <UploadInputVoiceMgrDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)AddNewPart:(unsigned int)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (void)MainUpdateQueue:(id)arg1;
- (void)Stop;
- (void)Start:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (void)doUpload:(unsigned int)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (void)checkUploadQueue;
- (void)stopUploadTaskWithErr:(int)arg1;
- (void)stopUploadTask;
- (void)clearTempFile;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;

@end


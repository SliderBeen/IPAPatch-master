//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCUploadMedia, WCUploadTask;

@protocol WCTaskUploaderDelegate <NSObject>
- (void)onUploadFinished:(WCUploadTask *)arg1;
- (void)onMediaUploadFinished:(WCUploadMedia *)arg1 task:(WCUploadTask *)arg2;
@end


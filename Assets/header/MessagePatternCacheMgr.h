//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMMFontMgrExt-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MessagePatternCacheMgr : NSObject <IMMFontMgrExt>
{
    NSMutableDictionary *m_dicCache;
    NSObject<OS_dispatch_queue> *m_worker;
}

- (void).cxx_destruct;
- (void)OnMemoryWarning;
- (void)onFontSizeChange;
- (void)oniOS7FontChange;
- (void)DelMsgPatten:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)SaveCache:(id)arg1;
- (void)SetMsgPattern:(id)arg1 MsgWrap:(id)arg2;
- (id)GetMsgPattern:(id)arg1 MsgWrap:(id)arg2;
- (void)ClearAllCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


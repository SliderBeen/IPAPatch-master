//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBHandleWrapProtocol-Protocol.h"

@class NSRecursiveLock, NSString, WCDBRWLock;
@protocol WCDBHandlesPoolProtocol;

@interface WCDBHandlesPool : NSObject <WCDBHandleWrapProtocol>
{
    WCDBRWLock *m_handleLock;
    NSRecursiveLock *m_poolLock;
    struct map<NSThread *__weak, WCDBHandleWrap *, std::__1::less<NSThread *__weak>, std::__1::allocator<std::__1::pair<NSThread *const __weak, WCDBHandleWrap *>>> m_usedHandles;
    struct vector<WCDBHandleWrap *, std::__1::allocator<WCDBHandleWrap *>> m_freeHandles;
    NSString *m_dbPath;
    NSString *m_dbFilePath;
    unsigned int m_dataBaseId;
    struct map<WCDBMultiThreadStatus, long, std::__1::less<WCDBMultiThreadStatus>, std::__1::allocator<std::__1::pair<const WCDBMultiThreadStatus, long>>> m_multiThreadStatictics;
    long long m_lastStaticticsTime;
    id <WCDBHandlesPoolProtocol> _m_delegate;
}

@property __weak id <WCDBHandlesPoolProtocol> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(readonly, nonatomic) unsigned int m_dataBaseId; // @synthesize m_dataBaseId;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reportStaticticsMultiThread;
- (void)staticticsMultiThread:(id)arg1;
- (void)handleWrapWillEnd:(id)arg1;
- (void)forceCloseEnd;
- (void)forceCloseBegin;
- (void)forceCloseAndPreventOtherThreadsInBlock:(CDUnknownBlockType)arg1;
- (_Bool)isOpen;
- (struct WCDBScopedHandle)scopedHandle;
- (_Bool)generateHandle;
- (void)dealloc;
- (id)initWithPath:(id)arg1 filePath:(id)arg2 dataBaseId:(unsigned int)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


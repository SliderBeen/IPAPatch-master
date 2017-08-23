//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, lzCacheCleanManager;
@protocol OS_dispatch_queue;

@interface LZFileCacheManager : NSObject
{
    NSMutableDictionary *_fileCacheMgrDic;
    NSObject<OS_dispatch_queue> *_fileOptQueue;
    NSString *_cachePath;
    lzCacheCleanManager *_cleanMgr;
    void *_lzCacheMgrQueueKey;
    CDUnknownBlockType _normalFilterBlock;
}

+ (void)validCachePath:(id)arg1 obj:(id)arg2;
+ (void)initialize;
@property(copy) CDUnknownBlockType normalFilterBlock; // @synthesize normalFilterBlock=_normalFilterBlock;
@property(readonly, nonatomic) lzCacheCleanManager *cleanMgr; // @synthesize cleanMgr=_cleanMgr;
- (void).cxx_destruct;
- (void)cleanFileCaching:(id)arg1;
- (_Bool)createDirectoryIfNeed:(id)arg1;
- (id)fileNameForItem:(id)arg1 fileExt:(id)arg2;
- (_Bool)isFileCaching:(id)arg1;
- (_Bool)isFileAlreadyCached:(id)arg1;
- (_Bool)cacheLocalFile:(id)arg1 fileVid:(id)arg2 fileExt:(id)arg3 removeSrc:(_Bool)arg4;
- (id)buildFileSavePath:(id)arg1 fileVid:(id)arg2 fileExt:(id)arg3;
- (void)releaseFileCacheMgr:(id)arg1 forceClean:(_Bool)arg2;
- (id)acquireFileCacheMgr:(id)arg1 type:(unsigned long long)arg2 bLargeFile:(_Bool)arg3;
- (id)acquireFileCacheMgr:(id)arg1 type:(unsigned long long)arg2;
- (void)cleanCacheDir:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void)dealloc;
- (id)initWithQueueName:(const char *)arg1;
- (id)init;

@end


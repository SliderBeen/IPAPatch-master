//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSAudioPlayer, LZFileCacheManager;
@protocol KSAudioLogProtocol, OS_dispatch_queue;

@interface KSNewAudioPlayerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_audioProcessingQueue;
    void *_lzAudioMgrQueueKey;
    LZFileCacheManager *_fileCacheMgr;
    id <KSAudioLogProtocol> _logObj;
    KSAudioPlayer *_curAudioPlayer;
}

+ (id)cachePath;
+ (void)setCachePath:(id)arg1;
+ (id)sharedInstance;
+ (void)initialize;
@property(nonatomic) __weak KSAudioPlayer *curAudioPlayer; // @synthesize curAudioPlayer=_curAudioPlayer;
@property(retain) id <KSAudioLogProtocol> logObj; // @synthesize logObj=_logObj;
- (void).cxx_destruct;
- (void)log:(long long)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 EFDict:(id)arg5 msg:(id)arg6;
- (void)setLogProtocol:(id)arg1;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (void)interruption:(id)arg1;
- (void)setupAudioSession;
- (id)localCachePath:(id)arg1;
- (_Bool)cacheLocalFile:(id)arg1 fileVid:(id)arg2 fileExt:(id)arg3 removeSrc:(_Bool)arg4;
- (_Bool)isFileAlreadCachedByUrl:(id)arg1;
- (_Bool)isFileAlreadCachedByVid:(id)arg1;
- (void)cleanCacheDir:(CDUnknownBlockType)arg1;
- (void)setDefaultCleanFilter:(CDUnknownBlockType)arg1;
- (id)curPlayer;
- (void *)contextKey;
- (id)createAudioPlayer:(id)arg1;
- (id)fileCacheMgr;
- (void)dealloc;
- (id)initInner;
- (id)init;

@end


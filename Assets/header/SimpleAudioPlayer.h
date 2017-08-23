//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SimpleAudioState;

@interface SimpleAudioPlayer : NSObject
{
    _Bool _m_hasPrepare;
    SimpleAudioState *m_bufferState;
}

+ (void)sprintRetCode:(int)arg1;
@property(nonatomic) _Bool m_hasPrepare; // @synthesize m_hasPrepare=_m_hasPrepare;
@property(retain, nonatomic) SimpleAudioState *m_bufferState; // @synthesize m_bufferState;
- (void).cxx_destruct;
- (void)printRetCode:(int)arg1;
- (void)stop;
- (_Bool)play;
- (_Bool)preparePlay;
- (_Bool)audioQueueStop;
- (_Bool)audioQueueStart;
- (_Bool)updateBuffer;
- (void)clearBuffer;
- (_Bool)updateQueue;
- (void)clearQueue;
- (_Bool)updateDataFormat;
- (id)getState;
- (id)init;
- (void)dealloc;

@end


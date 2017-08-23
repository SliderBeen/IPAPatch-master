//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAudioRecorder.h"

@interface AQAudioRecorder : BaseAudioRecorder
{
    _Bool mIsNeedRestartMusic;
    _Bool mIsNeedRestartAudioTalk;
    _Bool mIsShakeTv;
    _Bool mDisableWritingToFile;
    float _pcmSampleRate;
    unsigned long long _firstTimeStamp;
}

@property(nonatomic) float pcmSampleRate; // @synthesize pcmSampleRate=_pcmSampleRate;
@property(nonatomic) unsigned long long firstTimeStamp; // @synthesize firstTimeStamp=_firstTimeStamp;
@property(nonatomic) _Bool disableWritingToFile; // @synthesize disableWritingToFile=mDisableWritingToFile;
@property(nonatomic) _Bool isShakeTv; // @synthesize isShakeTv=mIsShakeTv;
@property(nonatomic) _Bool needRestartAudioTalk; // @synthesize needRestartAudioTalk=mIsNeedRestartAudioTalk;
@property(nonatomic) _Bool needRestartMusic; // @synthesize needRestartMusic=mIsNeedRestartMusic;
- (void)autostop;
- (void)stop;
- (void)record;
- (_Bool)prepareRecordWithiLBCFile:(id)arg1;
- (_Bool)prepareRecordWithPCMFile:(id)arg1;
- (void)getAudioFingerPrintData:(char *)arg1 Length:(int *)arg2 UserData:(id *)arg3;
- (void)extractAudioFingerPrintData:(char *)arg1 Length:(int)arg2;
- (void)createQAFPFile:(id)arg1;
- (void)createWaveFile:(id)arg1;
- (_Bool)prepareRecordForQAFP_Impl;
- (_Bool)prepareRecordForQAFP;
- (_Bool)prepareRecordForQAFP_HD;
- (void)setDelegate:(id)arg1;
- (_Bool)canAutoRestart;
- (_Bool)shouldAutoRestartWith:(int)arg1;
- (id)init;
- (void)setMagicCookieToAudioFile:(struct OpaqueAudioFileID *)arg1;
- (void)prepareBuffers;
- (void)setDataFormat_PCM;
- (void)createAudioFile_WAVE:(id)arg1 Fd:(struct OpaqueAudioFileID **)arg2;
- (void)setDataFormat_iLBC;
- (void)createAudioFile_CAF:(id)arg1;

@end


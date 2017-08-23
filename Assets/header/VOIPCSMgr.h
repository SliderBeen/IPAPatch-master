//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AUAudioDataSource-Protocol.h"
#import "AVVideoDataSource-Protocol.h"
#import "AVVideoDeviceSessionDelegate-Protocol.h"
#import "IAUAudioDeviceExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"
#import "ISysCallCheckExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class AUAudioDevice, AVVideoDevice, CContact, CMMotionManager, MMTimer, NSArray, NSData, NSRecursiveLock, NSString, VOIPComponent, VOIPDialData, VOIPVideoRender;
@protocol IVOIPVideoDeviceDelegate, VoipCSDelegate;

@interface VOIPCSMgr : MMService <IAUAudioDeviceExt, INetworkStatusMgrExt, PBMessageObserverDelegate, MMService, AVVideoDeviceSessionDelegate, AVVideoDataSource, AUAudioDataSource, ISysCallCheckExt>
{
    _Bool mIsInterrupted;
    _Bool mIsGotRelayData;
    _Bool mIsGotStrategy;
    _Bool mIsGotSvrAddr;
    _Bool mIsCanConnect;
    _Bool mIsConnected;
    _Bool mIsCanTalk;
    _Bool mIsTalked;
    _Bool mIsEngineStarted;
    _Bool mIsCanSendData;
    _Bool mIsPreConnect;
    _Bool mIsVideoStarted;
    _Bool mIsAudioStarted;
    _Bool mIsRecordStarted;
    _Bool mIsPreConnectFail;
    id <IVOIPVideoDeviceDelegate> m_videoDeviceDelegate;
    _Bool mIsHWEncEnable;
    _Bool mIsHWEncUsing;
    unsigned int muiHWDecExceptionMask;
    int mHWErrorEncFrmCount;
    _Bool mIsHWDecEnable;
    _Bool mIsHWDecUsing;
    int mHWErrorDecFrmCount;
    _Bool mIReqFlag;
    _Bool mIsGetRemoteHW;
    _Bool mIsStopHWEnc;
    int mPrevFrmType;
    int mHWBR;
    int mHWIGap;
    int mHWWidth;
    int mHWHeight;
    char *mHWYUVbuffer;
    char *mCameraBuf;
    unsigned long long mHWYUVLength;
    struct __CVBuffer *mPixelBufferDS;
    _Bool m_usingFrontCameraLastFrame;
    _Bool mSendInviteStatus;
    _Bool mIsVideoInited;
    _Bool mHasAccept;
    _Bool mNeedHeartBeat;
    _Bool _mIsShouldSendSPS;
    _Bool _bForceKeyFrame;
    unsigned int mCaptureFrames;
    int send_fps;
    int recv_fps;
    int cap_fps;
    int recv_kbps;
    int send_kbps;
    int mVTEncStatus;
    int mVTDecStatus;
    int mCntTryStartAudioDev;
    unsigned int m_cameraChangeToOrientationLastCount;
    int mDialUsedTime;
    int mChannelConnectedTime;
    int mCallTime;
    int mCancelInviteTime;
    int mAnswerTime;
    int AudioTsdfBeyond3G;
    int AudioTsdfEdge;
    int PassthroughQosAlgorithm;
    int FastPlayRepair;
    int bUseNewP2S;
    int bAudioDTX;
    int bEnableRmIOAndS3A;
    int iAudioEnableSpkec;
    int mHWCloseCmd;
    int mInitNetType;
    unsigned int mLastNetworkStatus;
    int exitAbnormalStatus;
    int mOSType;
    int mMaxHWEncSize;
    int mMaxSWEncSize;
    unsigned int mNextInviteTimestamp;
    int callResultStatus;
    unsigned int mNotifySeq;
    unsigned int muiHWEncExceptionMask;
    unsigned int mCalleeMemberId;
    unsigned int _mInviteId;
    unsigned int _mVoIPType;
    int _status;
    unsigned int _mIsRemoteUserAbort;
    unsigned int _mIsUserAbort;
    unsigned int _mMaxBitRateCS;
    unsigned int _mMaxFPSCS;
    unsigned int _mTimeCounter;
    int _mLeftHWEncFrms;
    char *mPreviewBuf;
    long long m_videoOrientation;
    long long m_cameraOrientation;
    long long m_cameraChangeToOrientation;
    unsigned long long mSendInviteTime;
    unsigned long long mRecvInviteTime;
    unsigned long long mStartTalkingTime;
    unsigned long long mRecvFirstAVDataPacketTime;
    AVVideoDevice *mVideoDevice;
    MMTimer *mVoipTimer;
    MMTimer *mVoipCSCallingTimer;
    NSArray *_mVoipCSAddrList;
    NSData *_mLocalCapInfo;
    NSData *_mRemoteCapInfo;
    NSData *_mCallContext;
    AUAudioDevice *_mAudioDevice;
    CContact *_mContact;
    VOIPVideoRender *_inputVideoRender;
    VOIPVideoRender *_outputVideoRender;
    VOIPDialData *_mDialData;
    VOIPComponent *_mComponent;
    NSRecursiveLock *_mAudioEncLock;
    NSRecursiveLock *_mAudioDecLock;
    NSRecursiveLock *_mAudioPlayLock;
    NSRecursiveLock *_mVideoEncLock;
    NSRecursiveLock *_mVideoP2SLock;
    NSRecursiveLock *_mVideoDecLock;
    NSRecursiveLock *_mVideoHWEncLock;
    NSRecursiveLock *_mVideoHWDecLock;
    NSRecursiveLock *_inputVideoRenderLock;
    NSRecursiveLock *_outputVideoRenderLock;
    NSRecursiveLock *_mStartVideoLock;
    NSRecursiveLock *_mStartAudioLock;
    NSRecursiveLock *_mStartRecordLock;
    CMMotionManager *_m_motionMgr;
    struct OpaqueVTCompressionSession *_mVTCompressionSession;
    struct OpaqueVTDecompressionSession *_mVTDecompressionSession;
    struct opaqueCMFormatDescription *_mVTDecFormat;
    id <VoipCSDelegate> _m_voipCSDelegate;
    struct timeval mStartTalkTime;
    struct tagDialReport _dialReport;
}

@property(nonatomic) __weak id <VoipCSDelegate> m_voipCSDelegate; // @synthesize m_voipCSDelegate=_m_voipCSDelegate;
@property _Bool bForceKeyFrame; // @synthesize bForceKeyFrame=_bForceKeyFrame;
@property int mLeftHWEncFrms; // @synthesize mLeftHWEncFrms=_mLeftHWEncFrms;
@property _Bool mIsShouldSendSPS; // @synthesize mIsShouldSendSPS=_mIsShouldSendSPS;
@property struct opaqueCMFormatDescription *mVTDecFormat; // @synthesize mVTDecFormat=_mVTDecFormat;
@property struct OpaqueVTDecompressionSession *mVTDecompressionSession; // @synthesize mVTDecompressionSession=_mVTDecompressionSession;
@property struct OpaqueVTCompressionSession *mVTCompressionSession; // @synthesize mVTCompressionSession=_mVTCompressionSession;
@property(nonatomic) unsigned int mTimeCounter; // @synthesize mTimeCounter=_mTimeCounter;
@property(nonatomic) unsigned int mMaxFPSCS; // @synthesize mMaxFPSCS=_mMaxFPSCS;
@property(nonatomic) unsigned int mMaxBitRateCS; // @synthesize mMaxBitRateCS=_mMaxBitRateCS;
@property(retain, nonatomic) CMMotionManager *m_motionMgr; // @synthesize m_motionMgr=_m_motionMgr;
@property(retain, nonatomic) NSRecursiveLock *mStartRecordLock; // @synthesize mStartRecordLock=_mStartRecordLock;
@property(retain, nonatomic) NSRecursiveLock *mStartAudioLock; // @synthesize mStartAudioLock=_mStartAudioLock;
@property(retain, nonatomic) NSRecursiveLock *mStartVideoLock; // @synthesize mStartVideoLock=_mStartVideoLock;
@property(retain, nonatomic) NSRecursiveLock *outputVideoRenderLock; // @synthesize outputVideoRenderLock=_outputVideoRenderLock;
@property(retain, nonatomic) NSRecursiveLock *inputVideoRenderLock; // @synthesize inputVideoRenderLock=_inputVideoRenderLock;
@property(retain, nonatomic) NSRecursiveLock *mVideoHWDecLock; // @synthesize mVideoHWDecLock=_mVideoHWDecLock;
@property(retain, nonatomic) NSRecursiveLock *mVideoHWEncLock; // @synthesize mVideoHWEncLock=_mVideoHWEncLock;
@property(retain, nonatomic) NSRecursiveLock *mVideoDecLock; // @synthesize mVideoDecLock=_mVideoDecLock;
@property(retain, nonatomic) NSRecursiveLock *mVideoP2SLock; // @synthesize mVideoP2SLock=_mVideoP2SLock;
@property(retain, nonatomic) NSRecursiveLock *mVideoEncLock; // @synthesize mVideoEncLock=_mVideoEncLock;
@property(retain, nonatomic) NSRecursiveLock *mAudioPlayLock; // @synthesize mAudioPlayLock=_mAudioPlayLock;
@property(retain, nonatomic) NSRecursiveLock *mAudioDecLock; // @synthesize mAudioDecLock=_mAudioDecLock;
@property(retain, nonatomic) NSRecursiveLock *mAudioEncLock; // @synthesize mAudioEncLock=_mAudioEncLock;
@property(nonatomic) struct tagDialReport dialReport; // @synthesize dialReport=_dialReport;
@property(nonatomic) unsigned int mIsUserAbort; // @synthesize mIsUserAbort=_mIsUserAbort;
@property(nonatomic) unsigned int mIsRemoteUserAbort; // @synthesize mIsRemoteUserAbort=_mIsRemoteUserAbort;
@property(retain, nonatomic) VOIPComponent *mComponent; // @synthesize mComponent=_mComponent;
@property(retain, nonatomic) VOIPDialData *mDialData; // @synthesize mDialData=_mDialData;
@property(retain, nonatomic) VOIPVideoRender *outputVideoRender; // @synthesize outputVideoRender=_outputVideoRender;
@property(retain, nonatomic) VOIPVideoRender *inputVideoRender; // @synthesize inputVideoRender=_inputVideoRender;
@property(retain, nonatomic) CContact *mContact; // @synthesize mContact=_mContact;
@property(retain, nonatomic) AUAudioDevice *mAudioDevice; // @synthesize mAudioDevice=_mAudioDevice;
@property(retain, nonatomic) NSData *mCallContext; // @synthesize mCallContext=_mCallContext;
@property(retain, nonatomic) NSData *mRemoteCapInfo; // @synthesize mRemoteCapInfo=_mRemoteCapInfo;
@property(retain, nonatomic) NSData *mLocalCapInfo; // @synthesize mLocalCapInfo=_mLocalCapInfo;
@property(retain, nonatomic) NSArray *mVoipCSAddrList; // @synthesize mVoipCSAddrList=_mVoipCSAddrList;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned int mVoIPType; // @synthesize mVoIPType=_mVoIPType;
@property(nonatomic) unsigned int mInviteId; // @synthesize mInviteId=_mInviteId;
@property(nonatomic) unsigned int mCalleeMemberId; // @synthesize mCalleeMemberId;
@property(nonatomic) _Bool mNeedHeartBeat; // @synthesize mNeedHeartBeat;
@property(nonatomic) unsigned int muiHWEncExceptionMask; // @synthesize muiHWEncExceptionMask;
@property(nonatomic) unsigned int mNotifySeq; // @synthesize mNotifySeq;
@property(nonatomic) _Bool mHasAccept; // @synthesize mHasAccept;
@property(retain, nonatomic) MMTimer *mVoipCSCallingTimer; // @synthesize mVoipCSCallingTimer;
@property(retain, nonatomic) MMTimer *mVoipTimer; // @synthesize mVoipTimer;
@property(nonatomic) int callResultStatus; // @synthesize callResultStatus;
@property(nonatomic) unsigned int mNextInviteTimestamp; // @synthesize mNextInviteTimestamp;
@property(retain, nonatomic) AVVideoDevice *mVideoDevice; // @synthesize mVideoDevice;
@property(nonatomic) int mMaxSWEncSize; // @synthesize mMaxSWEncSize;
@property(nonatomic) int mMaxHWEncSize; // @synthesize mMaxHWEncSize;
@property(nonatomic) int mOSType; // @synthesize mOSType;
@property(nonatomic) unsigned long long mRecvFirstAVDataPacketTime; // @synthesize mRecvFirstAVDataPacketTime;
@property(nonatomic) _Bool mIsVideoInited; // @synthesize mIsVideoInited;
@property(nonatomic) int exitAbnormalStatus; // @synthesize exitAbnormalStatus;
@property(nonatomic) unsigned int mLastNetworkStatus; // @synthesize mLastNetworkStatus;
@property(nonatomic) int mInitNetType; // @synthesize mInitNetType;
@property(nonatomic) unsigned long long mStartTalkingTime; // @synthesize mStartTalkingTime;
@property(nonatomic) int mHWCloseCmd; // @synthesize mHWCloseCmd;
@property(nonatomic) int iAudioEnableSpkec; // @synthesize iAudioEnableSpkec;
@property(nonatomic) int bEnableRmIOAndS3A; // @synthesize bEnableRmIOAndS3A;
@property(nonatomic) int bAudioDTX; // @synthesize bAudioDTX;
@property(nonatomic) int bUseNewP2S; // @synthesize bUseNewP2S;
@property(nonatomic) int FastPlayRepair; // @synthesize FastPlayRepair;
@property(nonatomic) int PassthroughQosAlgorithm; // @synthesize PassthroughQosAlgorithm;
@property(nonatomic) int AudioTsdfEdge; // @synthesize AudioTsdfEdge;
@property(nonatomic) int AudioTsdfBeyond3G; // @synthesize AudioTsdfBeyond3G;
@property(nonatomic) int mAnswerTime; // @synthesize mAnswerTime;
@property(nonatomic) int mCancelInviteTime; // @synthesize mCancelInviteTime;
@property(nonatomic) int mCallTime; // @synthesize mCallTime;
@property(nonatomic) int mChannelConnectedTime; // @synthesize mChannelConnectedTime;
@property(nonatomic) int mDialUsedTime; // @synthesize mDialUsedTime;
@property(nonatomic) struct timeval mStartTalkTime; // @synthesize mStartTalkTime;
@property(nonatomic) unsigned long long mRecvInviteTime; // @synthesize mRecvInviteTime;
@property(nonatomic) _Bool mSendInviteStatus; // @synthesize mSendInviteStatus;
@property(nonatomic) unsigned long long mSendInviteTime; // @synthesize mSendInviteTime;
@property(nonatomic) unsigned int m_cameraChangeToOrientationLastCount; // @synthesize m_cameraChangeToOrientationLastCount;
@property(nonatomic) long long m_cameraChangeToOrientation; // @synthesize m_cameraChangeToOrientation;
@property(nonatomic) _Bool m_usingFrontCameraLastFrame; // @synthesize m_usingFrontCameraLastFrame;
@property(nonatomic) long long m_cameraOrientation; // @synthesize m_cameraOrientation;
@property(nonatomic) long long m_videoOrientation; // @synthesize m_videoOrientation;
@property(nonatomic) int mCntTryStartAudioDev; // @synthesize mCntTryStartAudioDev;
@property int mVTDecStatus; // @synthesize mVTDecStatus;
@property int mVTEncStatus; // @synthesize mVTEncStatus;
@property(nonatomic) int send_kbps; // @synthesize send_kbps;
@property(nonatomic) int recv_kbps; // @synthesize recv_kbps;
@property(nonatomic) int cap_fps; // @synthesize cap_fps;
@property(nonatomic) int recv_fps; // @synthesize recv_fps;
@property(nonatomic) int send_fps; // @synthesize send_fps;
@property(nonatomic) unsigned int mCaptureFrames; // @synthesize mCaptureFrames;
@property(nonatomic) char *mPreviewBuf; // @synthesize mPreviewBuf;
- (void).cxx_destruct;
- (void)SetVoipCSDelegate:(id)arg1;
- (void)BeginInterruption;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (int)GetFrmType;
- (int)VideoDevPutData:(int)arg1 frmData:(char *)arg2 imageWidth:(unsigned int)arg3 imageHeight:(unsigned int)arg4;
- (void)StopSessionWithProtocolErr:(int)arg1;
- (void)StopSession;
- (void)StopHeartBeat;
- (void)StartHeartBeat;
- (void)TimerCheck;
- (void)StopHWDec;
- (void)StopHWEnc;
- (void)UpdateHWQosParam;
- (void)UpdateHWDecSession;
- (void)SetHWEncBR:(int)arg1;
- (int)DecFrmError;
- (void)EventNotify:(long long)arg1 param:(int)arg2 type:(int)arg3;
- (void)RenderTexture:(struct __CVBuffer *)arg1;
- (_Bool)IsCanTalkAndSendData;
- (void)setVideoDelegate:(id)arg1;
- (void)SetStatus:(int)arg1 andErrNo:(int)arg2;
- (void)CalcNewDailUsedTime;
- (void)handleEnterForeground;
- (void)handleEnterBackground;
- (void)CancelCall:(int)arg1;
- (void)StartSession;
- (void)setVideoDeviceDelegate:(id)arg1;
- (void)onVideoSessionStartComplete;
- (_Bool)getIsTalked;
- (unsigned int)getNotifySeq;
- (unsigned int)getRoomType;
- (unsigned long long)getRoomId;
- (unsigned long long)getRoomKey;
- (void)SetCallContext:(id)arg1;
- (void)Hangup:(unsigned int)arg1;
- (void)VideoCall:(id)arg1 withCallType:(unsigned int)arg2 appid:(id)arg3;
- (void)AudioCall:(id)arg1 withCallType:(unsigned int)arg2 appid:(id)arg3;
- (void)RealCall:(id)arg1 withCallType:(id)arg2 appid:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)VoipCSSyncWithRoomId:(unsigned long long)arg1 roomKey:(unsigned long long)arg2 syncSeq:(unsigned int)arg3 MemberId:(unsigned int)arg4 status:(unsigned int)arg5 substatus:(unsigned int)arg6 cap:(const void *)arg7 capLen:(unsigned long long)arg8;
- (void)GetLocalCapInfoWithVoipType:(unsigned int)arg1;
- (void)HandleVoipCSRedirectResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSReportResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSHeartBeatResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSHangupResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSInviteResp:(id)arg1 Event:(unsigned int)arg2;
- (void)SendVoipCSRedirectReq;
- (void)SendVoipCSHeartBeatReq;
- (void)SendVoipCSSyncReqBy:(unsigned int)arg1;
- (void)SendVoipCSHangupReqBy:(id)arg1 reason:(unsigned int)arg2;
- (void)SendVoipCSInviteReqBy:(id)arg1 appid:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)SetMicroPhoneMute:(_Bool)arg1;
- (void)FlipCamera;
- (_Bool)isCameraFront;
- (void)StartLocalVideo;
- (void)resetCameraDevice;
- (void)updateCameraPosToFitDevice;
- (void)setCameraPos:(long long)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceUnPluginHeadset:(id)arg1;
- (void)audioDevicePluginHeadset:(id)arg1;
- (void)audioDeviceFarawayEar:(id)arg1;
- (void)audioDeviceNearEar:(id)arg1;
- (void)SetCSReportData:(id *)arg1 voipCS3rdReport:(id *)arg2 channelReport:(id *)arg3 engineReport:(id *)arg4;
- (unsigned int)getNetworkType;
- (void)DataNotify_pp:(char *)arg1 len:(int)arg2 param:(short)arg3;
- (void)DataNotify_Arq:(char *)arg1 len:(int)arg2 type:(unsigned char)arg3;
- (void)DataNotify:(char *)arg1 len:(int)arg2;
- (void)OnCSVoipNotify:(id)arg1;
- (int)OnTransportChannelData:(int)arg1 pData:(void *)arg2 len:(int)arg3;
- (void)StopCSTalk;
- (void)StartCSTalk;
- (void)ConnectFail:(id)arg1;
- (void)NetworkErr:(id)arg1;
- (void)TalkBroken:(id)arg1;
- (int)OnCSChannelEvent:(unsigned short)arg1 ErrNo:(int)arg2;
- (void)StopCSConnect;
- (void)StartCSConnect;
- (int)InitVoipCSChannel;
- (void)StopCSEngine;
- (void)StartCSEngine;
- (void)SetMVEInfo:(CDStruct_33d8b17a *)arg1;
- (int)GetHWEncWidth;
- (void)SendCloseHWEncCmd:(int)arg1;
- (int)ReInitHWEnc;
- (void)StartVideoData;
- (void)StartRecordAndPlayAudioForVoip;
- (void)StartAudioDataInNewThread;
- (void)StartAudioData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


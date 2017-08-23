//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VOIPReportData : NSObject
{
}

+ (void)ReportCalledActionWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithUserActionType:(int)arg4;
+ (void)ReportPushUIReportWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithAckStatus:(int)arg4 WithNetType:(int)arg5 WithTimeStamp:(unsigned long long)arg6;
+ (void)ReportGetRoomInfoWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithRespType:(unsigned int)arg4 WithTimeStamp:(unsigned long long)arg5;
+ (void)ReportDataNotifyWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithTimeStamp:(unsigned long long)arg4;
+ (void)ReportVoipTalkingWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithRoomMemberId:(int)arg4 WithIsTalkingStatus:(int)arg5;
+ (void)ReportVoipCancelInviteWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithCancelInvite:(int)arg4 WithCancelTime:(int)arg5 WithTimeStamp:(unsigned long long)arg6;
+ (void)ReportVoipGotRemoteStatusWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithRemoteStatus:(int)arg4;
+ (void)ReportVoipStartCallWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithStartCallStatus:(int)arg4 WithNetType:(int)arg5;
+ (void)ReportAudioEntranceHandsFree:(_Bool)arg1;
+ (void)ReportAudioEntranceMute:(_Bool)arg1;
+ (void)ReportVideoEntrnaceHandsFree:(_Bool)arg1;
+ (void)ReportVideoEntranceMute:(_Bool)arg1;
+ (void)ReportVoipActionClickBigPreview;
+ (void)ReportVoipActionClickSmallPreview;
+ (void)ReportVoipActionDragSmallPreview;
+ (void)ReportVoipActionSwitchCamera;
+ (void)ReportSwitchToVoiceAfterAcceptWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3;
+ (void)ReportSwitchToVoiceBeforeAcceptWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3;
+ (void)ReportSwitchToVoiceBeforeRemoteAcceptWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3;
+ (void)ReportSelectVoiceVoipFriendFromPlus;
+ (void)ReportSelectVoipFriendFromPlus;
+ (void)ReportAudioCallFromProfile;
+ (void)ReportAudioCallFromPlugin;
+ (void)ReportAudioCallFromMessageOver;
+ (void)ReportAudioCallFromMessageInterrpt;
+ (void)ReportAudioCallFromMessageNotConnect;
+ (void)ReportAudioCallFromPlus;
+ (void)ReportVideoCallFromProfile;
+ (void)ReportVideoCallFromPlugin;
+ (void)ReportVideoCallFromMessageOver;
+ (void)ReportVideoCallFromMessageInterrpt;
+ (void)ReportVideoCallFromMessageNotConnect;
+ (void)ReportVideoCallFromPlus;
+ (void)ReportVoipSoundActionInitType:(unsigned int)arg1 Mute:(_Bool)arg2;
+ (void)ReportVoipSoundActionInitType:(unsigned int)arg1 HandsFree:(_Bool)arg2;
+ (void)ReportVoipActionType:(unsigned int)arg1;
+ (void)ReportSwitchToVoiceAcceptWithRoomId:(int)arg1 WithRoomKey:(long long)arg2 WithRoomType:(unsigned int)arg3 WithScene:(unsigned int)arg4 WithUserType:(int)arg5;
+ (void)ReportVoipSelectFriendScene:(unsigned int)arg1 CallType:(unsigned int)arg2;
+ (void)ReportVoipCallFromScene:(unsigned int)arg1 CallType:(unsigned int)arg2 WordingType:(unsigned int)arg3;

@end


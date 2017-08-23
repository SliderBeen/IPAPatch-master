//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSString, WXCPbPlayItemInfo, WXCPbVoiceConf, WXCPbVoiceGroupInfo, WXCPbVoiceSingle2MultiInfo;

@interface WXCTalkRoomData : NSObject <NSCoding, NSCopying>
{
    int _roomId;
    int _routeId;
    WXCPbVoiceGroupInfo *_groupInfo;
    long long _roomKey;
    NSMutableArray *_userProfileList;
    WXCPbVoiceConf *_voiceConf;
    NSMutableArray *_groupMemberList;
    WXCPbVoiceSingle2MultiInfo *_single2multi;
    NSString *_serverGroupId;
    NSString *_clientGroupId;
    NSData *_wisperData;
    NSMutableDictionary *_memberTalkingStateDict;
    NSMutableDictionary *_memeberTalkingValidDateDict;
    NSString *_uniqueSdkTalkID;
    WXCPbPlayItemInfo *_playItemInfoCache;
}

@property(retain, nonatomic) WXCPbPlayItemInfo *playItemInfoCache; // @synthesize playItemInfoCache=_playItemInfoCache;
@property(copy, nonatomic) NSString *uniqueSdkTalkID; // @synthesize uniqueSdkTalkID=_uniqueSdkTalkID;
@property(retain) NSMutableDictionary *memeberTalkingValidDateDict; // @synthesize memeberTalkingValidDateDict=_memeberTalkingValidDateDict;
@property(retain) NSMutableDictionary *memberTalkingStateDict; // @synthesize memberTalkingStateDict=_memberTalkingStateDict;
@property(retain, nonatomic) NSData *wisperData; // @synthesize wisperData=_wisperData;
@property(nonatomic) int routeId; // @synthesize routeId=_routeId;
@property(copy, nonatomic) NSString *clientGroupId; // @synthesize clientGroupId=_clientGroupId;
@property(copy, nonatomic) NSString *serverGroupId; // @synthesize serverGroupId=_serverGroupId;
@property(retain, nonatomic) WXCPbVoiceSingle2MultiInfo *single2multi; // @synthesize single2multi=_single2multi;
@property(retain, nonatomic) NSMutableArray *groupMemberList; // @synthesize groupMemberList=_groupMemberList;
@property(retain, nonatomic) WXCPbVoiceConf *voiceConf; // @synthesize voiceConf=_voiceConf;
@property(retain, nonatomic) NSMutableArray *userProfileList; // @synthesize userProfileList=_userProfileList;
@property(nonatomic) long long roomKey; // @synthesize roomKey=_roomKey;
@property(nonatomic) int roomId; // @synthesize roomId=_roomId;
@property(readonly, retain, nonatomic) WXCPbVoiceGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
- (void).cxx_destruct;
- (void)clearMemberTalkingDictionaries;
- (void)initMemberTalkingDictionaries;
- (_Bool)isMemberTalking:(id)arg1;
- (void)setMemberIsTalkingStateToYES:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *localGroupId;
- (_Bool)checkRoomStateActive;
- (_Bool)checkOnlyExitSystemWxFriend;
- (_Bool)chechMemberIsActive:(long long)arg1;
- (int)getMemberStatu:(long long)arg1;
- (id)shortDesc;
- (id)description;
- (void)assignGroupId:(id)arg1;
- (void)assignFromTalkMsg:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)assignGroupInfo:(id)arg1;
@property(readonly, nonatomic) WXCPbPlayItemInfo *playItemInfo;
- (id)getGroupDesc;
- (unsigned long long)getTogetherId;
- (id)getShareUrlString;
- (void)reset;
- (void)dealloc;
- (id)init;

@end


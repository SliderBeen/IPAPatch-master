//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GameCenterEntranceInfo, GameCenterMsgCenterContent, GameCenterMsgFloayLayerInfo, GameCenterNotifyContent, NSArray, NSMutableDictionary, NSString;

@interface GameCenterBaseMsg : NSObject
{
    _Bool _wifiFlag;
    int _type;
    unsigned int _localId;
    NSString *_svrMsgId;
    NSString *_weightStr;
    NSString *_mergeId;
    GameCenterEntranceInfo *_entranceInfo;
    GameCenterMsgFloayLayerInfo *_floatLayerInfo;
    NSArray *_userInfoList;
    NSMutableDictionary *_jumpInfoDic;
    NSString *_originMsg;
    GameCenterNotifyContent *_notifyContent;
    GameCenterMsgCenterContent *_msgCenterContent;
}

+ (id)parseFromDbItem:(id)arg1;
+ (id)parseFromMsgWrap:(id)arg1;
+ (id)msgWithType:(unsigned int)arg1 xmlNode:(struct XmlReaderNode_t *)arg2;
+ (struct XmlReaderNode_t *)getRootNode:(id)arg1;
@property(retain, nonatomic) GameCenterMsgCenterContent *msgCenterContent; // @synthesize msgCenterContent=_msgCenterContent;
@property(retain, nonatomic) GameCenterNotifyContent *notifyContent; // @synthesize notifyContent=_notifyContent;
@property(retain, nonatomic) NSString *originMsg; // @synthesize originMsg=_originMsg;
@property(retain, nonatomic) NSMutableDictionary *jumpInfoDic; // @synthesize jumpInfoDic=_jumpInfoDic;
@property(retain, nonatomic) NSArray *userInfoList; // @synthesize userInfoList=_userInfoList;
@property(retain, nonatomic) GameCenterMsgFloayLayerInfo *floatLayerInfo; // @synthesize floatLayerInfo=_floatLayerInfo;
@property(retain, nonatomic) GameCenterEntranceInfo *entranceInfo; // @synthesize entranceInfo=_entranceInfo;
@property(nonatomic) _Bool wifiFlag; // @synthesize wifiFlag=_wifiFlag;
@property(retain, nonatomic) NSString *mergeId; // @synthesize mergeId=_mergeId;
@property(retain, nonatomic) NSString *weightStr; // @synthesize weightStr=_weightStr;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)getNoticeid;
- (id)appid;
- (unsigned int)createTime;
- (_Bool)notInMsgCenter;
- (_Bool)isExpired;
- (int)getMsgReportType;
- (id)parseUserInfo:(struct XmlReaderNode_t *)arg1;
- (id)getJumpInfo:(struct XmlReaderNode_t *)arg1;
- (_Bool)weightMoreThan:(id)arg1;
- (id)getMsgCenterContent;
- (id)getNotifyContent;
- (id)parseJumpInfo:(struct XmlReaderNode_t *)arg1;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;

@end


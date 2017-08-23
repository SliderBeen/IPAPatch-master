//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class CContact, CMessageWrap, MMSessionInfoExt, NSString;

@interface MMSessionInfo : NSObject <WCDBCoding>
{
    NSString *m_nsUserName;
    NSString *m_nsFilePath;
    unsigned int m_uUnReadCount;
    _Bool m_bShowUnReadAsRedDot;
    CContact *m_contact;
    CMessageWrap *m_msgWrap;
    unsigned int m_uLastTime;
    _Bool m_bIsTop;
    unsigned int m_uTopTime;
    unsigned int m_uUnTopTime;
    unsigned int m_uAtMeCount;
    unsigned int m_uGreenLabelType;
    NSString *m_draftMsg;
    unsigned int m_draftMsgTime;
    NSString *m_atUserList;
    unsigned int m_uNewInvCount;
    _Bool m_uNewInvApprove;
    unsigned int ConIntRes2;
    MMSessionInfoExt *m_extendFields;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) _Bool m_uNewInvApprove; // @synthesize m_uNewInvApprove;
@property(nonatomic) unsigned int m_uNewInvCount; // @synthesize m_uNewInvCount;
@property(retain, nonatomic) NSString *m_atUserList; // @synthesize m_atUserList;
@property(nonatomic) unsigned int m_draftMsgTime; // @synthesize m_draftMsgTime;
@property(retain, nonatomic) NSString *m_draftMsg; // @synthesize m_draftMsg;
@property(nonatomic) unsigned int m_uGreenLabelType; // @synthesize m_uGreenLabelType;
@property(nonatomic) unsigned int m_uAtMeCount; // @synthesize m_uAtMeCount;
@property(nonatomic) unsigned int m_uUnTopTime; // @synthesize m_uUnTopTime;
@property(nonatomic) unsigned int m_uTopTime; // @synthesize m_uTopTime;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) _Bool m_bIsTop; // @synthesize m_bIsTop;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) MMSessionInfoExt *m_extendFields; // @synthesize m_extendFields;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) _Bool m_bShowUnReadAsRedDot; // @synthesize m_bShowUnReadAsRedDot;
@property(nonatomic) unsigned int m_uUnReadCount; // @synthesize m_uUnReadCount;
@property(nonatomic) unsigned int m_uLastTime; // @synthesize m_uLastTime;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (void)tryLoadExtInfo;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_0b759a70 *)db_m_extendFields;
- (const WCDBCondition_22fabacd *)db_m_nsFilePath;
- (const WCDBCondition_c6db074e *)db_ConIntRes2;
- (const WCDBCondition_c6db074e *)db_m_bShowUnReadAsRedDot;
- (const WCDBCondition_c6db074e *)db_m_uUnReadCount;
- (const WCDBCondition_c6db074e *)db_m_uLastTime;
- (const WCDBCondition_22fabacd *)db_m_nsUserName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


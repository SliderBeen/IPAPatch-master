//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface DBFavoritesItem : NSObject <WCDBCoding>
{
    unsigned int localId;
    unsigned int favId;
    unsigned int type;
    unsigned int time;
    unsigned int status;
    unsigned int updateSeq;
    unsigned int localUpdateSeq;
    unsigned int sourceType;
    unsigned int localStatus;
    unsigned int dataTotalSize;
    unsigned int IntRes2;
    unsigned int IntRes3;
    NSString *fromUser;
    NSString *toUser;
    NSString *realChatName;
    NSString *sourceId;
    NSString *xml;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *StrRes3;
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
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes3; // @synthesize IntRes3;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int dataTotalSize; // @synthesize dataTotalSize;
@property(retain, nonatomic) NSString *xml; // @synthesize xml;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId;
@property(nonatomic) unsigned int localStatus; // @synthesize localStatus;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName;
@property(retain, nonatomic) NSString *toUser; // @synthesize toUser;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser;
@property(nonatomic) unsigned int localUpdateSeq; // @synthesize localUpdateSeq;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned int time; // @synthesize time;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(nonatomic) unsigned int favId; // @synthesize favId;
@property(nonatomic) unsigned int localId; // @synthesize localId;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_StrRes3;
- (const WCDBCondition_22fabacd *)db_StrRes2;
- (const WCDBCondition_22fabacd *)db_StrRes1;
- (const WCDBCondition_c6db074e *)db_IntRes3;
- (const WCDBCondition_c6db074e *)db_IntRes2;
- (const WCDBCondition_c6db074e *)db_dataTotalSize;
- (const WCDBCondition_22fabacd *)db_xml;
- (const WCDBCondition_22fabacd *)db_sourceId;
- (const WCDBCondition_c6db074e *)db_localStatus;
- (const WCDBCondition_c6db074e *)db_sourceType;
- (const WCDBCondition_22fabacd *)db_realChatName;
- (const WCDBCondition_22fabacd *)db_toUser;
- (const WCDBCondition_22fabacd *)db_fromUser;
- (const WCDBCondition_c6db074e *)db_localUpdateSeq;
- (const WCDBCondition_c6db074e *)db_updateSeq;
- (const WCDBCondition_c6db074e *)db_status;
- (const WCDBCondition_c6db074e *)db_time;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_c6db074e *)db_favId;
- (const WCDBCondition_c6db074e *)db_localId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface DBBottleContact : NSObject <WCDBCoding>
{
    unsigned int sex;
    unsigned int imageKey;
    unsigned int imageKeyLast;
    unsigned int extKey;
    unsigned int extKeyLast;
    unsigned int BottleContactINTRES1;
    unsigned int BottleContactINTRES2;
    unsigned int BottleContactINTRES3;
    NSString *userName;
    NSString *nickName;
    NSString *imageStatus;
    NSString *hdImageStatus;
    NSString *province;
    NSString *city;
    NSString *sign;
    NSString *ext;
    NSString *BottleContactTEXTRES2;
    NSString *BottleContactTEXTRES3;
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
@property(retain, nonatomic) NSString *BottleContactTEXTRES3; // @synthesize BottleContactTEXTRES3;
@property(retain, nonatomic) NSString *BottleContactTEXTRES2; // @synthesize BottleContactTEXTRES2;
@property(retain, nonatomic) NSString *ext; // @synthesize ext;
@property(nonatomic) unsigned int BottleContactINTRES3; // @synthesize BottleContactINTRES3;
@property(nonatomic) unsigned int BottleContactINTRES2; // @synthesize BottleContactINTRES2;
@property(nonatomic) unsigned int BottleContactINTRES1; // @synthesize BottleContactINTRES1;
@property(nonatomic) unsigned int extKeyLast; // @synthesize extKeyLast;
@property(nonatomic) unsigned int extKey; // @synthesize extKey;
@property(nonatomic) unsigned int imageKeyLast; // @synthesize imageKeyLast;
@property(nonatomic) unsigned int imageKey; // @synthesize imageKey;
@property(retain, nonatomic) NSString *sign; // @synthesize sign;
@property(retain, nonatomic) NSString *city; // @synthesize city;
@property(retain, nonatomic) NSString *province; // @synthesize province;
@property(retain, nonatomic) NSString *hdImageStatus; // @synthesize hdImageStatus;
@property(retain, nonatomic) NSString *imageStatus; // @synthesize imageStatus;
@property(nonatomic) unsigned int sex; // @synthesize sex;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_BottleContactTEXTRES3;
- (const WCDBCondition_22fabacd *)db_BottleContactTEXTRES2;
- (const WCDBCondition_22fabacd *)db_ext;
- (const WCDBCondition_c6db074e *)db_BottleContactINTRES3;
- (const WCDBCondition_c6db074e *)db_BottleContactINTRES2;
- (const WCDBCondition_c6db074e *)db_BottleContactINTRES1;
- (const WCDBCondition_c6db074e *)db_extKeyLast;
- (const WCDBCondition_c6db074e *)db_extKey;
- (const WCDBCondition_c6db074e *)db_imageKeyLast;
- (const WCDBCondition_c6db074e *)db_imageKey;
- (const WCDBCondition_22fabacd *)db_sign;
- (const WCDBCondition_22fabacd *)db_city;
- (const WCDBCondition_22fabacd *)db_province;
- (const WCDBCondition_22fabacd *)db_hdImageStatus;
- (const WCDBCondition_22fabacd *)db_imageStatus;
- (const WCDBCondition_c6db074e *)db_sex;
- (const WCDBCondition_22fabacd *)db_nickName;
- (const WCDBCondition_22fabacd *)db_userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


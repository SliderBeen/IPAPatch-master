//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponentData.h"

@class NSString;

@interface MMFavNameComponentData : MMComponentData
{
    _Bool bShowDataSize;
    unsigned int _m_uiFavUpDateTime;
    NSString *m_nameId;
    NSString *m_fromUsr;
    NSString *m_brand;
    NSString *m_toUsr;
    NSString *m_realChatName;
    long long favType;
    long long dataSize;
}

@property(nonatomic) unsigned int m_uiFavUpDateTime; // @synthesize m_uiFavUpDateTime=_m_uiFavUpDateTime;
@property(nonatomic) _Bool bShowDataSize; // @synthesize bShowDataSize;
@property(nonatomic) long long dataSize; // @synthesize dataSize;
@property(nonatomic) long long favType; // @synthesize favType;
@property(retain, nonatomic) NSString *m_realChatName; // @synthesize m_realChatName;
@property(retain, nonatomic) NSString *m_toUsr; // @synthesize m_toUsr;
@property(retain, nonatomic) NSString *m_brand; // @synthesize m_brand;
@property(retain, nonatomic) NSString *m_fromUsr; // @synthesize m_fromUsr;
@property(retain, nonatomic) NSString *m_nameId; // @synthesize m_nameId;
- (void).cxx_destruct;

@end


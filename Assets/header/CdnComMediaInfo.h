//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnComMediaInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    NSString *m_nsFileID;
    NSString *m_nsAesKey;
    unsigned int m_uiFileTotalLen;
    unsigned int m_uiScene;
    NSString *m_nsExtInfo;
    _Bool m_bNeedMediaId;
    _Bool _m_bNeedStorage;
    NSString *m_nsMediaType;
}

@property(nonatomic) _Bool m_bNeedStorage; // @synthesize m_bNeedStorage=_m_bNeedStorage;
@property(nonatomic) _Bool m_bNeedMediaId; // @synthesize m_bNeedMediaId;
@property(retain, nonatomic) NSString *m_nsMediaType; // @synthesize m_nsMediaType;
@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) unsigned int m_uiFileTotalLen; // @synthesize m_uiFileTotalLen;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsFileID; // @synthesize m_nsFileID;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (void).cxx_destruct;
- (id)init;

@end


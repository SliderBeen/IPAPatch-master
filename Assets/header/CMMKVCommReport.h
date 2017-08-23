//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol KVDataDelegate;

@interface CMMKVCommReport : NSObject
{
    int m_logId;
    long long m_startTime;
    long long m_endTime;
    NSMutableDictionary *m_setDic;
    NSMutableDictionary *m_addDic;
    CDUnknownFunctionPointerType m_handler;
    _Bool m_isReportNow;
    _Bool m_isImportant;
    id <KVDataDelegate> m_observer;
}

@property(retain, nonatomic) id <KVDataDelegate> m_observer; // @synthesize m_observer;
- (void).cxx_destruct;
- (int)getLogId;
- (id)getArrayElementForKey:(id)arg1 andIndex:(unsigned int)arg2;
- (unsigned long long)getArrayElementCountForKey:(id)arg1;
- (void)addArrayElementValue:(id)arg1 forKey:(id)arg2;
- (id)getElementForkey:(id)arg1;
- (void)setElementValue:(id)arg1 forKey:(id)arg2;
- (void)end;
- (void)start;
- (void)dealloc;
- (id)initWithLogId:(int)arg1 andHandler:(CDUnknownFunctionPointerType)arg2 andIsReportNow:(id)arg3 andIsImportant:(id)arg4;

@end


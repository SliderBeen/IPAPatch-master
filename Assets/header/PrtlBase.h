//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMDB, NSRecursiveLock;
@protocol NotifyFromPrtlDelegate;

@interface PrtlBase : NSObject
{
    unsigned int m_uiUin;
    unsigned int m_uiScene;
    unsigned int m_uiCgi;
    NSRecursiveLock *m_oLock;
    CMMDB *m_oMMDB;
    id <NotifyFromPrtlDelegate> m_delNotifyFromPrtl;
}

@property(nonatomic) __weak id <NotifyFromPrtlDelegate> m_delNotifyFromPrtl; // @synthesize m_delNotifyFromPrtl;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
@property(retain, nonatomic) CMMDB *m_oMMDB; // @synthesize m_oMMDB;
@property(nonatomic) unsigned int m_uiCgi; // @synthesize m_uiCgi;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
- (void).cxx_destruct;
- (_Bool)CustomEncryptPack:(void *)arg1 outbuf:(struct AutoBuffer *)arg2;
- (_Bool)HasCustomEncryptPack;
- (void)GetRespKey:(struct AutoBuffer *)arg1;
- (void)GetReqKey:(struct AutoBuffer *)arg1;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (void)InitPrtl:(unsigned int)arg1 Delegate:(id)arg2 DB:(id)arg3 Lock:(id)arg4 Scene:(unsigned int)arg5;
- (void)dealloc;
- (id)init;
@property(nonatomic) unsigned int m_uiUin; // @synthesize m_uiUin;

@end


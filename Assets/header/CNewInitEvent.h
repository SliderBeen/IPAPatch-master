//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMultiEvent.h"

@class NSData, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface CNewInitEvent : CMultiEvent
{
    unsigned int m_uiInitCount;
    unsigned int m_uiScene;
    NSData *m_dtCurSyncBuffer;
    NSData *m_dtMaxSyncBuffer;
    NSDate *m_tStartDate;
    NSObject<OS_dispatch_queue> *m_worker;
}

@property(retain, nonatomic) NSDate *m_tStartDate; // @synthesize m_tStartDate;
@property(retain, nonatomic) NSData *m_dtMaxSyncBuffer; // @synthesize m_dtMaxSyncBuffer;
@property(retain, nonatomic) NSData *m_dtCurSyncBuffer; // @synthesize m_dtCurSyncBuffer;
- (void).cxx_destruct;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (void)Stop;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (_Bool)CreateInitEvent;
- (_Bool)SetEventInfo:(id)arg1;
- (void)TimerCheckEvent;
- (void)dealloc;
- (id)init;

@end


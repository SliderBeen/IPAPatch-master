//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMultiEvent.h"

@class NSMutableArray, NSString;

@interface CUploadMContactEvent : CMultiEvent
{
    NSMutableArray *m_arrMobileList;
    NSString *m_nsMobile;
    unsigned int m_uiUploadCount;
    NSMutableArray *m_arrEmailList;
}

@property(retain, nonatomic) NSMutableArray *m_arrEmailList; // @synthesize m_arrEmailList;
@property(retain, nonatomic) NSMutableArray *m_arrMobileList; // @synthesize m_arrMobileList;
- (void).cxx_destruct;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (_Bool)CreateUploadEvent;
- (void)Stop;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (_Bool)SetEventInfo:(id)arg1;
- (void)TimerCheckEvent;
- (void)dealloc;
- (id)init;

@end


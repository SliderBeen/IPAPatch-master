//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBaseEvent.h"

@class ProtobufCGIWrap, ProtobufEventHandler, ProtobufPrtlChannel;

@interface ProtobufEvent : CBaseEvent
{
    ProtobufPrtlChannel *m_ptrl;
    ProtobufCGIWrap *m_pbCGIWrap;
    ProtobufEventHandler *m_pbEventHandler;
    _Bool m_bSpeedy;
    _Bool m_hasInvokePreHandler;
    int m_cmdstatus;
}

@property(nonatomic) _Bool m_bSpeedy; // @synthesize m_bSpeedy;
@property(readonly) ProtobufCGIWrap *m_pbCGIWrap; // @synthesize m_pbCGIWrap;
- (void).cxx_destruct;
- (void)OnCmdRecv;
- (int)UnPack:(const struct AutoBuffer *)arg1 SvrID:(struct AutoBuffer *)arg2;
- (_Bool)Pack:(struct AutoBuffer *)arg1;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (void)Stop;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (_Bool)Start;
- (void)dealloc;
- (id)initWithCGIWrap:(id)arg1;

@end


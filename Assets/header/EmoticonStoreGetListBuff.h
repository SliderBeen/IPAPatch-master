//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSData, NSMutableArray;

@interface EmoticonStoreGetListBuff : MMObject
{
    unsigned int m_eventId;
    unsigned int m_reqType;
    NSData *m_reqBuf;
    NSMutableArray *m_adArray;
}

@property(retain, nonatomic) NSData *m_reqBuf; // @synthesize m_reqBuf;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId;
@property(nonatomic) unsigned int m_reqType; // @synthesize m_reqType;
@property(retain, nonatomic) NSMutableArray *m_adArray; // @synthesize m_adArray;
- (void).cxx_destruct;

@end


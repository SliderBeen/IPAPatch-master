//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSyncBasePrtl.h"

@class NSArray, NSData, NSString;

@interface SpecialSyncPrtl : CSyncBasePrtl
{
    NSArray *m_arrOplogList;
    unsigned int m_uiSelector;
    NSString *m_nsUsrName;
    NSData *m_dtSyncBuffer;
    unsigned int ct1;
}

@property(retain, nonatomic) NSData *m_dtSyncBuffer; // @synthesize m_dtSyncBuffer;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(nonatomic) unsigned int m_uiSelector; // @synthesize m_uiSelector;
@property(retain, nonatomic) NSArray *m_arrOplogList; // @synthesize m_arrOplogList;
- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (id)init;

@end


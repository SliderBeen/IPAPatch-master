//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayCreateRequestStruct : NSObject
{
    NSString *m_nsPassword;
    NSString *m_nsBindSerialNo;
    NSString *m_nsBankType;
    NSString *m_nsCardTail;
    unsigned int m_uiInitalMoney;
}

@property(nonatomic) unsigned int m_uiInitalMoney; // @synthesize m_uiInitalMoney;
@property(retain, nonatomic) NSString *m_nsPassword; // @synthesize m_nsPassword;
@property(retain, nonatomic) NSString *m_nsCardTail; // @synthesize m_nsCardTail;
@property(retain, nonatomic) NSString *m_nsBindSerialNo; // @synthesize m_nsBindSerialNo;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
- (void).cxx_destruct;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCMallPayProductLatestInfo : NSObject
{
    unsigned int m_uiFunctionActivityId;
    unsigned int m_uiProductId;
    NSString *m_nsAppId;
    NSString *m_nsTicket;
    NSMutableDictionary *m_dicRemarks;
    NSMutableDictionary *m_dicResponseRemark;
}

@property(retain, nonatomic) NSMutableDictionary *m_dicResponseRemark; // @synthesize m_dicResponseRemark;
@property(retain, nonatomic) NSMutableDictionary *m_dicRemarks; // @synthesize m_dicRemarks;
@property(retain, nonatomic) NSString *m_nsTicket; // @synthesize m_nsTicket;
@property(retain, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId;
@property(nonatomic) unsigned int m_uiFunctionActivityId; // @synthesize m_uiFunctionActivityId;
@property(nonatomic) unsigned int m_uiProductId; // @synthesize m_uiProductId;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCDataItem, WCUserComment;

@interface SnsTranslateDataWrap : NSObject
{
    int iScene;
    WCDataItem *m_dataItem;
    WCUserComment *m_userComment;
    NSString *m_dataItemTid;
}

@property(retain, nonatomic) NSString *m_dataItemTid; // @synthesize m_dataItemTid;
@property(nonatomic) int iScene; // @synthesize iScene;
@property(retain, nonatomic) WCUserComment *m_userComment; // @synthesize m_userComment;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end


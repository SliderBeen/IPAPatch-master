//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCCellGroupItem : NSObject
{
    int m_type;
    NSMutableArray *m_arrPhotoDatas;
    long long m_year;
    NSString *m_nsTip;
    NSString *m_nsSubTip;
}

@property(retain, nonatomic) NSString *m_nsSubTip; // @synthesize m_nsSubTip;
@property(retain, nonatomic) NSString *m_nsTip; // @synthesize m_nsTip;
@property(nonatomic) long long m_year; // @synthesize m_year;
@property(retain, nonatomic) NSMutableArray *m_arrPhotoDatas; // @synthesize m_arrPhotoDatas;
@property(nonatomic) int m_type; // @synthesize m_type;
- (void).cxx_destruct;
- (id)cellViewClassName;
- (id)cellIdentifier;
- (_Bool)isSomeWCDataItemUnsafe;
- (id)init;

@end


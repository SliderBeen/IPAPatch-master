//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOrderDetailNormalCellInfo : NSObject
{
    NSString *m_nsKey;
    NSString *m_nsValue;
    NSString *m_nsJumpedUrl;
    unsigned int m_uiJumpedType;
    _Bool m_bIsSegmentationCell;
}

@property(nonatomic) unsigned int m_uiJumpedType; // @synthesize m_uiJumpedType;
@property(retain, nonatomic) NSString *m_nsValue; // @synthesize m_nsValue;
@property(retain, nonatomic) NSString *m_nsKey; // @synthesize m_nsKey;
@property(retain, nonatomic) NSString *m_nsJumpedUrl; // @synthesize m_nsJumpedUrl;
@property(nonatomic) _Bool m_bIsSegmentationCell; // @synthesize m_bIsSegmentationCell;
- (void).cxx_destruct;
- (void)dealloc;

@end


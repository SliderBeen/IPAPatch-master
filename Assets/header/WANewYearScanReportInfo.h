//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WANewYearScanReportInfo : NSObject <PBCoding>
{
    NSMutableDictionary *dicItem;
}

+ (void)saveScanReportInfo:(id)arg1 toPath:(id)arg2;
+ (id)scanReportInfoFromPath:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *dicItem; // @synthesize dicItem;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


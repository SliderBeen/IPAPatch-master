//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCNewClickPageItemData : MMObject
{
    int costTime;
    unsigned int count;
    unsigned int specialPV;
    NSString *pageID;
}

+ (void)initialize;
@property(nonatomic) unsigned int specialPV; // @synthesize specialPV;
@property(nonatomic) unsigned int count; // @synthesize count;
@property(nonatomic) int costTime; // @synthesize costTime;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSData;

@interface UserDumpData : MMObject
{
    unsigned int compressedBufSize;
    NSData *data;
}

+ (void)initialize;
@property(retain, nonatomic) NSData *data; // @synthesize data;
@property(nonatomic) unsigned int compressedBufSize; // @synthesize compressedBufSize;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end


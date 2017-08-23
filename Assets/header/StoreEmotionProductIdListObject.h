//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface StoreEmotionProductIdListObject : MMObject <PBCoding>
{
    NSMutableArray *pids;
}

+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (id)instance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *pids; // @synthesize pids;
- (void).cxx_destruct;
- (void)addFirstPid:(id)arg1;
- (void)deletePid:(id)arg1;
- (id)getPids;
- (void)savePidToFile:(id)arg1;
- (void)savePidsToFile:(id)arg1;
- (id)init;
- (void)dealloc;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface GameCenterUpItem : MMObject <PBCoding>
{
    NSString *fromUserName;
    NSString *timeDesc;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *timeDesc; // @synthesize timeDesc;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


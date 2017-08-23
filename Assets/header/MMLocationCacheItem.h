//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMLocationCacheItem : MMObject <PBCoding>
{
    double latitude;
    double longitude;
    double timestamp;
    _Bool isMarsLocation;
    NSString *_encryptLatitude;
    NSString *_encryptLongitude;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *encryptLongitude; // @synthesize encryptLongitude=_encryptLongitude;
@property(retain, nonatomic) NSString *encryptLatitude; // @synthesize encryptLatitude=_encryptLatitude;
@property(nonatomic) _Bool isMarsLocation; // @synthesize isMarsLocation;
@property(nonatomic) double timestamp; // @synthesize timestamp;
@property(nonatomic) double longitude; // @synthesize longitude;
@property(nonatomic) double latitude; // @synthesize latitude;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BackupStartGeneralInfo, NSString;

@interface BackupStartResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long bigDataSize; // @dynamic bigDataSize;
@property(retain, nonatomic) BackupStartGeneralInfo *generalInfo; // @dynamic generalInfo;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned int networkState; // @dynamic networkState;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) unsigned long long totalCount; // @dynamic totalCount;
@property(nonatomic) unsigned long long totalSize; // @dynamic totalSize;

@end


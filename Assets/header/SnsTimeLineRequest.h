//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t, SnsAdExpInfo;

@interface SnsTimeLineRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SnsAdExpInfo *adexpinfo; // @dynamic adexpinfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long clientLatestId; // @dynamic clientLatestId;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned int lastRequestTime; // @dynamic lastRequestTime;
@property(nonatomic) unsigned long long maxId; // @dynamic maxId;
@property(nonatomic) unsigned long long minFilterId; // @dynamic minFilterId;
@property(nonatomic) unsigned int networkType; // @dynamic networkType;
@property(retain, nonatomic) SKBuiltinBuffer_t *session; // @dynamic session;

@end


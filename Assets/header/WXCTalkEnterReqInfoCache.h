//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXCTalkEnterReqInfoCache : NSObject
{
    _Bool _isFrequentEnter;
    unsigned int _roomId;
    int _enterType;
    NSString *_svrGroupId;
    unsigned long long _roomKey;
    NSData *_reqData;
}

@property(nonatomic) _Bool isFrequentEnter; // @synthesize isFrequentEnter=_isFrequentEnter;
@property(retain, nonatomic) NSData *reqData; // @synthesize reqData=_reqData;
@property(nonatomic) int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned long long roomKey; // @synthesize roomKey=_roomKey;
@property(nonatomic) unsigned int roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *svrGroupId; // @synthesize svrGroupId=_svrGroupId;
- (void).cxx_destruct;
- (void)dealloc;

@end


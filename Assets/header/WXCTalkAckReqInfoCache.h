//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WXCTalkAckReqInfoCache : NSObject
{
    unsigned int _roomId;
    NSString *_svrGroupId;
    unsigned long long _roomKey;
}

@property(nonatomic) unsigned long long roomKey; // @synthesize roomKey=_roomKey;
@property(nonatomic) unsigned int roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *svrGroupId; // @synthesize svrGroupId=_svrGroupId;
- (void).cxx_destruct;
- (void)dealloc;

@end


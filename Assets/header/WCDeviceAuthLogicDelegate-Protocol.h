//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, WCDeviceTask;

@protocol WCDeviceAuthLogicDelegate <NSObject>
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 RespTask:(WCDeviceTask *)arg3 SessionKey:(NSData *)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WAPermissionHandlerDelegate <NSObject>
- (void)onUserAuthFailWithJSAPI:(NSString *)arg1 failHandler:(void (^)(NSString *))arg2 errMsg:(NSString *)arg3 scene:(unsigned long long)arg4;
- (void)onUserAuthOKWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 scene:(unsigned long long)arg3;
@end


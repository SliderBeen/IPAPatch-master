//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCAccountLoginFirstUserViewControllerDelegate <NSObject>
- (void)onLoginByPhoneFromQQ;
- (void)onFacebookConnect;
- (void)onFirstUserProblem:(id)arg1;
- (void)onFirstUserBack;
- (void)onFirstUserLoginUserName:(NSString *)arg1 Pwd:(NSString *)arg2;
@end


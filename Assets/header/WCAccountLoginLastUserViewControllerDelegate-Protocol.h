//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol WCAccountLoginLastUserViewControllerDelegate <NSObject>
- (void)onLastUserVoicePrintLogin:(id)arg1;
- (void)onLastUserChangeAccountWithView:(UIView *)arg1;
- (void)onLastUserChangeAccount:(id)arg1;
- (void)onLastUserRegister;
- (void)onLastUserGoToHelpCenter:(id)arg1;
- (void)onLastUserGoToSecurityCenter:(id)arg1;
- (void)onLastUserProblem:(id)arg1;
- (void)onLastUserLoginUserName:(NSString *)arg1 Pwd:(NSString *)arg2;
@end


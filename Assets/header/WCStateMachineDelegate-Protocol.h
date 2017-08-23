//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCState, WCTransition;

@protocol WCStateMachineDelegate <NSObject>

@optional
- (void)onStateMachineDidExitState:(WCState *)arg1 withTransition:(WCTransition *)arg2;
- (void)onStateMachineDidEnterState:(WCState *)arg1 withTransition:(WCTransition *)arg2;
@end


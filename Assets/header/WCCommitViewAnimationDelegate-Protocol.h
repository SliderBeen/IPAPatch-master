//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WCDataItem;

@protocol WCCommitViewAnimationDelegate <NSObject>

@optional
- (void)onFinishSendWithoutAnim;
- (void)commitAnimationWillStart:(WCDataItem *)arg1;
- (void)animationDidEndRemainView:(UIView *)arg1 hintDataItem:(WCDataItem *)arg2;
@end


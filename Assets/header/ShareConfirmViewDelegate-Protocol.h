//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ShareConfirmView;

@protocol ShareConfirmViewDelegate <NSObject>

@optional
- (void)OnStayAtWeChat:(ShareConfirmView *)arg1;
- (void)OnBackToApp:(ShareConfirmView *)arg1;
- (void)OnError:(ShareConfirmView *)arg1;
- (void)OnCancel:(ShareConfirmView *)arg1;
- (void)OnSend:(ShareConfirmView *)arg1;
@end


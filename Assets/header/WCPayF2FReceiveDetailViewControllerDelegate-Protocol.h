//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCPayF2FReceiveRecordItem;

@protocol WCPayF2FReceiveDetailViewControllerDelegate <NSObject>
- (unsigned long long)getCurrentDetailFromScene;
- (void)f2fReceiveDetailViewControllerDeleteRecord:(WCPayF2FReceiveRecordItem *)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveDetailViewControllerLoadMoreRecordWithLastRecord:(WCPayF2FReceiveRecordItem *)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveDetailViewControllerDidSelectRecord:(WCPayF2FReceiveRecordItem *)arg1;
- (void)f2fReceiveDetailViewControllerClickHistoryBtn;
- (void)f2fReceiveDetailViewControllerBack;
@end


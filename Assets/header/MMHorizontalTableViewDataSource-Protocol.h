//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMHorizontalTableView, MMHorizontalTableViewCell;

@protocol MMHorizontalTableViewDataSource <NSObject>
- (MMHorizontalTableViewCell *)horizontalTableView:(MMHorizontalTableView *)arg1 viewForColumnAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfColumnsInHorizontalTableView:(MMHorizontalTableView *)arg1;
@end


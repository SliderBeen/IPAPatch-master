//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCPayPaidOrderActivityMgr : MMService <MMService>
{
    NSMutableDictionary *dicUrlToControlItem;
}

- (void).cxx_destruct;
- (void)cleanAllControlItem;
- (void)setControlItem:(id)arg1;
- (id)getControlItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface POILocationDisplayMgr : MMService <PBMessageObserverDelegate, MMService>
{
}

- (void)handleGetPOICityResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)logGoogleAddressResult:(id)arg1 ForLocation:(id)arg2;
- (int)getPOIDisplayNameWithLocation:(id)arg1 Scene:(int)arg2 SrcDisplayName:(id)arg3 extraInfo:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


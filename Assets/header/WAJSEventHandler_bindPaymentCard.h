//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCPayAddPayCardDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WAJSEventHandler_bindPaymentCard : WAJSEventHandler_BaseEvent <WCPayAddPayCardDelegate>
{
    NSMutableDictionary *_param;
}

@property(retain) NSMutableDictionary *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (void)onAddPayCardResult:(_Bool)arg1;
- (id)getCurrentURL;
- (id)getParams;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "WCCardChooseViewControllerDelegate-Protocol.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_chooseCard : WebviewJSEventHandlerBase <WCCardChooseViewControllerDelegate>
{
    JSEvent *_jsEvent;
}

- (void).cxx_destruct;
- (void)onChooseCancel;
- (void)onChooseSuccess:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "GetA8KeyLogicDelegate-Protocol.h"

@class GetA8KeyLogic, NSString;

@interface WAJSEventHandler_scanCode : WAJSEventHandler_BaseEvent <GetA8KeyLogicDelegate>
{
    GetA8KeyLogic *_getA8Key;
    NSString *_charSet;
    NSString *_type;
    NSString *_scanResult;
}

@property(retain, nonatomic) NSString *scanResult; // @synthesize scanResult=_scanResult;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *charSet; // @synthesize charSet=_charSet;
@property(retain, nonatomic) GetA8KeyLogic *getA8Key; // @synthesize getA8Key=_getA8Key;
- (void).cxx_destruct;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)onGetA8KeyResult:(id)arg1;
- (void)onScanResult:(id)arg1;
- (void)OnReturn;
- (_Bool)shouldBackToSessionImmediately;
- (_Bool)shouldObtainScanResult;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


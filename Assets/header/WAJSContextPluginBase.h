//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IWAJSContextPluginProtocol-Protocol.h"

@class NSString, WAJSCoreService;

@interface WAJSContextPluginBase : MMObject <IWAJSContextPluginProtocol>
{
    WAJSCoreService *_context;
}

@property(readonly, nonatomic) __weak WAJSCoreService *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)setJSContextOwner:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


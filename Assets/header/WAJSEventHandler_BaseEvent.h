//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAWebViewController;
@protocol WAJSEventHandlerContextDelegate;

@interface WAJSEventHandler_BaseEvent : NSObject
{
    unsigned int _callbackId;
    id <WAJSEventHandlerContextDelegate> _context;
    WAWebViewController *_webviewController;
}

@property(nonatomic) __weak WAWebViewController *webviewController; // @synthesize webviewController=_webviewController;
@property(nonatomic) __weak id <WAJSEventHandlerContextDelegate> context; // @synthesize context=_context;
@property(nonatomic) unsigned int callbackId; // @synthesize callbackId=_callbackId;
- (void).cxx_destruct;
- (void)handleJSEvent:(id)arg1;
- (id)getAppID;
- (void)endWithResult:(id)arg1;

@end

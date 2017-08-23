//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IAppDataExt-Protocol.h"
#import "IPreEnterWechatLogicExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"

@class NSString, NSURL, UINavigationController;

@interface NewAuthHandler : MMObject <IAppDataExt, MMWebViewDelegate, MMKernelExt, IPreEnterWechatLogicExt>
{
    NSString *m_nsAppid;
    NSURL *m_url;
    UINavigationController *m_oAuthViewController;
    _Bool m_isDoing;
    NSString *_m_nsScope;
    NSString *_m_nsState;
}

@property(retain, nonatomic) NSString *m_nsState; // @synthesize m_nsState=_m_nsState;
@property(retain, nonatomic) NSString *m_nsScope; // @synthesize m_nsScope=_m_nsScope;
- (void).cxx_destruct;
- (void)onPostQuit;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)OnGotListAppSettingItem:(id)arg1 errType:(int)arg2;
- (id)webViewFailToLoad:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidStartLoad:(id)arg1;
- (void)OnOAuthCancel;
- (void)onPreEnterWechatDone;
- (void)removeOAuthView;
- (void)onRetry:(id)arg1;
- (void)createOAuthView;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (id)parseURLParams;
- (void)cancelWechatConnect;
- (void)startWechatConnect:(id)arg1 authInfo:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


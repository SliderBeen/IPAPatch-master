//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMServiceCenter, WXCSdkMultiTalkProxy, WXCSdkNetworkProxy;
@protocol WXCAssistHelperDelegate, WXCMultiTalkApiDelegate;

@interface WXCSdkMgr : NSObject
{
    id <WXCMultiTalkApiDelegate> _mMultiTalkApiDelegate;
    id <WXCAssistHelperDelegate> _mWxAssistHelperDelegate;
    WXCSdkMultiTalkProxy *_mMultiTalkProxy;
    WXCSdkNetworkProxy *_mNetworkProxy;
    MMServiceCenter *_mServiceCenter;
}

+ (id)shareInstance;
@property(retain, nonatomic) MMServiceCenter *mServiceCenter; // @synthesize mServiceCenter=_mServiceCenter;
@property(retain, nonatomic) WXCSdkNetworkProxy *mNetworkProxy; // @synthesize mNetworkProxy=_mNetworkProxy;
@property(retain, nonatomic) WXCSdkMultiTalkProxy *mMultiTalkProxy; // @synthesize mMultiTalkProxy=_mMultiTalkProxy;
@property(nonatomic) __weak id <WXCAssistHelperDelegate> mWxAssistHelperDelegate; // @synthesize mWxAssistHelperDelegate=_mWxAssistHelperDelegate;
@property(nonatomic) __weak id <WXCMultiTalkApiDelegate> mMultiTalkApiDelegate; // @synthesize mMultiTalkApiDelegate=_mMultiTalkApiDelegate;
- (void).cxx_destruct;
- (id)getNetworkProxy;
- (id)getMultiTalkApiProxy;
- (id)getWXCAssistHelperDelegate;
- (id)getSdkDelegate;
- (void)uninitSdk;
- (_Bool)initSdk:(id)arg1 wxDelegate:(id)arg2;
- (void)dealloc;
- (id)init;

@end


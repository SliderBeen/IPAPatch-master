//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBase.h"

#import "NSURLConnectionDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString, NSURLConnection, UIViewController;
@protocol APProtal33Delegate;

@interface APPortal33 : APBase <NSURLConnectionDelegate, PBMessageObserverDelegate>
{
    int _retryCount;
    id <APProtal33Delegate> _delegate;
    NSString *_appId;
    NSString *_shopId;
    NSString *_authUrl;
    NSString *_extend;
    NSString *_timestamp;
    NSString *_sign;
    UIViewController *_viewController;
    NSURLConnection *_connection;
    NSURLConnection *_postConnection;
}

@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLConnection *postConnection; // @synthesize postConnection=_postConnection;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *extend; // @synthesize extend=_extend;
@property(copy, nonatomic) NSString *authUrl; // @synthesize authUrl=_authUrl;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) __weak id <APProtal33Delegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
@property(readonly, copy) NSString *description;
- (id)setInfoToAPCheck:(id)arg1;
- (void)handleApPortalInfoResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)mockBackPageInfo;
- (id)currMac;
- (void)didFailWithErrMsg:(id)arg1;
- (void)didSuccess;
- (void)didAuthSuccess;
- (void)didStart;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)sendGetApPortalInfoRequestToWeixinSvr;
- (void)sendRequestToAPWithUrlString:(id)arg1 withParams:(id)arg2;
- (id)parseGetParamsToPostBodyWithUrlString:(id)arg1;
- (id)getParamValueFromUrl:(id)arg1 withKey:(id)arg2;
- (id)getCGIWithUrl:(id)arg1;
- (int)getRedirectMethod:(id)arg1;
- (void)sendAuthRequestToAP;
- (void)cancel;
- (void)start;
- (id)initWithGetA8KeyResult:(id)arg1 scene:(unsigned int)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


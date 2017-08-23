//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDelegate-Protocol.h"

@class GTMOAuthAuthentication, NSMutableData, NSString, NSURLConnection;

@interface MMTwitterAuth : NSObject <NSURLConnectionDelegate>
{
    GTMOAuthAuthentication *m_OAuth;
    NSMutableData *m_revData;
    long long m_nRespStatusCode;
    NSURLConnection *m_verifyTokenConn;
}

@property(retain, nonatomic) NSURLConnection *m_verifyTokenConn; // @synthesize m_verifyTokenConn;
@property(retain, nonatomic) NSMutableData *m_revData; // @synthesize m_revData;
@property(retain, nonatomic) GTMOAuthAuthentication *m_OAuth; // @synthesize m_OAuth;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)verifyReturned;
- (void)verifyAccessTokenValid;
- (_Bool)hasRequestToken;
- (void)startAuth;
- (void)convertingRequestTokenToAccessToken:(id)arg1;
- (void)redirectUser;
- (void)obtainRequestToken;
- (void)SaveData;
- (void)LoadData;
- (id)getTwitterArchivePath;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonDownloadProxy.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;
@protocol EmoticonDownloadProxyDelegate;

@interface EmoticonCdnDownloadConnection : EmoticonDownloadProxy <PBMessageObserverDelegate>
{
    _Bool m_isActive;
    _Bool m_hasStartRequest;
    int _m_downloadType;
    int _m_decryptResult;
    NSString *m_md5;
    NSString *m_cdnUrlString;
    id <EmoticonDownloadProxyDelegate> _m_delegate;
    NSString *_m_encryptUrlString;
    NSString *_m_aesKey;
    NSString *_m_nsRequestUrl;
}

+ (void)keyReportDecryptFailed;
+ (void)keyReportDecryptOk;
+ (void)keyReportDownloadEncryptUrl;
+ (void)keyReportVerifyFailed;
+ (void)keyReportVerifyOk;
+ (void)keyReportDownloadFailed;
+ (void)keyReportDownloadOK;
+ (id)AESDecryptWithKeyString:(id)arg1 andData:(id)arg2;
@property(retain, nonatomic) NSString *m_nsRequestUrl; // @synthesize m_nsRequestUrl=_m_nsRequestUrl;
@property(nonatomic) int m_decryptResult; // @synthesize m_decryptResult=_m_decryptResult;
@property(nonatomic) int m_downloadType; // @synthesize m_downloadType=_m_downloadType;
@property(retain, nonatomic) NSString *m_aesKey; // @synthesize m_aesKey=_m_aesKey;
@property(retain, nonatomic) NSString *m_encryptUrlString; // @synthesize m_encryptUrlString=_m_encryptUrlString;
@property(nonatomic) __weak id <EmoticonDownloadProxyDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_hasStartRequest; // @synthesize m_hasStartRequest;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive;
@property(retain, nonatomic) NSString *m_cdnUrlString; // @synthesize m_cdnUrlString;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5;
- (void).cxx_destruct;
- (void)kvReportDownloadFailed;
- (void)kvReportDownloadOKAndVerifyFailed;
- (void)kvReportDownloadAndVerifyOK;
- (void)reveicePartFromURL:(id)arg1;
- (void)onReveicePartFromURL:(id)arg1;
- (void)callOkDelegateWithFilePath:(id)arg1;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (_Bool)isActive;
- (void)clearDelegate;
- (id)initWithMd5:(id)arg1 withCdnUrl:(id)arg2 AndEncryptUrl:(id)arg3 withAesKey:(id)arg4 delegate:(id)arg5;
- (id)initWithMd5:(id)arg1 withCdnUrl:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WTLoginMgr : MMObject
{
}

+ (void)clearPwdSig:(unsigned long long)arg1;
+ (_Bool)refreshVerfiyImageWithServerPackage:(id)arg1 WithDictionary:(id)arg2;
+ (_Bool)resolveServerPackage:(id)arg1 WithDictionary:(id)arg2;
+ (id)getCheckVerifyBuffer:(id)arg1;
+ (id)getRefreshVerifyImageBuffer;
+ (id)getLoginBuffer:(id)arg1 psw:(id)arg2 pwdMd5:(id)arg3;
+ (id)getWTLoginAPIInstance;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSSystemInfo : NSObject
{
}

+ (id)systemInfo;
+ (_Bool)isJailbroken;
+ (id)currentCPUArch;
+ (id)CPUArchForCPUType:(int)arg1 subType:(int)arg2;
+ (id)deviceAndAppHash;
+ (id)appUUID;
+ (id)executablePath;
+ (id)uuidBytesToString:(const char *)arg1;
+ (id)dateSysctl:(id)arg1;
+ (id)stringSysctl:(id)arg1;
+ (id)int64Sysctl:(id)arg1;
+ (id)int32Sysctl:(id)arg1;
+ (void)setWeChatBundleFullVersion:(id)arg1 shortVersion:(id)arg2;

@end


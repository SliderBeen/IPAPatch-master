//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCOutUtil : NSObject
{
}

+ (void)showAlert:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4;
+ (id)wordingForPhoneLable:(id)arg1;
+ (id)genLastCallContactsCallTime:(unsigned int)arg1;
+ (id)formatTime:(unsigned int)arg1;
+ (id)formatPhoneNum:(id)arg1;
+ (id)getWCOutPackageVersionPathForTid:(id)arg1;
+ (id)getWCOutPackageFilePathForTid:(id)arg1;
+ (id)getWCOutPackageDirPathForTid:(id)arg1;
+ (id)getWCoutCouponResponseCachePath;
+ (id)getWCOutPackagePath;
+ (id)getWCOutDBPath;
+ (id)getUserCommonDataDir;
+ (id)getUserDataDir;

@end


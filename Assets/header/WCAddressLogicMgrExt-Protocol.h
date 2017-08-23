//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, WCAddressBaseAddress;

@protocol WCAddressLogicMgrExt <NSObject>

@optional
- (void)OnImportYiXunAddress:(NSArray *)arg1 importStatus:(int)arg2 Error:(NSError *)arg3;
- (void)OnGetGetAllAddressStageData:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnGetAllAddress:(NSArray *)arg1 UserName:(NSString *)arg2 NickName:(NSString *)arg3 Error:(NSError *)arg4;
- (void)OnSetRecentlyUsedAddress:(WCAddressBaseAddress *)arg1 Error:(NSError *)arg2;
- (void)OnModifyAddress:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnDelAllAddress:(NSError *)arg1;
- (void)OnDelAddress:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnAddAddress:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnGetLatestAddress:(WCAddressBaseAddress *)arg1 UserName:(NSString *)arg2 NickName:(NSString *)arg3 Error:(NSError *)arg4;
@end


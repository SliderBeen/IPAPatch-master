//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DeviceRankDetailResonse, NSArray, NSMutableArray, NSString;

@protocol IDeviceRankProfileMgrExt

@optional
- (void)onDelFollowWithUserName:(NSString *)arg1 error:(int)arg2;
- (void)onAddFollowWithFollowItems:(NSArray *)arg1 error:(int)arg2;
- (void)onGotStepListWithBeginTime:(unsigned int)arg1 endTime:(unsigned int)arg2 stepArray:(NSMutableArray *)arg3 err:(int)arg4;
- (void)onGotUserRankDetail:(NSString *)arg1 rankDetailResp:(DeviceRankDetailResonse *)arg2 err:(int)arg3;
- (void)onUpdateCoverImageError:(int)arg1;
- (void)onCoverImageChanged;
@end


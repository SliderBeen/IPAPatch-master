//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMEmotionChartsCellDelegate <NSObject>

@optional
- (void)OnShowAlertWithIKnow:(NSString *)arg1;
- (void)OnShowAlertWithOK:(NSString *)arg1;
- (void)OnStopLoading;
- (void)OnStopLoadingAndShowError:(NSString *)arg1;
- (void)OnStopLoadingAndShowOK:(NSString *)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(NSString *)arg1;
- (void)OnStartLoadingAndShowString:(NSString *)arg1;
@end


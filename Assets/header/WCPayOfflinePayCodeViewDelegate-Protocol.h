//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCPayOfflinePayCodeView;

@protocol WCPayOfflinePayCodeViewDelegate <NSObject>
- (void)wcPayOfflinePayCodeViewDidCompletedSuccessAnimation:(WCPayOfflinePayCodeView *)arg1;
- (_Bool)wcPayOfflinePayCodeViewCouldStartSuccessAnimation:(WCPayOfflinePayCodeView *)arg1;
- (void)wcPayOfflinePayCodeViewAutoRefreshCountingFinished:(WCPayOfflinePayCodeView *)arg1;
- (void)wcPayOfflinePayCodeViewExitFullScreenAnimationFinished:(WCPayOfflinePayCodeView *)arg1;
@end


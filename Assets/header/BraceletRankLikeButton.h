//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class DeviceRankInfo;

@interface BraceletRankLikeButton : MMUIButton
{
    DeviceRankInfo *m_rankInfo;
}

@property(retain) DeviceRankInfo *m_rankInfo; // @synthesize m_rankInfo;
- (void).cxx_destruct;
- (void)animatChangeToLikeState:(_Bool)arg1;
- (void)initView;
- (id)initWithDeviceRankInfo:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class DeviceRankInfo;

@interface BraceletRankInfoView : MMUIView
{
    DeviceRankInfo *m_rankInfo;
    _Bool m_isBotton;
    _Bool m_isFromFocus;
    _Bool m_bShowRedDot;
}

- (void).cxx_destruct;
- (void)initView;
- (void)addSeperateLine;
- (id)initWithDeviceRankInfo:(id)arg1 IsBottom:(_Bool)arg2 IsFromFocus:(_Bool)arg3 showRedDot:(_Bool)arg4;
- (id)initWithDeviceRankInfo:(id)arg1 IsBottom:(_Bool)arg2 IsFromFocus:(_Bool)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAMapView;

@protocol WAMapViewDelegate <NSObject>

@optional
- (void)onMapTap:(WAMapView *)arg1;
- (void)onRegionDidChange:(WAMapView *)arg1;
- (void)onRegionWillChange:(WAMapView *)arg1;
- (void)onControlClick:(WAMapView *)arg1 data:(NSString *)arg2;
- (void)onMarkerClick:(WAMapView *)arg1 data:(NSString *)arg2;
@end


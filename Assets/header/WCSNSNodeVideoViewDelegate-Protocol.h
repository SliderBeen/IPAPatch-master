//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCSNSNodeVideoView, WCSightViewController;

@protocol WCSNSNodeVideoViewDelegate <NSObject>

@optional
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)OnDownloadSuccessForSaveVideoToAlbum;
- (void)OnDownloadSuccessForForwardVideoToFriend;
- (void)onWillFullPlay:(_Bool *)arg1 sightView:(WCSNSNodeVideoView *)arg2;
- (void)onJumpToViewDetail:(NSString *)arg1;
- (void)onLongPressedWCSightFullScreenWindow:(WCSightViewController *)arg1;
- (void)onLongPressedWCSight:(WCSNSNodeVideoView *)arg1;
- (void)onClickWCSight:(WCSNSNodeVideoView *)arg1;
@end


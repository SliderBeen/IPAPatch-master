//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCMediaItem, WCSightFullPlayView;

@protocol WCSightFullPlayViewDelegate <NSObject>

@optional
- (NSString *)getDetailButtonTitle;
- (_Bool)shouldShowDetailButton;
- (void)onClickDetailButton;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onFullSightDownloadFinished:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onFullSightPlayEnd:(_Bool)arg1;
- (void)onLongPressedFullSightView:(WCSightFullPlayView *)arg1;
- (void)onClickFullSightView:(WCSightFullPlayView *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GameCenterGameBriefInfo, NSString;

@protocol GameCenterSearchLogicControllerDelegate <NSObject>

@optional
- (void)onSearchBarClassifyBtnClicked;
- (void)onStopSearch;
- (void)onStartSearch;
- (void)searchBarBecomeFirstResponder;
- (void)searchBarDidEndSearch;
- (void)onOpenSearchWebResultItem:(NSString *)arg1;
- (void)onOpenSearchGameRecommendResultItem:(GameCenterGameBriefInfo *)arg1;
- (void)onOpenSearchGameResultItem:(GameCenterGameBriefInfo *)arg1 sourceScene:(int)arg2;
@end


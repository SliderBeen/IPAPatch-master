//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

#import "CAAnimationDelegate-Protocol.h"
#import "IGameCenterExt-Protocol.h"

@class GameCenterUserRankInfo, MMHeadImageView, NSString, UIButton, UILabel;
@protocol GameCenterFriendRankCellDelegate;

@interface GameCenterFriendRankCell : MMTableViewCell <IGameCenterExt, CAAnimationDelegate>
{
    UILabel *_rankLabel;
    MMHeadImageView *_headImgView;
    UILabel *_displayNameLabel;
    UILabel *_labelLabel;
    UILabel *_scoreLabel;
    UIButton *_titleButton;
    UIButton *_upButton;
    UILabel *_upCountLabel;
    UILabel *_timeScoreLabel;
    GameCenterUserRankInfo *_rankInfo;
    _Bool _isHighlighted;
    int _viewType;
    id <GameCenterFriendRankCellDelegate> _delegate;
}

+ (double)heightForCellWithViewType:(int)arg1;
@property(nonatomic) __weak id <GameCenterFriendRankCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) GameCenterUserRankInfo *rankInfo; // @synthesize rankInfo=_rankInfo;
- (void).cxx_destruct;
- (void)onUpFriend:(id)arg1 appID:(id)arg2 errCode:(int)arg3;
- (void)upButtonClicked:(id)arg1;
- (void)up;
- (double)layoutContentWithUpButton:(double)arg1;
- (double)layoutContentWithoutUpButton:(double)arg1;
- (void)layoutContent;
- (void)reloadData;
- (void)initializeSubview;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


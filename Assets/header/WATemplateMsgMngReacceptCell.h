//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMHeadImageView, UIButton, UILabel, WATemplateMsgBanWrap;
@protocol WATemplateMsgMngReacceptCellActionDelegate;

@interface WATemplateMsgMngReacceptCell : UITableViewCell
{
    WATemplateMsgBanWrap *_banWrap;
    MMHeadImageView *_avatarImageView;
    UIButton *_toggleButton;
    UILabel *_appNameLabel;
    id <WATemplateMsgMngReacceptCellActionDelegate> _delegate;
}

@property(nonatomic) __weak id <WATemplateMsgMngReacceptCellActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) UIButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(retain, nonatomic) MMHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)onClickToggleButton:(id)arg1;
- (void)fillWithBanWrap:(id)arg1;
- (void)initToggleButton;
- (void)initAppNameLabel;
- (void)initAvatarImageView;
- (void)initSubViews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


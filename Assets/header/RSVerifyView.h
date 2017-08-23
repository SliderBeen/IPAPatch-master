//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "RSVerifyAnimationViewDelegate-Protocol.h"

@class MMHeadImageView, NSString, RSHeadImageView, RSVerifyAnimationView, UIButton, UIImageView, UILabel;
@protocol RSVerifyViewDelegate;

@interface RSVerifyView : MMUIImageView <RSVerifyAnimationViewDelegate>
{
    MMHeadImageView *_imageView;
    UIImageView *_headBGView;
    UILabel *_displayName;
    RSVerifyAnimationView *_animationView;
    UIButton *_statusFrame;
    UILabel *_helloLabel;
    UIButton *_remarkBtn;
    UIButton *_addFriendBtn;
    UIButton *_exposeBtn;
    RSHeadImageView *_headImage;
    id <RSVerifyViewDelegate> _delegate;
}

@property(nonatomic) __weak id <RSVerifyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAnimationFinish:(_Bool)arg1;
- (void)onExpose;
- (void)onAddFriend;
- (void)onSetRemark;
- (void)doSetRemark:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)hideSelf;
- (void)startAnimationWithUsername:(id)arg1 OriginPoint:(struct CGPoint)arg2;
- (void)layoutSubviews;
- (void)doShowAddFriendButtonAnimation;
- (void)doShowStatusFrameAnimation;
- (void)initView;
- (void)initAnimationView;
- (void)initBackgroundView;
- (void)initExposeButton;
- (void)initAddFriendButton;
- (void)initRemarkBtn;
- (void)initHelloLabel;
- (void)initStatusFrame;
- (void)initDisplayNameLabel;
- (void)initHeadView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


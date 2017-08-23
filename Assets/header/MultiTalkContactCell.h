//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MultiTalkContactCellExt-Protocol.h"
#import "MultiTalkContactCellWaittingTimerExt-Protocol.h"

@class CContact, MMTimer, MultiTalkHDHeadView, NSMutableArray, NSString, UIImageView, UILabel, WCVideoRender;
@protocol MultiTalkContactCellDelegate;

@interface MultiTalkContactCell : UIView <MultiTalkContactCellExt, MultiTalkContactCellWaittingTimerExt>
{
    _Bool m_hasShowTipsView;
    _Bool _m_highlighted;
    _Bool _m_renderDisplay;
    _Bool _m_highlightAnimating;
    _Bool _m_hasHighlightAnimationTodo;
    UILabel *m_userNameLabel;
    CContact *m_contact;
    MultiTalkHDHeadView *m_headImageView;
    WCVideoRender *m_render;
    UIImageView *m_talkingImageView;
    UIImageView *m_netQualityImageView;
    id <MultiTalkContactCellDelegate> m_delegate;
    UIView *m_videoTipsView;
    UIView *_m_backgroundMaskView;
    UIImageView *_m_waittingImageView;
    NSMutableArray *_m_waittingImageList;
    UILabel *_m_busyLabel;
    MMTimer *_m_videoTipsVideoTimer;
}

+ (double)labelHeight;
+ (struct CGSize)imageSize;
+ (struct CGSize)MultiTalkContactCellSize;
@property(nonatomic) _Bool m_hasHighlightAnimationTodo; // @synthesize m_hasHighlightAnimationTodo=_m_hasHighlightAnimationTodo;
@property(nonatomic) _Bool m_highlightAnimating; // @synthesize m_highlightAnimating=_m_highlightAnimating;
@property(nonatomic) _Bool m_renderDisplay; // @synthesize m_renderDisplay=_m_renderDisplay;
@property(nonatomic) _Bool m_highlighted; // @synthesize m_highlighted=_m_highlighted;
@property(retain, nonatomic) MMTimer *m_videoTipsVideoTimer; // @synthesize m_videoTipsVideoTimer=_m_videoTipsVideoTimer;
@property(retain, nonatomic) UILabel *m_busyLabel; // @synthesize m_busyLabel=_m_busyLabel;
@property(retain, nonatomic) NSMutableArray *m_waittingImageList; // @synthesize m_waittingImageList=_m_waittingImageList;
@property(retain, nonatomic) UIImageView *m_waittingImageView; // @synthesize m_waittingImageView=_m_waittingImageView;
@property(retain, nonatomic) UIView *m_backgroundMaskView; // @synthesize m_backgroundMaskView=_m_backgroundMaskView;
@property(retain, nonatomic) UIView *m_videoTipsView; // @synthesize m_videoTipsView;
@property(nonatomic) _Bool m_hasShowTipsView; // @synthesize m_hasShowTipsView;
@property(nonatomic) __weak id <MultiTalkContactCellDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIImageView *m_netQualityImageView; // @synthesize m_netQualityImageView;
@property(retain, nonatomic) UIImageView *m_talkingImageView; // @synthesize m_talkingImageView;
@property(retain, nonatomic) WCVideoRender *m_render; // @synthesize m_render;
@property(retain, nonatomic) MultiTalkHDHeadView *m_headImageView; // @synthesize m_headImageView;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) UILabel *m_userNameLabel; // @synthesize m_userNameLabel;
- (void).cxx_destruct;
- (void)onMultiTalkContactCellQualityChange:(unsigned int)arg1;
- (void)onMultiTalkContactCellSilent;
- (void)onMultiTalkContactCellTalking;
- (void)onMultiTalkContactCellWaittingTimerCheckWithIndex:(unsigned long long)arg1;
- (void)updateContact:(id)arg1;
- (void)onVideoTipViewShouldEnd;
- (void)initVideoTipsView;
- (void)initWaittingImageView;
- (void)initHeadImageView;
- (void)initBusyLabel;
- (void)initUserNameLabel;
- (void)initNetQualityImageView;
- (void)initTalkingImageView;
- (void)initBackgroundMaskView;
- (void)onSingleTap;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateRenderDisplayStatus:(_Bool)arg1;
- (void)updateRender:(id)arg1;
- (void)statusHighlighted:(_Bool)arg1;
- (void)internalHighlightStautsUpdate;
- (void)hideBusyLabel;
- (void)showBusyLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


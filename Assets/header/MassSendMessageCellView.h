//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageCellView.h"

#import "IAudioReceiverExt-Protocol.h"
#import "LongPressImageViewDelegate-Protocol.h"

@class MMUILongPressImageView, MassSendMessageViewModel, NSString, UIButton, UIImageView, UILabel, UIView;

@interface MassSendMessageCellView : BaseMessageCellView <IAudioReceiverExt, LongPressImageViewDelegate>
{
    MMUILongPressImageView *m_bgImageView;
    UIView *m_bodyView;
    UILabel *m_receiverLabel;
    UIButton *m_sendAgainBtn;
    UIImageView *m_arrowImageView;
    UIImageView *m_upperFrameImageView;
    UIImageView *m_lowerFrameImageView;
}

- (void).cxx_destruct;
- (void)OnEndPlaying:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)OnLongPress:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)stopAudioPlaying;
- (void)onSendAgain:(id)arg1;
- (void)onVoiceClicked:(id)arg1;
- (void)onVideoClicked:(id)arg1;
- (void)onImageClicked:(id)arg1;
- (void)initSendAgainButton;
- (id)FormVideoView;
- (id)FormVoiceView;
- (id)FormImageView;
- (id)FormTextView;
- (void)initBodyView;
- (void)initArrowImageView;
- (void)initReceiverLabel;
- (void)initBgImageView;
- (void)initFrameImageView;
- (id)displayViewForImageBrowser;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutContentView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MassSendMessageViewModel *viewModel; // @dynamic viewModel;

@end


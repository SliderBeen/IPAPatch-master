//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

@class NSArray, NSMutableArray, NSString, UIImage;

@interface MassSendMessageViewModel : BaseMessageViewModel
{
    NSMutableArray *m_receivers;
    _Bool _showDetail;
    _Bool _isPlaying;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool showDetail; // @synthesize showDetail=_showDetail;
- (void).cxx_destruct;
- (void)onMessageStopPlaying;
@property(readonly, nonatomic) NSString *videoTimeString;
@property(readonly, nonatomic) NSString *voiceTimeString;
@property(readonly, nonatomic) double voiceTimeLength;
@property(readonly, nonatomic) UIImage *previewImage;
@property(readonly, nonatomic) NSString *receiverString;
@property(readonly, nonatomic) NSArray *receivers;
- (struct CGSize)videoViewSize;
- (struct CGSize)voiceViewSize;
- (struct CGSize)imageViewSize;
- (struct CGSize)textViewSize;
- (struct CGSize)bodyViewSize;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end


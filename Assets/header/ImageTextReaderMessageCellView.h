//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

@class ImageTextReaderMessageViewModel, UIImageView;

@interface ImageTextReaderMessageCellView : ReaderMessageCellView
{
    UIImageView *m_bgImageView;
}

- (void).cxx_destruct;
- (void)addFavorite;
- (void)forwardMessage;
- (void)onClicked;
- (void)onOPButtonClicked:(id)arg1;
- (void)onHeadImageClick;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) ImageTextReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end


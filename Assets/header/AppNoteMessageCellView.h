//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class AppNoteMessageViewModel, UILabel;

@interface AppNoteMessageCellView : CommonMessageCellView
{
    UILabel *m_titleLabel;
    UILabel *m_contentLabel;
}

- (void).cxx_destruct;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)operationMenuItems;
- (id)cutImage:(id)arg1 toFitSize:(struct CGSize)arg2;
- (id)getDisplayImgDatas:(id)arg1;
- (void)layoutSubviewsOnlyText:(id)arg1;
- (void)layoutSubviewsImgs:(id)arg1;
- (void)createDashLine;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) AppNoteMessageViewModel *viewModel; // @dynamic viewModel;

@end


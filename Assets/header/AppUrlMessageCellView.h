//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class AppUrlMessageViewModel, UIButton, UIImageView, UILabel;

@interface AppUrlMessageCellView : CommonMessageCellView
{
    UILabel *m_titleLabel;
    UILabel *m_detailLabel;
    UIImageView *m_thumbImageView;
    UIButton *m_arrowButton;
}

- (void).cxx_destruct;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (void)doFavorite;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)updateThumbImage;
- (void)addArrowBtn;
- (void)addVideoIcon;
- (void)addThumbImageView;
- (void)addDetailLabel;
- (void)addTitleLabel;
- (id)defaultThumbImage;
- (void)onAppear;
- (id)displayViewForImageBrowser;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) AppUrlMessageViewModel *viewModel; // @dynamic viewModel;

@end


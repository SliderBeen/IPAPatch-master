//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "EmoticonCustomManageAddLogicDelegate-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"

@class AppEmoticonMessageViewModel, EmoticonCustomManageAddLogic, MMEmoticonView, NSString, SightIconView, UIImageView;

@interface AppEmoticonMessageCellView : CommonMessageCellView <MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate>
{
    MMEmoticonView *m_emoticonView;
    SightIconView *m_sightIconView;
    UIImageView *m_bottomInfoBgView;
    EmoticonCustomManageAddLogic *m_addEmoticonLogic;
}

- (void).cxx_destruct;
- (id)getViewController;
- (void)startDownloadImage;
- (void)onClick;
- (void)onTouchUpInside;
- (void)onForward:(id)arg1;
- (void)onSaveEmoticon:(id)arg1;
- (id)operationMenuItems;
- (void)showSightIconWithIconType:(int)arg1;
- (void)showBottomInfoBgView;
- (void)initEmoticonView;
- (void)updateProgress;
- (void)layoutContentView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppEmoticonMessageViewModel *viewModel; // @dynamic viewModel;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "EmoticonBackUpMgrExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel;
@protocol CustomEmoticonSynchronizeViewDelegate;

@interface CustomEmoticonSynchronizeView : MMUIView <EmoticonBackUpMgrExt, UIAlertViewDelegate>
{
    _Bool m_lastTimeAnimating;
    _Bool _m_firstEnterWithoutWiFi;
    unsigned int _m_localEmoticonLimit;
    UIButton *m_pauseButton;
    UIButton *m_startButton;
    UIButton *m_editButton;
    UIButton *m_closeButton;
    UIImageView *m_cloudImageView;
    UIImageView *m_cloudStatusImageView;
    UILabel *m_synchronizeStatusLabel;
    UILabel *m_networkStatusLabel;
    id <CustomEmoticonSynchronizeViewDelegate> _m_delegate;
}

@property(nonatomic) unsigned int m_localEmoticonLimit; // @synthesize m_localEmoticonLimit=_m_localEmoticonLimit;
@property(nonatomic) _Bool m_firstEnterWithoutWiFi; // @synthesize m_firstEnterWithoutWiFi=_m_firstEnterWithoutWiFi;
@property(nonatomic) __weak id <CustomEmoticonSynchronizeViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_lastTimeAnimating; // @synthesize m_lastTimeAnimating;
@property(retain, nonatomic) UILabel *m_networkStatusLabel; // @synthesize m_networkStatusLabel;
@property(retain, nonatomic) UILabel *m_synchronizeStatusLabel; // @synthesize m_synchronizeStatusLabel;
@property(retain, nonatomic) UIImageView *m_cloudStatusImageView; // @synthesize m_cloudStatusImageView;
@property(retain, nonatomic) UIImageView *m_cloudImageView; // @synthesize m_cloudImageView;
@property(retain, nonatomic) UIButton *m_closeButton; // @synthesize m_closeButton;
@property(retain, nonatomic) UIButton *m_editButton; // @synthesize m_editButton;
@property(retain, nonatomic) UIButton *m_startButton; // @synthesize m_startButton;
@property(retain, nonatomic) UIButton *m_pauseButton; // @synthesize m_pauseButton;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onEmoticonBackUpMgrSyncOperate;
- (void)onEmoticonBackUpMgrRecoverNetworkChangeToUnreachable;
- (void)onEmoticonBackUpMgrRecoverAutoPauseOnWWan;
- (void)onEmoticonBackUpMgrRecoverGoon;
- (void)onEmoticonBackUpMgrRecoverPause;
- (void)onEmoticonBackUpMgrRecoverFailed;
- (void)onEmoticonBackUpMgrRecoverComplete;
- (void)onEmoticonBackUpMgrRecoverOneEmoticon;
- (_Bool)isReachable;
- (_Bool)isOnWifi;
- (unsigned long long)getCurrentEmoticonCount;
- (_Bool)isRecoveringComplete;
- (_Bool)isRecoveringBeenPause;
- (_Bool)isRecovering;
- (void)layoutSubviews;
- (void)updateNetworkLabelTotalCount:(unsigned long long)arg1 CompleteCount:(unsigned long long)arg2;
- (void)updateSynchronizeLabelTotalCount:(unsigned long long)arg1 CompleteCount:(unsigned long long)arg2;
- (void)updateCloudImageViewTotalCount:(unsigned long long)arg1 CompleteCount:(unsigned long long)arg2;
- (void)updateCloseButtonTotalCount:(unsigned long long)arg1 CompleteCount:(unsigned long long)arg2;
- (void)onClickClose;
- (void)updateEditButtonTotalCount:(unsigned long long)arg1 CompleteCount:(unsigned long long)arg2;
- (void)onClickEdit;
- (void)updateStartButtonTotalCount:(unsigned long long)arg1 CompleteCount:(unsigned long long)arg2;
- (void)onClickStart;
- (void)updatePauseButtonTotalCount:(unsigned long long)arg1 CompleteCount:(unsigned long long)arg2;
- (void)onClickPause;
- (void)updateView;
- (void)onBecomeActive;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


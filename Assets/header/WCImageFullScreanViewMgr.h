//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "WCImageFullScreenWindowDelegate-Protocol.h"

@class NSString, WCImageFullScreenWindow;

@interface WCImageFullScreanViewMgr : MMService <MMService, WCImageFullScreenWindowDelegate>
{
    WCImageFullScreenWindow *m_view;
    NSString *_nsFromVCName;
}

- (void).cxx_destruct;
- (void)onWindowAnimationHide;
- (void)onWindowAnimationWillHide;
- (_Bool)isWindowShown;
- (void)animationHideToLeft;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void)animationShowWithHint:(id)arg1;
- (id)getWCImageFullScreenView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


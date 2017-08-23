//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "WCCanvasComponentDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCCanvasLinearLayout : WCCanvasComponent <WCCanvasComponentDelegate>
{
    NSMutableDictionary *_viewContainer;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) NSMutableDictionary *viewContainer; // @synthesize viewContainer=_viewContainer;
- (void).cxx_destruct;
- (_Bool)isCurSectionBlackMoreThanWhite:(long long)arg1;
- (id)getBackGroundColorWhenLoading:(long long)arg1;
- (void)hideDownArrowIcon;
- (_Bool)secionHasShowDownArrow:(long long)arg1;
- (void)tryShowDownArrowAnimate:(long long)arg1;
- (void)canvasComponent:(id)arg1 shouldForceHideArrowDownImage:(_Bool)arg2;
- (void)getCanvasScene:(int *)arg1;
- (void)canvasComponent:(id)arg1 willShowViewController:(id)arg2;
- (void)canvasComponent:(id)arg1 willAddViewController:(id)arg2;
- (void)canvasComponent:(id)arg1 willExistAndJumpUrl:(id)arg2;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillApperaInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


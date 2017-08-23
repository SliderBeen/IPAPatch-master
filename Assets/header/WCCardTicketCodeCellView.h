//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCCardCodeAnimatorDelegate-Protocol.h"

@class NSString, UIView, WCCardCodeAnimator, WCCardDataCardInfo, WCCardDataCardTPInfo;
@protocol WCCardTicketCodeCellViewDelegate;

@interface WCCardTicketCodeCellView : MMUIView <WCCardCodeAnimatorDelegate>
{
    WCCardDataCardTPInfo *_cardTpInfo;
    WCCardDataCardInfo *_cardInfo;
    WCCardCodeAnimator *_codeAnimator;
    UIView *_codeContainView;
    id <WCCardTicketCodeCellViewDelegate> _delegate;
}

+ (double)heightForCardSource:(id)arg1 viewWidth:(double)arg2;
- (void).cxx_destruct;
- (void)codeAnimatorWillExitFullScreen:(id)arg1;
- (void)codeAnimatorWillBecomeFullScreen:(id)arg1;
- (void)fieldClicked:(id)arg1;
- (id)createCodeNumView;
- (id)getCodeViewWithCode:(id)arg1;
- (id)createSecondaryFieldView;
- (void)setupView;
- (id)initWithViewWidth:(double)arg1 cardSource:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


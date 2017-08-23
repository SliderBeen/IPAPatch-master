//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSDictionary, UIButton, UIImageView, UIView;
@protocol WCAtomicRedEnvReceiveHomeViewDelegate;

@interface WCAtomicRedEnvReceiveHomeView : MMUIView
{
    id <WCAtomicRedEnvReceiveHomeViewDelegate> m_delegate;
    UIImageView *m_oBackgroundView;
    UIButton *m_oOpenRedEnvelopesButton;
    UIImageView *m_oOpenAnimationImageView;
    struct CGRect m_oFrame;
    NSDictionary *m_dicBaseInfo;
    _Bool m_bChecked;
    UIButton *checkedButton;
    _Bool m_bEndAnmation;
    UIView *m_oRedView;
    UIView *m_oTopHeaderView;
    UIImageView *imageView;
}

- (void).cxx_destruct;
- (void)OnCheckChanged;
- (void)showSuccessOpenAnimation;
- (void)removeView;
- (void)endAnimation;
- (void)showAnimation;
- (void)stopReceiveAnimation;
- (void)startReceiveAnimation;
- (void)OnOpenRedEnvelopes;
- (void)OnOpenList;
- (void)OnCancelButtonDone;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (void)refreshViewWithData:(id)arg1;

@end


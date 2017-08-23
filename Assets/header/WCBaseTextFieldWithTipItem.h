//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "MMTipsViewControllerDelegate-Protocol.h"

@class MMUIViewController, NSString, UIButton;

@interface WCBaseTextFieldWithTipItem : WCBaseTextFieldItem <MMTipsViewControllerDelegate>
{
    UIButton *m_tipBtn;
    MMUIViewController *m_viewController;
    NSString *m_nsTipTitle;
    NSString *m_nsTipContent;
    NSString *_cancelTitle;
    id _target;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
- (void).cxx_destruct;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)addCancelTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)setTipContent:(id)arg1 Title:(id)arg2;
- (void)setTipBtnShowed:(_Bool)arg1;
- (void)setViewController:(id)arg1;
- (void)addTipBtnTarget:(id)arg1 sel:(SEL)arg2;
- (void)showPhoneTip;
- (void)initView:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


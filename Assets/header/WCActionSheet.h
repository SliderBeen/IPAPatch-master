//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "IUiUtilExt-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIColor, UIView;
@protocol WCActionSheetDelegate;

@interface WCActionSheet : MMUIWindow <UIGestureRecognizerDelegate, IUiUtilExt>
{
    _Bool _shouldHide;
    _Bool _hasCustomView;
    _Bool _shouldRelease;
    _Bool _hasSeplineButton;
    _Bool _customViewEnable;
    NSString *_cancelButtonTitle;
    NSMutableArray *_buttonTitleList;
    UIView *_pannelView;
    UIView *_titleView;
    UIView *_backgroundView;
    UIView *_containerView;
    id <WCActionSheetDelegate> _delegateEx;
    NSString *_title;
    long long _destructiveButtonIndex;
    long long _firstOtherButtonIndex;
    long long _cancelButtonIndex;
    long long _m_lastOrientation;
    UIColor *_cancelBtnTextColor;
    NSString *_customViewTitle;
    NSString *_customViewDesc;
    NSString *_customViewTitleColor;
    NSString *_customViewDescColor;
    long long _customViewTitleSize;
    long long _customViewDescSize;
    UIView *_customNewYearView;
    unsigned long long _numberOfButtons;
    UIView *_customView;
}

+ (long long)getActionSheetWidth;
@property(nonatomic) _Bool customViewEnable; // @synthesize customViewEnable=_customViewEnable;
@property(nonatomic) _Bool hasSeplineButton; // @synthesize hasSeplineButton=_hasSeplineButton;
@property(nonatomic) _Bool shouldRelease; // @synthesize shouldRelease=_shouldRelease;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) unsigned long long numberOfButtons; // @synthesize numberOfButtons=_numberOfButtons;
@property(retain, nonatomic) UIView *customNewYearView; // @synthesize customNewYearView=_customNewYearView;
@property(nonatomic) _Bool hasCustomView; // @synthesize hasCustomView=_hasCustomView;
@property(nonatomic) long long customViewDescSize; // @synthesize customViewDescSize=_customViewDescSize;
@property(nonatomic) long long customViewTitleSize; // @synthesize customViewTitleSize=_customViewTitleSize;
@property(retain, nonatomic) NSString *customViewDescColor; // @synthesize customViewDescColor=_customViewDescColor;
@property(retain, nonatomic) NSString *customViewTitleColor; // @synthesize customViewTitleColor=_customViewTitleColor;
@property(retain, nonatomic) NSString *customViewDesc; // @synthesize customViewDesc=_customViewDesc;
@property(retain, nonatomic) NSString *customViewTitle; // @synthesize customViewTitle=_customViewTitle;
@property(retain, nonatomic) UIColor *cancelBtnTextColor; // @synthesize cancelBtnTextColor=_cancelBtnTextColor;
@property(nonatomic) _Bool shouldHide; // @synthesize shouldHide=_shouldHide;
@property(nonatomic) long long m_lastOrientation; // @synthesize m_lastOrientation=_m_lastOrientation;
@property(nonatomic) long long firstOtherButtonIndex; // @synthesize firstOtherButtonIndex=_firstOtherButtonIndex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCActionSheetDelegate> delegateEx; // @synthesize delegateEx=_delegateEx;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *pannelView; // @synthesize pannelView=_pannelView;
@property(retain, nonatomic) NSMutableArray *buttonTitleList; // @synthesize buttonTitleList=_buttonTitleList;
@property(retain, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)OnCancel:(id)arg1;
- (void)OnDefaultButtonTapped:(id)arg1;
- (void)addTapRecognizer;
- (void)tapOut:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadInnerView;
- (double)heightOfCustomView;
- (id)genCustomView;
- (id)genGrayBarView;
- (id)makePannelViewWithButtonList:(id)arg1 withCancelButtonTitle:(id)arg2;
- (id)makeTitleViewWithTitle:(id)arg1;
- (double)heightOfWholeSheet;
- (long long)addCustomViewWithTitle:(id)arg1 fontSize:(long long)arg2 fontColor:(id)arg3 WithDesc:(id)arg4 descFontSize:(long long)arg5 descFontColor:(id)arg6 enable:(_Bool)arg7;
- (void)appendButtonTitle:(id)arg1 atIndex:(int)arg2;
- (void)showInView:(id)arg1;
- (void)setCancelButtonTextColor:(id)arg1;
@property(nonatomic) long long destructiveButtonIndex; // @synthesize destructiveButtonIndex=_destructiveButtonIndex;
@property(nonatomic) long long customButtonIndex;
@property(nonatomic) long long cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
- (id)buttonTitleAtIndex:(long long)arg1;
- (unsigned long long)numberOfButtonsExcludingCancelButton;
- (long long)addButtonWithTitle:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)addButtonWithTitle:(id)arg1;
@property(nonatomic) __weak id <WCActionSheetDelegate> delegate;
- (_Bool)accessibilityPerformEscape;
- (void)onOpenApiWillBeginShare:(id)arg1;
- (void)deviceDidRotate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)shouldHideOnRotate;
- (void)onMainWindowFrameChanged;
- (void)onStatusBarFrameChanged;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)init;
- (void)dealloc;
- (void)setActionSheetName:(id)arg1;
- (id)getActionSheetName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

@class UIButton, UIImageView, UITextField, UIWindow;
@protocol GraphicVerifyWindowDelegate;

@interface GraphicVerifyWindow : MMUIWindow
{
    UIImageView *m_codeImageView;
    UIButton *m_changeImgBtn;
    UIButton *m_verifyBtn;
    UIButton *m_cancelBtn;
    UITextField *m_textFieldCode;
    id <GraphicVerifyWindowDelegate> m_delegate;
    UIWindow *oldKeyWindow;
}

@property(retain, nonatomic) UIImageView *m_codeImageView; // @synthesize m_codeImageView;
@property(retain, nonatomic) UIWindow *oldKeyWindow; // @synthesize oldKeyWindow;
- (void).cxx_destruct;
- (void)resignKeyWindow;
- (void)makeKeyAndVisible;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onNext;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyChangeImage;
- (void)initHeaderView;
- (void)internalInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end


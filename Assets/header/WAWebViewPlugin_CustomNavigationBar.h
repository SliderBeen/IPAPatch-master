//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

@class UILongPressGestureRecognizer, WAWebViewController;

@interface WAWebViewPlugin_CustomNavigationBar : WAWebViewPluginBase
{
    _Bool _bIsJsapiDefineNavigationLeftItem;
    _Bool _bIsJsapiDefineNavigationRightItem;
    CDUnknownBlockType _onClickRightNavItem;
    _Bool _bIsShowNavigationLoading;
    int _navigationMode;
    UILongPressGestureRecognizer *_longPressRecognizer;
    _Bool _isTrigerLongPress;
    _Bool _isEnableClose;
    _Bool _enableShareMenu;
    WAWebViewController *_mainWebView;
}

@property(nonatomic) __weak WAWebViewController *mainWebView; // @synthesize mainWebView=_mainWebView;
@property(nonatomic) _Bool enableShareMenu; // @synthesize enableShareMenu=_enableShareMenu;
@property(nonatomic) _Bool m_bIsJsapiDefineNavigationRightItem; // @synthesize m_bIsJsapiDefineNavigationRightItem=_bIsJsapiDefineNavigationRightItem;
- (void).cxx_destruct;
- (void)setTitleColorAndUpdate:(id)arg1;
- (void)setTitle:(id)arg1 color:(id)arg2;
- (void)changeStatusBarWhite:(_Bool)arg1;
- (void)hideNavigationTitleLoading;
- (void)showNavigationTitleLoading;
- (void)setRightNavBarItemHidden:(_Bool)arg1;
- (void)onClickJSDefineRightNavItem;
- (void)onMore;
- (void)onLongPressMoreItem:(id)arg1;
- (void)updateNavItemsWithEnmMode:(int)arg1;
- (void)setNavBarElementAndStatusBarStyle:(int)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@protocol WCPayCreditPayFinishCreateViewControllerDelegate;

@interface WCPayCreditPayFinishCreateViewController : WCPayBaseViewController
{
    id <WCPayCreditPayFinishCreateViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)onIncreaseLimit;
- (void)onBack;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)initFooterView;
- (void)initHeaderView;
- (void)viewWillLayoutSubviews;
- (void)initNavigationBar;
- (id)init;

@end


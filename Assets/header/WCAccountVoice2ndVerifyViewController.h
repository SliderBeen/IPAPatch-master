//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

@protocol WCAccountVoice2ndVerifyViewControllerDelegate;

@interface WCAccountVoice2ndVerifyViewController : WCAccountBaseViewController
{
    id <WCAccountVoice2ndVerifyViewControllerDelegate> _m_delegate;
}

@property(nonatomic) __weak id <WCAccountVoice2ndVerifyViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)initHeaderView;
- (void)initNavigationBar;
- (void)initView;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end


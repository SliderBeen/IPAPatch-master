//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMsgContentViewController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;
@protocol BottleMsgViewControllerDelegate;

@interface BottleMsgViewController : BaseMsgContentViewController <UIAlertViewDelegate>
{
    id <BottleMsgViewControllerDelegate> m_bottleDelegate;
}

@property(nonatomic) __weak id <BottleMsgViewControllerDelegate> m_bottleDelegate; // @synthesize m_bottleDelegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getLeftBarButton;
- (void)onBackButtonClicked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


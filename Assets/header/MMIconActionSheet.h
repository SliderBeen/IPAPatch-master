//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMGridViewActionDelegate-Protocol.h"
#import "MMGridViewDataSource-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMGridView, MMGridViewLayoutHorizontalPagedLTRStrategy, NSArray, NSString, UIPageControl, UIPopoverController, UIView, UIViewController;
@protocol MMIconActionSheetDelegate;

@interface MMIconActionSheet : NSObject <UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate, UIScrollViewDelegate, MMGridViewDataSource, MMGridViewActionDelegate>
{
    UIPageControl *pageControl;
    NSString *cancelButtonTitle;
    MMGridView *gridView;
    NSArray *items;
    MMGridViewLayoutHorizontalPagedLTRStrategy *layoutStrategy;
    id <MMIconActionSheetDelegate> m_delegate;
    NSString *title;
    UIView *_transparentView;
    UIView *_contentView;
    UIPopoverController *_popoverController;
    long long _lastOri;
    UIViewController *_popoverControllerNew;
}

+ (long long)getIconActionSheetWidth;
@property(retain, nonatomic) UIViewController *popoverControllerNew; // @synthesize popoverControllerNew=_popoverControllerNew;
@property(nonatomic) long long lastOri; // @synthesize lastOri=_lastOri;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) __weak id <MMIconActionSheetDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMGridViewLayoutHorizontalPagedLTRStrategy *layoutStrategy; // @synthesize layoutStrategy;
@property(retain, nonatomic) NSArray *items; // @synthesize items;
@property(retain, nonatomic) MMGridView *gridView; // @synthesize gridView;
@property(retain, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl;
- (void).cxx_destruct;
- (void)MMGridView:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (id)MMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)MMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInMMGridView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)onExit;
- (void)OnCancel:(id)arg1;
- (void)OnPageChanged:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)reloadInnerView:(id)arg1;
- (void)removeFromView;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)showInView:(id)arg1;
- (id)initWithItems:(id)arg1 cancelButtonTitle:(id)arg2 delegate:(id)arg3 landscape:(_Bool)arg4 headerView:(id)arg5;
- (id)initWithItems:(id)arg1 cancelButtonTitle:(id)arg2 delegate:(id)arg3 landscape:(_Bool)arg4;
- (id)initWithItems:(id)arg1 cancelButtonTitle:(id)arg2 delegate:(id)arg3 landscape:(_Bool)arg4 title:(id)arg5 description:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


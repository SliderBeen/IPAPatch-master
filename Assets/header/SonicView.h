//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMScrollView.h"

@class NSMutableArray, UIView;

@interface SonicView : MMScrollView
{
    NSMutableArray *_headImageList;
    UIView *m_containView;
    NSMutableArray *_firstPageRandomArray;
}

@property(retain, nonatomic) UIView *m_containView; // @synthesize m_containView;
- (void).cxx_destruct;
- (void)onVerifyOk:(id)arg1;
- (void)onGetMsg:(id)arg1 PushContact:(id)arg2;
- (void)addHeadImageList:(id)arg1;
- (void)fadeinItems:(id)arg1;
- (void)popupView:(id)arg1;
- (int)getRandomNumber;
- (struct CGRect)getFrameByIndex:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end


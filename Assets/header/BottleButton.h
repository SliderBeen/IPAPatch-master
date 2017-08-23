//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage;
@protocol NSObject;

@interface BottleButton : UIView
{
    _Bool mIsEnabled;
    _Bool mIsSelected;
    id <NSObject> targetor;
    SEL selector;
    UIImage *normalImage;
    UIImage *highlightImage;
    UIImage *highlightLabelImage;
    UIImage *selectedLabelImage;
    NSString *text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text;
@property(retain, nonatomic) UIImage *selectedLabelImage; // @synthesize selectedLabelImage;
@property(retain, nonatomic) UIImage *highlightLabelImage; // @synthesize highlightLabelImage;
@property(retain, nonatomic) UIImage *highlightImage; // @synthesize highlightImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)setBadgeCount:(int)arg1;
- (_Bool)isSelected;
- (void)cancelSelected;
- (_Bool)isEnabeld;
- (void)setEnabled:(_Bool)arg1;
- (void)dealloc;
- (void)genBottleButton;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)checkTouchPoint:(struct CGPoint)arg1 IfInView:(id)arg2;
- (void)selected;
- (void)highlight;
- (void)normal;
- (void)initView;

@end


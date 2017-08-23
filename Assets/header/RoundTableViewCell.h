//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface RoundTableViewCell : UIView
{
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UIImageView *_backgroundView;
    UIImageView *_accessoryView;
    int _accessoryViewType;
    id _target;
    SEL _selAction;
}

@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) int accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
- (void).cxx_destruct;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setRightLabelText:(id)arg1;
- (void)setLeftLabelText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)becomeNormal;
- (void)becomeHighlight;
- (void)ensureSubviewsExist;

@end


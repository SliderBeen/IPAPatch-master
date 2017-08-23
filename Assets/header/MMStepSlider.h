//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, UIImageView, UILabel, UIView;
@protocol MMStepSliderDelegate;

@interface MMStepSlider : UIControl
{
    _Bool _sliderOn;
    UIImageView *_sliderImageView;
    UIView *_trackViewNormal;
    UILabel *_standardLabel;
    unsigned int _value;
    unsigned int _stepCount;
    id <MMStepSliderDelegate> m_delegate;
    NSArray *_scaleTextArray;
    NSArray *_scaleTextSizeArray;
}

@property(readonly, nonatomic) NSArray *scaleTextSizeArray; // @synthesize scaleTextSizeArray=_scaleTextSizeArray;
@property(readonly, nonatomic) NSArray *scaleTextArray; // @synthesize scaleTextArray=_scaleTextArray;
@property(nonatomic) __weak id <MMStepSliderDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) unsigned int stepCount; // @synthesize stepCount=_stepCount;
@property(nonatomic) unsigned int value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)touchTrackNormalView:(long long)arg1;
- (float)stepMarkerXCloseToX:(long long)arg1;
- (float)xForValue:(unsigned int)arg1;
- (id)genScaleLabel:(id)arg1:(double)arg2;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithWidth:(double)arg1 StepCount:(long long)arg2 TextArray:(id)arg3 TextSizeArray:(id)arg4;

@end


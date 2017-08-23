//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray, UIImageView;

@interface MMSightDotsProgressBar : UIView
{
    unsigned int _lastSplitDotIndex;
    unsigned int _lastSplitImageIndex;
    double _keyDuration;
    CADisplayLink *_displayLink;
    NSArray *_dotsArray;
    UIImageView *_splitAnimationView;
    double _splitTimeStamp;
}

@property(nonatomic) unsigned int lastSplitImageIndex; // @synthesize lastSplitImageIndex=_lastSplitImageIndex;
@property(nonatomic) unsigned int lastSplitDotIndex; // @synthesize lastSplitDotIndex=_lastSplitDotIndex;
@property(nonatomic) double splitTimeStamp; // @synthesize splitTimeStamp=_splitTimeStamp;
@property(retain, nonatomic) UIImageView *splitAnimationView; // @synthesize splitAnimationView=_splitAnimationView;
@property(retain, nonatomic) NSArray *dotsArray; // @synthesize dotsArray=_dotsArray;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double keyDuration; // @synthesize keyDuration=_keyDuration;
- (void).cxx_destruct;
- (void)setupSplitAnimationViewWithSplitTimeStamp:(double)arg1 origin:(struct CGPoint)arg2;
- (void)updateAnimation;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setupDots;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface WCCardSawtoothBgView : UIView
{
    int _sawtoothRadius;
    int _sawtoothInterval;
    UIColor *_sawtoothColor;
}

@property(nonatomic) int sawtoothInterval; // @synthesize sawtoothInterval=_sawtoothInterval;
@property(retain, nonatomic) UIColor *sawtoothColor; // @synthesize sawtoothColor=_sawtoothColor;
@property(nonatomic) int sawtoothRadius; // @synthesize sawtoothRadius=_sawtoothRadius;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@interface EditImageBorderView : MMUIView
{
    double _viewScale;
}

@property(nonatomic) double _viewScale; // @synthesize _viewScale;
- (void)rescaleFrame:(double)arg1;
- (void)resizeFrame:(struct CGRect)arg1 withScale:(double)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withScale:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


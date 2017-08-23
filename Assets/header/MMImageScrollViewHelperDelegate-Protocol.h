//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIGestureRecognizer, UIScrollView, UIView;

@protocol MMImageScrollViewHelperDelegate <NSObject>

@optional
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(nonatomic) double zoomScale;
@property(nonatomic) struct CGRect frame;
- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setZoomScale:(float)arg1 animated:(_Bool)arg2;
- (void)removeGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)addGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)OnLongPress:(id)arg1;
- (_Bool)bBanDoubleTap;
- (void)onDoubleTap:(UIGestureRecognizer *)arg1;
- (void)onSingleTap:(UIGestureRecognizer *)arg1;
- (UIScrollView *)getScrollView;
- (UIView *)viewForZooming;
@end


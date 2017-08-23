//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMImageScrollViewHelper, NSArray, NSString, UIActivityIndicatorView, UIView;
@protocol WCImageScrollViewDelegate;

@interface WCImageScrollView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    UIView *imageView;
    unsigned long long index;
    UIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    _Bool supportOrientation;
    id <WCImageScrollViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) UIActivityIndicatorView *mActivityIndicator; // @synthesize mActivityIndicator;
@property(nonatomic) _Bool supportOrientation; // @synthesize supportOrientation;
@property(nonatomic) unsigned long long index; // @synthesize index;
- (void).cxx_destruct;
- (void)rotateImageWithImage:(id)arg1;
- (void)setImageTransform:(struct CGAffineTransform)arg1;
- (void)stopLoading;
- (void)displayView:(id)arg1;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)internalDisplayImage:(id)arg1 withFrame:(struct CGRect)arg2 animate:(_Bool)arg3;
- (double)angelFromOldOrientation:(long long)arg1 newOrientation:(long long)arg2;
- (long long)orientationToInt:(long long)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end


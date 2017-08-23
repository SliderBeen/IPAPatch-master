//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, RSAnimationHeadImgView;
@protocol RSVerifyAnimationViewDelegate;

@interface RSVerifyAnimationView : MMUIScrollView <UIScrollViewDelegate>
{
    RSAnimationHeadImgView *_headImage;
    struct CGPoint _originPoint;
    struct CGSize _originSize;
    id <RSVerifyAnimationViewDelegate> _rsDelegate;
}

@property(nonatomic) __weak id <RSVerifyAnimationViewDelegate> rsDelegate; // @synthesize rsDelegate=_rsDelegate;
@property(retain, nonatomic) RSAnimationHeadImgView *headImage; // @synthesize headImage=_headImage;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)onZoomOutFinish;
- (void)onZoomInFinish;
- (void)doZoomOutAnimation;
- (void)startAnimationWithRadarSearchMember:(id)arg1 remarkName:(id)arg2 OriginPoint:(struct CGPoint)arg3;
- (void)doZoomOut:(float)arg1 animated:(_Bool)arg2;
- (void)doZoomIn:(float)arg1 animated:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


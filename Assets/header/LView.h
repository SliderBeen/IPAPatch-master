//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class AVCaptureVideoPreviewLayer, UIView;
@protocol NSObject;

@interface LView : UIImageView
{
    _Bool mIsCameraFront;
    AVCaptureVideoPreviewLayer *localLayer;
    UIView *m_defaultView;
    SEL selector;
    id <NSObject> targetor;
}

@property(retain, nonatomic) id <NSObject> targetor; // @synthesize targetor;
@property(nonatomic) SEL selector; // @synthesize selector;
@property(nonatomic) _Bool mIsCameraFront; // @synthesize mIsCameraFront;
@property(retain, nonatomic) UIView *m_defaultView; // @synthesize m_defaultView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *localLayer; // @synthesize localLayer;
- (void).cxx_destruct;
- (void)resetSmallRect;
- (void)randerDefaultView:(id)arg1;
- (void)switchLocalView:(_Bool)arg1;
- (void)dealloc;
- (void)changeFrame:(struct CGRect)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)stopRender;
- (void)restartRender;
- (void)transformFrontImage;
- (void)transformBackImage;
- (void)addSingleTapTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithView:(id)arg1 Layer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)checkTouchPoint:(struct CGPoint)arg1 IfInView:(id)arg2;

@end


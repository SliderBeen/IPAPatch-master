//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLView_v2, LView;

@interface VOIPVideoRender : NSObject
{
    EAGLView_v2 *glview;
    LView *lview;
}

- (void).cxx_destruct;
- (id)getView;
- (id)getGLView;
- (id)getLView;
- (void)setDegrees:(float)arg1;
- (void)randerDefaultView:(id)arg1;
- (void)switchLocalView:(_Bool)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (void)renderImage3:(char **)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage2:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)stopRender;
- (void)restartRender;
- (void)transformFrontImage;
- (void)transformBackImage;
- (void)addSingleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)initWithView:(id)arg1 UseELGS2:(_Bool)arg2 UseNV12:(_Bool)arg3 IsMirrored:(_Bool)arg4 Layer:(id)arg5;
- (id)initWithView:(id)arg1 UseELGS2:(_Bool)arg2 Layer:(id)arg3;

@end


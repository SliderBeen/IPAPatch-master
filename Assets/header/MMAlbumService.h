//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMAnimationTipViewDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class ALAssetsLibrary, MMImageSaveTipView, NSString;

@interface MMAlbumService : MMService <MMAnimationTipViewDelegate, MMService>
{
    ALAssetsLibrary *_library;
    MMImageSaveTipView *_tipView;
}

- (void).cxx_destruct;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)fadeShowEnd;
- (void)showSaveResultTip:(id)arg1 andText:(id)arg2;
- (void)initMMImageSaveTipView;
- (void)saveImageDataToAlbumAndShowTipsWithImageData:(id)arg1;
- (void)saveImageToAlbumAndShowTipsWithImage:(id)arg1;
- (void)saveImageToAlbumAndShowTipsWithPath:(id)arg1;
- (void)saveVideoToAlbumWithPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveImageToAlbumWithPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveVideoToAlbumAndShowTipsWithPath:(id)arg1;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage *)arg1 orientation:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)isAlbumAcessGranted;
- (id)defaultAssetsLibrary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCActionSheetDelegate-Protocol.h"

@class MMUIWindow, NSString, SightIconView, SightView, UIImageView;

@interface WCCardVideoViewController : MMUIViewController <WCActionSheetDelegate>
{
    SightView *_sightView;
    SightIconView *_iconView;
    UIImageView *_originImageView;
    MMUIWindow *_fullScreenWindow;
    NSString *_videoPath;
    CDUnknownBlockType _closeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) __weak MMUIWindow *fullScreenWindow; // @synthesize fullScreenWindow=_fullScreenWindow;
@property(retain, nonatomic) UIImageView *originImageView; // @synthesize originImageView=_originImageView;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SightView *sightView; // @synthesize sightView=_sightView;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)configCloseBlock:(CDUnknownBlockType)arg1;
- (void)tryToPlayWithVideoPath:(id)arg1;
- (void)clearSubviews;
- (void)onSavedVideoAlbum;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)snapImage;
- (void)tapDidSelected;
- (void)longPressDidSelected;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


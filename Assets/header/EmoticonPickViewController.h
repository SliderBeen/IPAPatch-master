//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonCustomManageAddLogicDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class EmoticonCustomManageAddLogic, NSData, NSString, UIImage, UIImageView;

@interface EmoticonPickViewController : MMUIViewController <EmoticonCustomManageAddLogicDelegate, UIAlertViewDelegate>
{
    NSData *m_imageData;
    UIImage *m_image;
    UIImageView *m_emoticonBkgView;
    NSString *m_localMd5;
    UIImageView *_m_imageView;
    EmoticonCustomManageAddLogic *_addEmoticonLogic;
}

@property(retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic; // @synthesize addEmoticonLogic=_addEmoticonLogic;
@property(retain, nonatomic) UIImageView *m_imageView; // @synthesize m_imageView=_m_imageView;
@property(retain, nonatomic) NSString *m_localMd5; // @synthesize m_localMd5;
@property(retain, nonatomic) UIImageView *m_emoticonBkgView; // @synthesize m_emoticonBkgView;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
- (void).cxx_destruct;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)realHasAlphaForImage:(id)arg1;
- (id)dataRepresentationForImage:(id)arg1;
- (void)viewDidLoad;
- (void)Confirm;
- (void)Cancel;
- (void)showTipsAndQuit:(id)arg1;
- (void)initToolBar;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


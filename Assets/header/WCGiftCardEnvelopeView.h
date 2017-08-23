//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMWebImageView, UIButton, UIImageView, UILabel, UIView, WCPreGiftCardData;

@interface WCGiftCardEnvelopeView : MMUIView
{
    WCPreGiftCardData *_preCardData;
    UIView *_defaulTopView;
    UIImageView *_defaulBottomImageView;
    MMWebImageView *_headImageView;
    UILabel *_fromUserNameLabel;
    UILabel *_contentLabel;
    UIButton *_acceptButton;
    UIButton *_closeButton;
    UILabel *_acceptLabel;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _acceptBlock;
}

@property(copy, nonatomic) CDUnknownBlockType acceptBlock; // @synthesize acceptBlock=_acceptBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) UILabel *acceptLabel; // @synthesize acceptLabel=_acceptLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *fromUserNameLabel; // @synthesize fromUserNameLabel=_fromUserNameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIImageView *defaulBottomImageView; // @synthesize defaulBottomImageView=_defaulBottomImageView;
@property(retain, nonatomic) UIView *defaulTopView; // @synthesize defaulTopView=_defaulTopView;
@property(retain, nonatomic) WCPreGiftCardData *preCardData; // @synthesize preCardData=_preCardData;
- (void).cxx_destruct;
- (void)acceptButtonDidClicked;
- (void)closeButtonDidClicked;
- (void)stopTurnWithAction:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopTurnAndOpenAnimation:(CDUnknownBlockType)arg1;
- (void)stopTurnAnimation;
- (void)showTurnButtonAnimation;
- (void)setAcceptDidClicked:(CDUnknownBlockType)arg1;
- (void)setCloseDidClicked:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


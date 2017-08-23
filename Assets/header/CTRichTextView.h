//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMCPLabel.h"

@class CTFrameWrap, NSMutableArray, NSMutableAttributedString;
@protocol ILinkEventExt;

@interface CTRichTextView : MMCPLabel
{
    NSMutableAttributedString *_attString;
    struct __CTFramesetter *_framesetter;
    CTFrameWrap *_frame;
    NSMutableArray *_images;
    NSMutableArray *_colors;
    NSMutableArray *_tempImages;
    double _fWidth;
    double _fHeight;
    unsigned long long _parserType;
    id <ILinkEventExt> _linkDelegate;
    _Bool _bUpdateFramesIfNeeded;
    _Bool _bWholeField;
    _Bool _bIsLongPressHandled;
    struct CGRect _touchedRect;
    _Bool _bTouchesPassOn;
    _Bool _bHandleLongPress;
    _Bool _isCHS;
    double _lineSpace;
}

@property(nonatomic) _Bool isCHS; // @synthesize isCHS=_isCHS;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) _Bool bHandleLongPress; // @synthesize bHandleLongPress=_bHandleLongPress;
@property(nonatomic) _Bool bTouchesPassOn; // @synthesize bTouchesPassOn=_bTouchesPassOn;
@property(nonatomic) __weak id <ILinkEventExt> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(nonatomic) unsigned long long parserType; // @synthesize parserType=_parserType;
@property(nonatomic) double fHeight; // @synthesize fHeight=_fHeight;
@property(nonatomic) double fWidth; // @synthesize fWidth=_fWidth;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)longPressOnTextEvent:(id)arg1;
- (void)longPressOnPhoneEvent:(id)arg1;
- (void)longPressOnLinkEvent:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setContent:(id)arg1;
- (double)heightForContent:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateFrames;
- (void)updateFramesIfNeeded;
- (void)updateFrame;
- (void)updateFrameSetting;
- (unsigned long long)numberOfLinesAfterLayout;
- (double)boundingWidth;
- (double)boundingHeightForWidth:(double)arg1;
- (double)boundingHeight;
- (double)boundingWidthForHeight:(double)arg1;
- (id)createParser:(unsigned long long)arg1;
- (id)getParserByPaserType:(unsigned long long)arg1;
- (void)baseInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


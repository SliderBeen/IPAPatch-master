//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUILabel.h"

@class NSString, UIColor, UILongPressGestureRecognizer;
@protocol MMCPLabelDelegate;

@interface MMCPLabel : MMUILabel
{
    NSString *m_cpKey;
    UILongPressGestureRecognizer *m_recognizer;
    NSString *m_restoreStr;
    _Bool m_bRegisterObserver;
    _Bool _showRestoreMenuItem;
    _Bool _showCopyMenuItem;
    _Bool _isHighlighted;
    id <MMCPLabelDelegate> _cpLabelDelegate;
    NSString *_prefixTitle;
    UIColor *_hlBackgroundColor;
}

@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(retain, nonatomic) UIColor *hlBackgroundColor; // @synthesize hlBackgroundColor=_hlBackgroundColor;
@property(retain, nonatomic) NSString *prefixTitle; // @synthesize prefixTitle=_prefixTitle;
@property(nonatomic) _Bool showCopyMenuItem; // @synthesize showCopyMenuItem=_showCopyMenuItem;
@property(nonatomic) __weak id <MMCPLabelDelegate> cpLabelDelegate; // @synthesize cpLabelDelegate=_cpLabelDelegate;
@property(nonatomic) _Bool showRestoreMenuItem; // @synthesize showRestoreMenuItem=_showRestoreMenuItem;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=m_cpKey;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onRestore:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)handleLongPressGestureRecognizer:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(struct _NSRange)arg3;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 startIndex:(unsigned long long)arg3;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2;

@end


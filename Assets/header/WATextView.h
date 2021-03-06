//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "UITextViewDelegate-Protocol.h"
#import "WATextInputInterface-Protocol.h"

@class NSString, UIColor, UIFont, UIView;
@protocol WATextInputDelegate;

@interface WATextView : UITextView <WATextInputInterface, UITextViewDelegate>
{
    long long _lineCount;
    UIView *_greyMask;
    UIColor *_placeColor;
    UIFont *_placeFont;
    _Bool _autoSize;
    struct CGRect _rcCaret;
    _Bool showConfirmButton;
    _Bool multiLine;
    _Bool initKeyBoard;
    _Bool fixed;
    _Bool confirmHold;
    unsigned int inputId;
    id <WATextInputDelegate> keyboardDelegate;
    NSString *userData;
    long long maxLength;
    NSString *defaultValue;
    double bottomMargin;
    NSString *_placeHolder;
}

@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) _Bool confirmHold; // @synthesize confirmHold;
@property(nonatomic) _Bool fixed; // @synthesize fixed;
@property(nonatomic) _Bool initKeyBoard; // @synthesize initKeyBoard;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin;
@property(nonatomic) _Bool multiLine; // @synthesize multiLine;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue;
@property(nonatomic) long long maxLength; // @synthesize maxLength;
@property(copy, nonatomic) NSString *userData; // @synthesize userData;
@property(nonatomic) unsigned int inputId; // @synthesize inputId;
@property(nonatomic) __weak id <WATextInputDelegate> keyboardDelegate; // @synthesize keyboardDelegate;
@property(nonatomic) _Bool showConfirmButton; // @synthesize showConfirmButton;
- (void).cxx_destruct;
- (_Bool)isAutoSize;
- (void)setAutoSize:(_Bool)arg1;
- (double)getContentHeight;
- (long long)getLineCount;
- (void)setReturnKeyType:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setVisible:(_Bool)arg1;
- (_Bool)isBold;
- (double)getFontSize;
- (void)setInputFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(double)arg1 bold:(_Bool)arg2;
- (id)getAccessoryButton;
- (struct CGRect)getVisibleRect;
- (void)removeFromParent;
- (void)becomeFirstResponder:(_Bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setInputValue:(id)arg1 cursorPos:(long long)arg2;
- (void)setDisable:(_Bool)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)adjustSizeFit:(id)arg1;
- (void)calculateCaretPos;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)setInputPlaceholder:(id)arg1 placeholderStyle:(id)arg2;
- (id)getInputValue;
- (id)getSelectedTextRange;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)textDidChange:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


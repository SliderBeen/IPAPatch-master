//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIPickerView, UIPopoverController, UIView, UIViewController;
@protocol WCPayPickerViewDelegate;

@interface WCPayPickerView : NSObject <UIPopoverPresentationControllerDelegate, UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIPickerView *m_pickerView;
    id <WCPayPickerViewDelegate> m_delegate;
    int m_curSession;
    NSMutableArray *m_arrSessions;
    NSMutableArray *m_arrRows;
    NSMutableDictionary *m_dicSelectionIndex;
    double m_fLeftWidth;
    long long _tag;
    UIView *_contentView;
    UIView *_transparentView;
    UIPopoverController *_popoverController;
    UIViewController *_popoverControllerNew;
    long long _lastOri;
    NSString *_title;
    NSArray *_handlers;
}

+ (struct CGSize)getPickerViewSize;
@property(retain, nonatomic) NSArray *handlers; // @synthesize handlers=_handlers;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long lastOri; // @synthesize lastOri=_lastOri;
@property(retain, nonatomic) UIViewController *popoverControllerNew; // @synthesize popoverControllerNew=_popoverControllerNew;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSMutableDictionary *m_dicSelectionIndex; // @synthesize m_dicSelectionIndex;
@property(nonatomic) __weak id <WCPayPickerViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIPickerView *m_pickerView; // @synthesize m_pickerView;
- (void).cxx_destruct;
- (void)setSelectedRowTitle:(id)arg1 atSessionTitle:(id)arg2;
- (void)setSelectedRows:(id)arg1;
- (void)setSelectedRow:(long long)arg1 atSession:(long long)arg2;
- (void)UIPickerViewDidFinish;
- (void)UIPickerViewDidCancel;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)setLeftWidth:(double)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)showInView:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)dealloc;
- (id)initWithRows:(id)arg1 handlers:(id)arg2 title:(id)arg3;
- (id)initWithRows:(id)arg1 title:(id)arg2;
- (id)initWithRows:(id)arg1;
- (id)initWithSessions:(id)arg1 andRows:(id)arg2;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class MMWebImageView, NSString, UIImageView, UIView;
@protocol EmoticonTabItemViewDelegate;

@interface EmoticonTabItemView : MMUIView <MMWebImageViewDelegate>
{
    _Bool m_selected;
    _Bool _needConvertToGrayImage;
    _Bool _m_isUrlImageView;
    UIImageView *m_normalImageView;
    UIImageView *m_highlightedBackgroundImageView;
    UIImageView *m_normalBackgroundImageView;
    MMWebImageView *m_webImageView;
    id <EmoticonTabItemViewDelegate> m_delegate;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) _Bool m_isUrlImageView; // @synthesize m_isUrlImageView=_m_isUrlImageView;
@property(nonatomic) _Bool needConvertToGrayImage; // @synthesize needConvertToGrayImage=_needConvertToGrayImage;
@property(nonatomic) _Bool m_selected; // @synthesize m_selected;
@property(nonatomic) __weak id <EmoticonTabItemViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMWebImageView *m_webImageView; // @synthesize m_webImageView;
@property(retain, nonatomic) UIImageView *m_normalBackgroundImageView; // @synthesize m_normalBackgroundImageView;
@property(retain, nonatomic) UIImageView *m_highlightedBackgroundImageView; // @synthesize m_highlightedBackgroundImageView;
@property(retain, nonatomic) UIImageView *m_normalImageView; // @synthesize m_normalImageView;
- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)isUrlImageView;
- (_Bool)getSelected;
- (void)setSelected:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighLightedBackgroundImage:(id)arg1;
- (void)setNormalBackgroundImage:(id)arg1;
- (void)setNormalImage:(id)arg1;
- (void)setNormalImageUrl:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


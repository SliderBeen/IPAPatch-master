//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSMutableArray, UIButton, UIScrollView;
@protocol MultiPickImagePanelDelegate;

@interface MultiPickImagePanel : MMUIView
{
    NSMutableArray *_imageInfos;
    UIScrollView *_scrollView;
    UIButton *m_btnAdd;
    id <MultiPickImagePanelDelegate> _delegate;
}

@property(nonatomic) __weak id <MultiPickImagePanelDelegate> _delegate; // @synthesize _delegate;
- (void).cxx_destruct;
- (id)GetImageByIndex:(unsigned int)arg1;
- (unsigned int)GetImageCount;
- (void)onDoneBtnClicked:(id)arg1;
- (void)onAddBtn:(id)arg1;
- (void)onImageClicked:(id)arg1;
- (_Bool)addImage:(id)arg1;
- (void)updateAddBtnFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end


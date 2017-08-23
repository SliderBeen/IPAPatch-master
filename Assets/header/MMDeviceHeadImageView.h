//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "MMWebImageViewDelegate-Protocol.h"

@class MMWebImageView, NSString;

@interface MMDeviceHeadImageView : UIButton <MMWebImageViewDelegate>
{
    MMWebImageView *m_headView;
    _Bool m_borderRadius;
    _Bool _isRound;
    struct CGSize m_headSize;
}

@property(nonatomic) _Bool isRound; // @synthesize isRound=_isRound;
@property(nonatomic) struct CGSize m_headSize; // @synthesize m_headSize;
- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (void)reset;
- (void)setDeviceIconUrl:(id)arg1;
- (void)layoutSubviews;
- (void)setUpdateUrl:(id)arg1;
- (void)SetHeadImage:(id)arg1;
- (void)TrySetDefaultHeadImage:(id)arg1;
- (void)TrySetDefaultHeadImage;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


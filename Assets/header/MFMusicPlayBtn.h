//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "MFBanner-Protocol.h"

@class TextFlowView, UIImageView;

@interface MFMusicPlayBtn : UIButton <MFBanner>
{
    TextFlowView *_flowview;
    UIImageView *_iView;
}

- (void).cxx_destruct;
- (void)setupFlowTextView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


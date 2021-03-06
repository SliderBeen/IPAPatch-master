//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, NSMutableArray;
@protocol SGTopEntryViewDelegate;

@interface SGTopEntryView : UIView
{
    MMUILabel *_titleLabel;
    NSMutableArray *_arrEntryDatas;
    NSMutableArray *_arrButtons;
    NSMutableArray *_arrDivLines;
    id <SGTopEntryViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SGTopEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTapButton:(id)arg1;
- (void)layoutSubviews;
- (double)getButtonTitleFontSize;
- (void)updateEntrys:(id)arg1;

@end


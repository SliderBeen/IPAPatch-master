//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class MMUILabel, MMWebImageView, NSString, UIImageView, UIView;

@interface WAHomeTableViewCell : MMMultiMenuTableViewCell <MMWebImageViewDelegate>
{
    _Bool _isNeedLogoGray;
    long long _runningState;
    _Bool _isStared;
    _Bool _isBottom;
    unsigned int _stateFlag;
    NSString *_iconUrl;
    NSString *_title;
    MMWebImageView *_headImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_debugLabel;
    MMUILabel *_stateLabel;
    UIImageView *_staredView;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *staredView; // @synthesize staredView=_staredView;
@property(retain, nonatomic) MMUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) MMUILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned int stateFlag; // @synthesize stateFlag=_stateFlag;
- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (void)markBottom;
- (void)markUnStared;
- (void)markStared;
- (void)makeStateBanned;
- (void)makeStateStopService;
- (void)makeStateNormal;
- (void)setHeadImageWithPath:(id)arg1;
- (void)layoutSubviews;
- (void)initLineView;
- (void)initStateLabel;
- (void)initStaredLogoView;
- (void)initDebugLabel;
- (void)initTitleLabel;
- (void)initHeadImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


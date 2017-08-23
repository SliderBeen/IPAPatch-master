//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CContact, MMBrandHeadImageView, MMUILabel, UIButton, UILabel;
@protocol WAIconHeadViewDelegate;

@interface WAIconHeadView : UIView
{
    id <WAIconHeadViewDelegate> _delegate;
    CContact *_contact;
    unsigned long long _appType;
    UIButton *_exposeButton;
    MMBrandHeadImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_stateLabel;
    MMUILabel *_appTypeLabel;
}

@property(retain, nonatomic) MMUILabel *appTypeLabel; // @synthesize appTypeLabel=_appTypeLabel;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMBrandHeadImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *exposeButton; // @synthesize exposeButton=_exposeButton;
@property(nonatomic) unsigned long long appType; // @synthesize appType=_appType;
@property(nonatomic) __weak CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WAIconHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onExposeBtnClicked:(id)arg1;
- (void)initStateLabel;
- (void)initTitleLabel;
- (void)initIconImageView;
- (void)initExposeButton;
- (id)initWithContact:(id)arg1 appType:(unsigned long long)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, UILabel, UIView;

@interface WCPayOverseaMainWalletFooterView : UICollectionReusableView
{
    NSArray *_m_walletRegionDescArray;
    UIView *_m_coverView;
    UILabel *_m_walletRegionDescLabel;
}

@property(retain, nonatomic) UILabel *m_walletRegionDescLabel; // @synthesize m_walletRegionDescLabel=_m_walletRegionDescLabel;
@property(retain, nonatomic) UIView *m_coverView; // @synthesize m_coverView=_m_coverView;
@property(retain, nonatomic) NSArray *m_walletRegionDescArray; // @synthesize m_walletRegionDescArray=_m_walletRegionDescArray;
- (void).cxx_destruct;
- (void)updateWalletRegionDescView;
- (id)totalRegionDesc;
- (void)updateCoverView;
- (void)layoutSubviews;

@end


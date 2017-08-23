//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UINavigationController, WCDataItem, WCLikeButton;

@interface WCOperateFloatView : UIView
{
    WCDataItem *m_item;
    WCLikeButton *m_likeBtn;
    UIButton *m_commentBtn;
    UIImageView *m_bkgImageView;
    UIImageView *m_lineView;
    UIView *m_clipView;
    UILabel *m_tipLabel;
    UINavigationController *navigationController;
}

@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController;
@property(readonly, nonatomic) UIButton *m_commentBtn; // @synthesize m_commentBtn;
@property(readonly, nonatomic) UIButton *m_likeBtn; // @synthesize m_likeBtn;
@property(readonly, nonatomic) WCDataItem *m_item; // @synthesize m_item;
- (void).cxx_destruct;
- (void)onLikeItem:(id)arg1;
- (void)hide;
- (void)animationDidStopHide;
- (void)animationDidStop;
- (void)showWithItemData:(id)arg1 tipPoint:(struct CGPoint)arg2;
- (id)init;

@end


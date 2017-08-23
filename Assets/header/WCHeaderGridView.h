//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, RichTextView, UIImageView, UILabel, UINavigationController;

@interface WCHeaderGridView : UIView
{
    NSMutableArray *m_arrContacts;
    double imageHeight;
    double rowSpace;
    double sectionSpace;
    unsigned int countPerLine;
    unsigned int likeCount;
    UILabel *m_titleLabel;
    UIImageView *m_iconImageView;
    RichTextView *m_richText;
    NSMutableArray *m_arrHeaderViews;
    NSMutableArray *m_arrHeaderMatteViews;
    UINavigationController *navigationController;
    _Bool isHBComment;
    _Bool isRewardGrid;
}

@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController;
@property(readonly, nonatomic) UIImageView *m_iconImageView; // @synthesize m_iconImageView;
@property(readonly, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel;
@property(nonatomic) unsigned int countPerLine; // @synthesize countPerLine;
@property(nonatomic) double sectionSpace; // @synthesize sectionSpace;
@property(nonatomic) double rowSpace; // @synthesize rowSpace;
@property(nonatomic) double imageHeight; // @synthesize imageHeight;
- (void).cxx_destruct;
- (void)updateView;
- (void)initView;
- (id)getTextContent;
- (void)onClickHeadImageView:(id)arg1;
- (void)showWCOfUser:(id)arg1;
- (id)initWithRewardInfos:(id)arg1 likeCount:(unsigned int)arg2 isRewardGrid:(_Bool)arg3;
- (id)initWithUserInfos:(id)arg1 likeCount:(unsigned int)arg2 isHBComment:(_Bool)arg3;
- (id)initWithUserInfos:(id)arg1 likeCount:(unsigned int)arg2;

@end


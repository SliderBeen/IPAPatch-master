//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class WCDataItem;

@interface WCLikeButton : MMUIButton
{
    WCDataItem *m_item;
    unsigned int m_uiSourceType;
    _Bool m_likeOperating;
}

@property(nonatomic) unsigned int m_uiSourceType; // @synthesize m_uiSourceType;
@property(retain, nonatomic) WCDataItem *m_item; // @synthesize m_item;
- (void).cxx_destruct;
- (void)onLikeFriend;
- (void)LikeBtnReduceEnd;
- (void)LikeBtnReduce;
- (void)LikeBtnEnlarge;
- (id)initWithDataItem:(id)arg1;
- (void)updateLikeBtn;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BSSBaseItemView.h"

@class AttributeLabel, BSBusinessContactItem, MMMaskHeadImageView, NSArray, UILabel;

@interface BSSBrandServiceItemView : BSSBaseItemView
{
    BSBusinessContactItem *_dataItem;
    NSArray *_keywordList;
    MMMaskHeadImageView *_headImgView;
    AttributeLabel *_titleLabel;
    UILabel *_sourceLabel;
}

+ (double)heightForItem;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) AttributeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMMaskHeadImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) NSArray *keywordList; // @synthesize keywordList=_keywordList;
@property(retain, nonatomic) BSBusinessContactItem *dataItem; // @synthesize dataItem=_dataItem;
- (void).cxx_destruct;
- (void)initView;
- (id)initWithContactServiceItem:(id)arg1 andKeyWordList:(id)arg2;
- (void)dealloc;

@end


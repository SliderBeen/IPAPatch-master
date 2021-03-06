//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface MMGridViewLayoutStrategyBase : MMObject
{
    int _type;
    struct CGSize _itemSize;
    long long _itemSpacingH;
    long long _itemSpacingV;
    struct UIEdgeInsets _minEdgeInsets;
    _Bool _centeredGridH;
    long long _itemCount;
    struct UIEdgeInsets _edgeInsets;
    struct CGRect _gridBounds;
    struct CGSize _contentSize;
    _Bool m_shouldAutoAdaptColumn;
    _Bool m_hasSetColumn;
    _Bool m_shouldAutoAdaptRow;
    _Bool m_hasSetRow;
}

@property(nonatomic) _Bool m_shouldAutoAdaptRow; // @synthesize m_shouldAutoAdaptRow;
@property(nonatomic) _Bool m_shouldAutoAdaptColumn; // @synthesize m_shouldAutoAdaptColumn;
@property(readonly, nonatomic) long long itemSpacingV; // @synthesize itemSpacingV=_itemSpacingV;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) struct CGRect gridBounds; // @synthesize gridBounds=_gridBounds;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(readonly, nonatomic) _Bool centeredGridH; // @synthesize centeredGridH=_centeredGridH;
@property(readonly, nonatomic) struct UIEdgeInsets minEdgeInsets; // @synthesize minEdgeInsets=_minEdgeInsets;
@property(readonly, nonatomic) long long itemSpacingH; // @synthesize itemSpacingH=_itemSpacingH;
@property(readonly, nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void)setEdgeAndContentSizeFromAbsoluteContentSize:(struct CGSize)arg1;
- (void)setupItemSize:(struct CGSize)arg1 andItemSpacingH:(long long)arg2 andItemSpacingV:(long long)arg3 withMinEdgeInsets:(struct UIEdgeInsets)arg4 andCenteredGrid:(_Bool)arg5;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MMDelegateProxy, NSMutableArray, NSString, UICollectionView;
@protocol MMMultiSelectedContactDisplayViewDelegate;

@interface MMMultiSelectedContactDisplayView : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    MMDelegateProxy<MMMultiSelectedContactDisplayViewDelegate> *_delegate;
    NSMutableArray *_contactList;
    UICollectionView *_collectionView;
    long long _layoutMode;
}

+ (double)getDisplayViewHeight;
@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableArray *contactList; // @synthesize contactList=_contactList;
@property(nonatomic) __weak MMDelegateProxy<MMMultiSelectedContactDisplayViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)genContactItemViewWithContact:(id)arg1;
- (void)removeContactSpecialMode:(id)arg1;
- (void)addContactSpecialMode:(id)arg1;
- (unsigned long long)findAndRemoveContact:(id)arg1;
- (void)resetCollectionView;
- (_Bool)isContactExist:(id)arg1;
- (id)getDisplayViewInNormalState;
- (void)reloadData;
- (void)handleRemoveContact:(id)arg1;
- (void)handleAddNewContact:(id)arg1;
- (void)handleSetExistContacts:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)initView;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (double)getContentLineSpacing;
- (double)getContentInterSpacing;
- (double)getContentLeftOffset;
- (double)getContentTopOffset;
- (double)getDisplayItemLen;
- (_Bool)needTwoRowLayoutCalc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


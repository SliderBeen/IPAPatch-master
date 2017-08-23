//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "EmoticonStoreCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UICollectionView;
@protocol RecommendGridViewDelegate;

@interface RecommendGridView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, EmoticonStoreCellDelegate>
{
    NSMutableArray *_emotionsArray;
    NSString *_packageId;
    UICollectionView *_collectionView;
    id <RecommendGridViewDelegate> _delegate;
}

+ (id)getStoreItemPid;
@property(retain, nonatomic) id <RecommendGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(retain, nonatomic) NSMutableArray *emotionsArray; // @synthesize emotionsArray=_emotionsArray;
- (void).cxx_destruct;
- (void)OnShowAlertWithIKnow:(id)arg1;
- (void)OnShowAlertWithOK:(id)arg1;
- (void)OnStopLoading;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configCollectionView;
- (void)configViews;
- (void)reloadData;
- (void)setRecommendGridViewDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


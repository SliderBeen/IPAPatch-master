//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class EmoticonStoreItem, GetEmotionListResponse, NSArray;

@protocol EmoticonStoreMgrExt

@optional
- (void)OnBuyEmoticonItemCanceled:(EmoticonStoreItem *)arg1;
- (void)OnBuyEmoticonItemFailed:(EmoticonStoreItem *)arg1;
- (void)OnBuyEmoticonItemSuccess:(EmoticonStoreItem *)arg1;
- (void)OnStoreListChanged:(NSArray *)arg1 withRet:(int)arg2 withReqType:(unsigned int)arg3 Response:(GetEmotionListResponse *)arg4;
@end


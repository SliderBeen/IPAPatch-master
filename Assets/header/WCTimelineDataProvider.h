//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;
@protocol WCDataProviderDelegate;

@interface WCTimelineDataProvider : MMObject <PBMessageObserverDelegate>
{
    NSString *fpHash;
    _Bool isWorking;
    unsigned long long uiClientLatestID;
    id <WCDataProviderDelegate> delegate;
}

@property(nonatomic) __weak id <WCDataProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)responseForSnsTimeLineWithTypeResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)forceGetSnsTimeLineOfSightFromServer;
- (void)updateChangedItemsWithReferID:(id)arg1 bottomID:(id)arg2 minChangedTime:(unsigned int)arg3;
- (void)updateWithReferID:(id)arg1 LatestID:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)responseForSnsTimeLineResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)saveResponseListForFutureList:(id)arg1;
- (void)internalSaveResponseListForFutureList:(id)arg1;
- (void)requestForSnsTimeLineRequest:(id)arg1 minID:(id)arg2 lastRequestTime:(unsigned int)arg3;
- (int)getNetworkType;
- (id)convertServerRecList2List:(id)arg1;
- (id)converServerAdList2List:(id)arg1;
- (_Bool)isAdItemReceived:(id)arg1;
- (_Bool)hasExistAdItem:(id)arg1;
- (id)converListToList:(id)arg1;
- (id)convertAdvertiseMsgListToList;
- (void)removeAllCacheAdvertiseMsgXml;
- (id)getCachedAdItemList;
- (id)getAdMsgXmlList;
- (void)meggeObjectOperation:(id)arg1 snsObject:(id)arg2;
- (unsigned int)onServiceCleanMd5;
- (unsigned int)onServiceCleanCache;
- (void)dealloc;
- (void)SafeMD5;
- (id)init;

@end


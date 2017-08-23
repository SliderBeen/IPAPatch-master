//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, WCCardPkgDB;
@protocol WCCardPkgBatchGetMgrDelegate;

@interface WCCardPkgBatchGetMgr : MMObject <PBMessageObserverDelegate>
{
    WCCardPkgDB *_wcCardPkgDB;
    NSMutableArray *_batchGetArray;
    id <WCCardPkgBatchGetMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <WCCardPkgBatchGetMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)delFinishedCardIDFromBatchGetArray:(id)arg1;
- (void)handleBatchGetObjectList:(id)arg1;
- (void)handleBatchGetWCCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)tryStartBatchGet;
- (void)addBatchGetCardList:(id)arg1;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;

@end


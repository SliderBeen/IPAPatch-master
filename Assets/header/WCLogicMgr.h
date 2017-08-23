//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableSet;
@protocol WCLogicMgrDelegate;

@interface WCLogicMgr : MMObject <PBMessageObserverDelegate>
{
    id <WCLogicMgrDelegate> m_delegate;
    NSMutableSet *setWorkingItems;
}

@property(nonatomic) __weak id <WCLogicMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)unLikeDataItem:(id)arg1;
- (_Bool)unCommentDataItem:(id)arg1 commentID:(id)arg2;
- (void)updateDataItemDetailWithGroupDetail:(id)arg1;
- (void)updateDataItemDetail:(id)arg1;
- (_Bool)responseForSnsObjectDetailResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)requestForSnsObjectDetailRequest:(id)arg1 groupDetail:(_Bool)arg2;
- (void)exposeDataItem:(id)arg1;
- (void)requestForExposeRequest:(id)arg1;
- (_Bool)responseForExposeResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)deleteDataItem:(id)arg1;
- (void)setDataItemHate:(id)arg1;
- (void)setDataItemPublic:(id)arg1;
- (void)setDataItemPrivate:(id)arg1;
- (void)onOperation:(id)arg1 Finished:(long long)arg2;
- (_Bool)responseForSnsObjectOpResponse:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)requestForSnsObjectOpRequest:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end


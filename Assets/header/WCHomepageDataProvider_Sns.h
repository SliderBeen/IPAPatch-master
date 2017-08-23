//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;
@protocol WCDataProviderDelegate;

@interface WCHomepageDataProvider_Sns : MMObject <PBMessageObserverDelegate>
{
    NSString *username;
    NSString *fpHash;
    _Bool isWorking;
    id <WCDataProviderDelegate> delegate;
}

@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(nonatomic) __weak id <WCDataProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)forceUpdateWithReferID:(id)arg1;
- (void)updateHeadWithSource:(long long)arg1;
- (void)updateWithReferID:(id)arg1 bottomID:(id)arg2;
- (void)updateWithReferID:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)responseForSnsUserPageResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)saveResponseListForFutureList:(id)arg1;
- (void)internalSaveResponseListForFutureList:(id)arg1;
- (void)requestForSnsHomepageRequest:(id)arg1 minID:(id)arg2 source:(long long)arg3;
- (void)requestForSnsHomepageRequest:(id)arg1 source:(long long)arg2;
- (id)converListToList:(id)arg1;
- (void)dealloc;

@end


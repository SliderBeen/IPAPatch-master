//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol StoreEmotionSearchEmotionCgiDelegate <NSObject>

@optional
- (void)onSearchEmotionCgiFailedForKeyword:(NSString *)arg1 NewQuery:(_Bool)arg2;
- (void)onSearchEmotionCgiOkForKeyword:(NSString *)arg1 NewQuery:(_Bool)arg2 SearchResult:(NSString *)arg3 PageBufferStr:(NSString *)arg4 searchId:(unsigned long long)arg5;
@end


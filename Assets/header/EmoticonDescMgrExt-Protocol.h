//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CEmoticonWrap, NSArray, NSString;

@protocol EmoticonDescMgrExt

@optional
- (void)onGetEmoticonDesc:(NSString *)arg1 withEmoticonWrap:(CEmoticonWrap *)arg2;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 downloadFlag:(unsigned int)arg2 pid:(NSString *)arg3;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 pid:(NSString *)arg2;
- (void)onGetEmoticonDesc:(NSArray *)arg1 forMd5:(NSString *)arg2;
- (void)onGetEmoticonDesc:(NSString *)arg1 descList:(NSArray *)arg2;
@end


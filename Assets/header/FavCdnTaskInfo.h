//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CdnFavMediaInfo;

@interface FavCdnTaskInfo : NSObject
{
    int retryCount;
    CdnFavMediaInfo *mediaInfo;
}

@property(retain, nonatomic) CdnFavMediaInfo *mediaInfo; // @synthesize mediaInfo;
@property(nonatomic) int retryCount; // @synthesize retryCount;
- (void).cxx_destruct;

@end


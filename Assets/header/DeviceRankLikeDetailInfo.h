//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface DeviceRankLikeDetailInfo : MMObject
{
    unsigned int uiLikeTime;
    NSString *nsUserName;
    NSString *nsRankId;
    NSString *nsLikeTip;
}

@property(retain, nonatomic) NSString *nsLikeTip; // @synthesize nsLikeTip;
@property(retain, nonatomic) NSString *nsRankId; // @synthesize nsRankId;
@property(nonatomic) unsigned int uiLikeTime; // @synthesize uiLikeTime;
@property(retain, nonatomic) NSString *nsUserName; // @synthesize nsUserName;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRecommendMetaInfo : NSObject
{
    int recommendType;
    int source;
    NSString *expId;
    NSString *contentXml;
    NSString *expOriginSnsId;
}

@property(retain, nonatomic) NSString *expOriginSnsId; // @synthesize expOriginSnsId;
@property(retain, nonatomic) NSString *contentXml; // @synthesize contentXml;
@property(retain, nonatomic) NSString *expId; // @synthesize expId;
@property(nonatomic) int source; // @synthesize source;
@property(nonatomic) int recommendType; // @synthesize recommendType;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

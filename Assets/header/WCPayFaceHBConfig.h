//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPayFaceHBConfig : NSObject <PBCoding>
{
    unsigned int resourceVersion;
    unsigned int uiTotalCount;
    unsigned long long uiTotalMount;
}

+ (void)initialize;
@property(nonatomic) unsigned int uiTotalCount; // @synthesize uiTotalCount;
@property(nonatomic) unsigned long long uiTotalMount; // @synthesize uiTotalMount;
@property(nonatomic) unsigned int resourceVersion; // @synthesize resourceVersion;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


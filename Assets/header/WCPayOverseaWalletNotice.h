//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface WCPayOverseaWalletNotice : NSObject <PBCoding>
{
    NSData *conent;
    NSData *url;
}

+ (void)initialize;
@property(retain, nonatomic) NSData *url; // @synthesize url;
@property(retain, nonatomic) NSData *conent; // @synthesize conent;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


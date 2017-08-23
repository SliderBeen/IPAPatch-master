//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface WWKBaseObject : NSObject
{
    NSString *_bundleID;
    NSString *_bundleName;
    unsigned long long _sequence;
}

+ (id)deserializeWithData:(id)arg1;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (_Bool)deserializeWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *serializedDict;
@property(readonly, nonatomic) NSData *serializedData;
- (id)init;

@end

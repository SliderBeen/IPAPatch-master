//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCPayOverseaPayFunctionObject : NSObject <PBCoding>
{
    unsigned int m_functionId;
    unsigned int m_propertyType;
    NSString *m_functionName;
    NSString *m_functionIconUrl;
    NSString *m_functionHDIconUrl;
    NSString *m_functionForegroundIconUrl;
    NSString *m_h5Url;
    NSString *m_nativeUrl;
    NSMutableArray *m_activityInfoList;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *m_activityInfoList; // @synthesize m_activityInfoList;
@property(nonatomic) unsigned int m_propertyType; // @synthesize m_propertyType;
@property(retain, nonatomic) NSString *m_nativeUrl; // @synthesize m_nativeUrl;
@property(retain, nonatomic) NSString *m_h5Url; // @synthesize m_h5Url;
@property(retain, nonatomic) NSString *m_functionForegroundIconUrl; // @synthesize m_functionForegroundIconUrl;
@property(retain, nonatomic) NSString *m_functionHDIconUrl; // @synthesize m_functionHDIconUrl;
@property(retain, nonatomic) NSString *m_functionIconUrl; // @synthesize m_functionIconUrl;
@property(retain, nonatomic) NSString *m_functionName; // @synthesize m_functionName;
@property(nonatomic) unsigned int m_functionId; // @synthesize m_functionId;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


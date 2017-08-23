//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, WAAppPackageInfo;

@interface WAAppMsgItem : MMObject
{
    unsigned int _type;
    unsigned int _version;
    NSString *_username;
    NSString *_appid;
    NSString *_pagepath;
    NSString *_weappIconUrl;
    WAAppPackageInfo *_packInfo;
}

@property(retain, nonatomic) WAAppPackageInfo *packInfo; // @synthesize packInfo=_packInfo;
@property(retain, nonatomic) NSString *weappIconUrl; // @synthesize weappIconUrl=_weappIconUrl;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *pagepath; // @synthesize pagepath=_pagepath;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


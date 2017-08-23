//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WAReportBaseItem : MMObject
{
    unsigned long long _scene;
    NSString *_sceneNote;
    NSString *_sessionId;
    NSString *_appid;
    long long _appVersion;
    unsigned long long _appstate;
    unsigned long long _usedstate;
    NSString *_pagePath;
    NSString *_networkType;
}

@property(copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned long long usedstate; // @synthesize usedstate=_usedstate;
@property(nonatomic) unsigned long long appstate; // @synthesize appstate=_appstate;
@property(nonatomic) long long appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (id)reportString;

@end


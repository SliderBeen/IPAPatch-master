//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface Scope2ApiAuthInfo : NSObject
{
    unsigned int _scopeStatus;
    NSString *_scopeDesc;
    NSMutableArray *_apiList;
}

@property(retain, nonatomic) NSMutableArray *apiList; // @synthesize apiList=_apiList;
@property(retain, nonatomic) NSString *scopeDesc; // @synthesize scopeDesc=_scopeDesc;
@property(nonatomic) unsigned int scopeStatus; // @synthesize scopeStatus=_scopeStatus;
- (void).cxx_destruct;

@end


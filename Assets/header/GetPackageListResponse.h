//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface GetPackageListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
@property(nonatomic) unsigned int svrCount; // @dynamic svrCount;
@property(nonatomic) unsigned int type; // @dynamic type;

@end


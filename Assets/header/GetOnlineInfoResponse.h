//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface GetOnlineInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(nonatomic) unsigned int onlineCount; // @dynamic onlineCount;
@property(retain, nonatomic) NSMutableArray *onlineList; // @dynamic onlineList;
@property(retain, nonatomic) NSString *summaryXml; // @dynamic summaryXml;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, WXCPbVoiceClientScene;

@interface WXCPbSCVoiceClientSceneReportResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WXCPbVoiceClientScene *clientScene; // @dynamic clientScene;
@property(retain, nonatomic) NSMutableArray *clientSceneExtList; // @dynamic clientSceneExtList;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) int memberId; // @dynamic memberId;
@property(nonatomic) int roomid; // @dynamic roomid;
@property(nonatomic) long long roomkey; // @dynamic roomkey;

@end


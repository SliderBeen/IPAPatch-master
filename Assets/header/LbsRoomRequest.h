//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface LbsRoomRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cellId; // @dynamic cellId;
@property(nonatomic) int exitScene; // @dynamic exitScene;
@property(nonatomic) int gpssource; // @dynamic gpssource;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *macAddr; // @dynamic macAddr;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(nonatomic) int precision; // @dynamic precision;
@property(retain, nonatomic) NSString *roomName; // @dynamic roomName;
@property(nonatomic) int stayTime; // @dynamic stayTime;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface AAQueryDetailRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(retain, nonatomic) NSString *changeWording; // @dynamic changeWording;
@property(nonatomic) unsigned int isLauncher; // @dynamic isLauncher;
@property(nonatomic) unsigned int jumpChange; // @dynamic jumpChange;
@property(retain, nonatomic) NSString *launcherUsername; // @dynamic launcherUsername;
@property(retain, nonatomic) NSString *outTradeNo; // @dynamic outTradeNo;
@property(nonatomic) unsigned int overtimeDays; // @dynamic overtimeDays;
@property(nonatomic) unsigned long long paidAmount; // @dynamic paidAmount;
@property(nonatomic) unsigned int paidNum; // @dynamic paidNum;
@property(retain, nonatomic) NSMutableArray *payerList; // @dynamic payerList;
@property(nonatomic) unsigned long long planAmount; // @dynamic planAmount;
@property(nonatomic) unsigned int planNum; // @dynamic planNum;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(nonatomic) unsigned int role; // @dynamic role;
@property(nonatomic) unsigned long long roleFinishAmount; // @dynamic roleFinishAmount;
@property(nonatomic) unsigned int rolePairCnt; // @dynamic rolePairCnt;
@property(nonatomic) unsigned long long roleRefundAmount; // @dynamic roleRefundAmount;
@property(nonatomic) unsigned int roleState; // @dynamic roleState;
@property(nonatomic) unsigned long long roleTotalAmount; // @dynamic roleTotalAmount;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned int type; // @dynamic type;

@end


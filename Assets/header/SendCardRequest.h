//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface SendCardRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *contentEx; // @dynamic contentEx;
@property(nonatomic) unsigned int sendCardBitFlag; // @dynamic sendCardBitFlag;
@property(nonatomic) unsigned int style; // @dynamic style;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end


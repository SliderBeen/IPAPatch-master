//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class LbsLocationNew, NSMutableArray, NSString;

@interface SearchHomePageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long businessType; // @dynamic businessType;
@property(retain, nonatomic) NSString *keyWord; // @dynamic keyWord;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *matchUserList; // @dynamic matchUserList;
@property(nonatomic) unsigned int requestSrc; // @dynamic requestSrc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface MFriendMobileInfo : MMObject
{
    NSString *_hashValue;
    NSString *_userName;
    NSString *_nickName;
    unsigned int _status;
    NSString *_bigHeadImgUrl;
    NSString *_smallHeadImgUrl;
    NSString *m_nsAntispamTicket;
}

@property(retain, nonatomic) NSString *m_nsAntispamTicket; // @synthesize m_nsAntispamTicket;
@property(retain, nonatomic) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl=_smallHeadImgUrl;
@property(retain, nonatomic) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl=_bigHeadImgUrl;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *hashValue; // @synthesize hashValue=_hashValue;
- (void).cxx_destruct;
- (long long)compareMFriendMobileInfoAscending:(id)arg1;
- (void)dealloc;
- (id)init;

@end


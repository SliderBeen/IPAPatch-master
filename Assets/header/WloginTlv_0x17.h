//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@interface WloginTlv_0x17 : WloginTlv
{
    unsigned short wDataVer;
    unsigned int dwTime;
    unsigned int dwClientIP;
    unsigned short wClientPort;
    unsigned short wResvLen;
}

@property unsigned short wResvLen; // @synthesize wResvLen;
@property unsigned short wClientPort; // @synthesize wClientPort;
@property unsigned int dwClientIP; // @synthesize dwClientIP;
@property unsigned int dwTime; // @synthesize dwTime;
@property unsigned short wDataVer; // @synthesize wDataVer;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end


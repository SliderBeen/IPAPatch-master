//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x129 : WloginTlv
{
    unsigned int dwHoldTime;
    unsigned int dwTimeout;
    NSString *phoneNo;
}

@property(copy) NSString *phoneNo; // @synthesize phoneNo;
@property unsigned int dwHoldTime; // @synthesize dwHoldTime;
@property unsigned int dwTimeout; // @synthesize dwTimeout;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end


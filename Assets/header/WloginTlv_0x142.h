//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x142 : WloginTlv
{
    unsigned short wIDVer;
    NSString *sIdentifier;
}

@property unsigned short wIDVer; // @synthesize wIDVer;
@property(copy) NSString *sIdentifier; // @synthesize sIdentifier;
- (void)dealloc;
- (int)encode:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseResp.h"

@class NSString;

@interface SendAuthResp : BaseResp
{
    NSString *code;
    NSString *state;
    NSString *lang;
    NSString *country;
}

@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(retain, nonatomic) NSString *lang; // @synthesize lang;
@property(retain, nonatomic) NSString *state; // @synthesize state;
@property(retain, nonatomic) NSString *code; // @synthesize code;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end


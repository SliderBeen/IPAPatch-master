//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CContact.h"

@class NSString;

@interface CSearchedContact : CContact
{
    unsigned int matchType;
    NSString *searchString;
}

+ (id)contactFromSearchContactResp:(id)arg1 Req:(id)arg2;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString;
@property(nonatomic) unsigned int matchType; // @synthesize matchType;
- (void).cxx_destruct;

@end


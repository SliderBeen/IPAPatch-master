//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface TwitterArchiveData : NSObject <NSCoding>
{
    NSString *m_nsAccessToken;
    NSString *m_nsAccessTokenSecret;
}

@property(retain, nonatomic) NSString *m_nsAccessTokenSecret; // @synthesize m_nsAccessTokenSecret;
@property(retain, nonatomic) NSString *m_nsAccessToken; // @synthesize m_nsAccessToken;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


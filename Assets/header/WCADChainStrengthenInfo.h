//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCADChainStrengthenInfo : NSObject
{
    int wordingType;
    NSString *directWording;
    NSString *replaceWording;
    NSString *wordingLink;
    NSMutableArray *arrUserName;
}

@property(retain, nonatomic) NSMutableArray *arrUserName; // @synthesize arrUserName;
@property(retain, nonatomic) NSString *wordingLink; // @synthesize wordingLink;
@property(retain, nonatomic) NSString *replaceWording; // @synthesize replaceWording;
@property(retain, nonatomic) NSString *directWording; // @synthesize directWording;
@property(nonatomic) int wordingType; // @synthesize wordingType;
- (void).cxx_destruct;
- (_Bool)isValidForShow;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCNewClickStatPageData : MMObject
{
    unsigned int appearTimeStamp;
    unsigned int disappearTimeStamp;
    NSString *pageID;
}

+ (id)pageData:(id)arg1 withAppearTimeStamp:(unsigned int)arg2 withDisappearTimeStamp:(unsigned int)arg3;
@property(nonatomic) unsigned int disappearTimeStamp; // @synthesize disappearTimeStamp;
@property(nonatomic) unsigned int appearTimeStamp; // @synthesize appearTimeStamp;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID;
- (void).cxx_destruct;
- (id)description;

@end


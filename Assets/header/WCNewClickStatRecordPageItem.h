//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface WCNewClickStatRecordPageItem : MMObject <NSCopying>
{
    unsigned int pageAction;
    unsigned int timeStamp;
    NSString *pageID;
}

+ (id)pageItem:(id)arg1 withAction:(unsigned int)arg2 withTimeStamp:(unsigned int)arg3;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID;
@property(nonatomic) unsigned int pageAction; // @synthesize pageAction;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


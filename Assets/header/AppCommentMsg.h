//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface AppCommentMsg : NSObject
{
    NSString *deviceType;
    NSString *message;
    NSMutableArray *items;
    NSString *title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items;
@property(retain, nonatomic) NSString *message; // @synthesize message;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType;
- (void).cxx_destruct;
- (id)getItemByButtonIndex:(long long)arg1;
- (id)getCancelItem;
- (void)parseXML:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithXml:(id)arg1;

@end


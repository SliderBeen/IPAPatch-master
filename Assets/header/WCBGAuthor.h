//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCMediaItem;

@interface WCBGAuthor : NSObject
{
    NSString *name;
    NSString *title;
    NSString *quote;
    NSString *desc;
    WCMediaItem *icon;
}

@property(retain, nonatomic) WCMediaItem *icon; // @synthesize icon;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *quote; // @synthesize quote;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


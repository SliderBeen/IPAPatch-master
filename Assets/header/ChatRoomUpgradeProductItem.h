//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ChatRoomUpgradeProductItem : NSObject
{
    NSString *title;
    NSString *productID;
    NSString *desc;
    NSString *extDesc;
    NSString *price;
    NSString *priceUnit;
    unsigned int productType;
    unsigned int lifeTime;
}

+ (void)initialize;
@property(nonatomic) unsigned int lifeTime; // @synthesize lifeTime;
@property(nonatomic) unsigned int productType; // @synthesize productType;
@property(retain, nonatomic) NSString *priceUnit; // @synthesize priceUnit;
@property(retain, nonatomic) NSString *price; // @synthesize price;
@property(retain, nonatomic) NSString *extDesc; // @synthesize extDesc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *productID; // @synthesize productID;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end


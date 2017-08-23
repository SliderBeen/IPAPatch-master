//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSBusinessServiceInfo, BusinessDetailInfo, CContact, NSString, SearchOrRecommendItemNew;

@interface BSBusinessContactItem : NSObject
{
    NSString *_nickName;
    BusinessDetailInfo *_detailInfo;
    SearchOrRecommendItemNew *_contactItem;
    BSBusinessServiceInfo *_serviceInfo;
    CContact *_contact;
    NSString *_jumpUrl;
}

+ (id)fromServerObj:(id)arg1;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) BSBusinessServiceInfo *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(retain, nonatomic) SearchOrRecommendItemNew *contactItem; // @synthesize contactItem=_contactItem;
@property(retain, nonatomic) BusinessDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (void)dealloc;

@end


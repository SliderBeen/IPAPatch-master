//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString, WCCardActionSheet, WCCardDetailInfo, WCCardFieldItem, WCCardFollowBoxInfo, WCCardOperationRegion, WCCardUseConditionInfo, WCCardUsedStoreInfo;

@interface WCCardDataCardTPInfo : MMObject <PBCoding>
{
    _Bool _needDirectjump;
    _Bool _hasHongbao;
    _Bool _isAcceptable;
    _Bool _isShowAcceptView;
    unsigned int _cardType;
    unsigned int _shopCount;
    unsigned int _blockMask;
    unsigned int _controlflag;
    unsigned int _genType;
    NSString *_cardTypeName;
    NSString *_cardCategory;
    NSString *_acceptWording;
    NSString *_buttonWording;
    NSString *_appId;
    NSString *_appUserName;
    NSString *_primarySubTitle;
    NSString *_middleIconUrl;
    NSString *_notice;
    NSString *_servicePhone;
    NSArray *_introduceFields;
    NSString *_imageTextUrl;
    NSString *_sourceIconUrl;
    NSString *_source;
    NSString *_h5ShowUrl;
    WCCardUsedStoreInfo *_oneShopInfo;
    NSString *_advertiseWording;
    NSString *_advertiseUrl;
    NSString *_publicServiceName;
    NSString *_publicServiceTip;
    WCCardOperationRegion *_announcement;
    NSString *_cardTpId;
    WCCardDetailInfo *_detailInfo;
    WCCardUseConditionInfo *_usedCondition;
    WCCardFollowBoxInfo *_followBoxInfo;
    WCCardActionSheet *_guidanceAction;
    NSString *color;
    NSString *logoUrl;
    NSString *logoName;
    NSArray *primaryFields;
    NSString *_title;
    NSString *_acceptTitle;
    WCCardFieldItem *_brandField;
    NSString *_cardExt;
    NSString *_unacceptableWording;
    NSString *_shopName;
    WCCardFieldItem *_payAndQrcodeField;
}

+ (void)initialize;
@property(retain, nonatomic) WCCardFieldItem *payAndQrcodeField; // @synthesize payAndQrcodeField=_payAndQrcodeField;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(nonatomic) _Bool isShowAcceptView; // @synthesize isShowAcceptView=_isShowAcceptView;
@property(retain, nonatomic) NSString *unacceptableWording; // @synthesize unacceptableWording=_unacceptableWording;
@property(nonatomic) _Bool isAcceptable; // @synthesize isAcceptable=_isAcceptable;
@property(nonatomic) _Bool hasHongbao; // @synthesize hasHongbao=_hasHongbao;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) WCCardFieldItem *brandField; // @synthesize brandField=_brandField;
@property(nonatomic) _Bool needDirectjump; // @synthesize needDirectjump=_needDirectjump;
@property(retain, nonatomic) NSString *acceptTitle; // @synthesize acceptTitle=_acceptTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *primaryFields; // @synthesize primaryFields;
@property(retain, nonatomic) NSString *logoName; // @synthesize logoName;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl;
@property(retain, nonatomic) NSString *color; // @synthesize color;
@property(retain, nonatomic) WCCardActionSheet *guidanceAction; // @synthesize guidanceAction=_guidanceAction;
@property(retain, nonatomic) WCCardFollowBoxInfo *followBoxInfo; // @synthesize followBoxInfo=_followBoxInfo;
@property(retain, nonatomic) WCCardUseConditionInfo *usedCondition; // @synthesize usedCondition=_usedCondition;
@property(retain, nonatomic) WCCardDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId=_cardTpId;
@property(nonatomic) unsigned int genType; // @synthesize genType=_genType;
@property(retain, nonatomic) WCCardOperationRegion *announcement; // @synthesize announcement=_announcement;
@property(retain, nonatomic) NSString *publicServiceTip; // @synthesize publicServiceTip=_publicServiceTip;
@property(retain, nonatomic) NSString *publicServiceName; // @synthesize publicServiceName=_publicServiceName;
@property(retain, nonatomic) NSString *advertiseUrl; // @synthesize advertiseUrl=_advertiseUrl;
@property(retain, nonatomic) NSString *advertiseWording; // @synthesize advertiseWording=_advertiseWording;
@property(nonatomic) unsigned int controlflag; // @synthesize controlflag=_controlflag;
@property(retain, nonatomic) WCCardUsedStoreInfo *oneShopInfo; // @synthesize oneShopInfo=_oneShopInfo;
@property(nonatomic) unsigned int blockMask; // @synthesize blockMask=_blockMask;
@property(retain, nonatomic) NSString *h5ShowUrl; // @synthesize h5ShowUrl=_h5ShowUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *sourceIconUrl; // @synthesize sourceIconUrl=_sourceIconUrl;
@property(retain, nonatomic) NSString *imageTextUrl; // @synthesize imageTextUrl=_imageTextUrl;
@property(nonatomic) unsigned int shopCount; // @synthesize shopCount=_shopCount;
@property(retain, nonatomic) NSArray *introduceFields; // @synthesize introduceFields=_introduceFields;
@property(retain, nonatomic) NSString *servicePhone; // @synthesize servicePhone=_servicePhone;
@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *middleIconUrl; // @synthesize middleIconUrl=_middleIconUrl;
@property(retain, nonatomic) NSString *primarySubTitle; // @synthesize primarySubTitle=_primarySubTitle;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *buttonWording; // @synthesize buttonWording=_buttonWording;
@property(retain, nonatomic) NSString *acceptWording; // @synthesize acceptWording=_acceptWording;
@property(retain, nonatomic) NSString *cardCategory; // @synthesize cardCategory=_cardCategory;
@property(retain, nonatomic) NSString *cardTypeName; // @synthesize cardTypeName=_cardTypeName;
@property(nonatomic) unsigned int cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (void)dealloc;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayResetPasswordInfo : NSObject
{
    NSString *m_cardBankName;
    NSString *m_cardBankType;
    NSString *m_cardType;
    NSString *m_cardTypeName;
    NSString *m_cardNumber;
    NSString *m_cardCVV2;
    NSString *m_cardValid;
    NSString *m_usrNameInfo;
    NSString *m_usrIDType;
    NSString *m_usrIDInfo;
    NSString *m_usrPhoneNumber;
    unsigned int m_cardBankTag;
    unsigned int m_flag;
    NSString *m_WCLanguage;
    NSString *m_firstName;
    NSString *m_lastName;
    NSString *m_country;
    NSString *m_city;
    NSString *m_area;
    NSString *m_address;
    NSString *m_phoneNumber_Overseas;
    NSString *m_zipCode;
    NSString *m_email;
    NSString *m_retKey;
    _Bool m_bSelectOldCardToResetPwd;
    _Bool m_bRetry;
}

@property(retain, nonatomic) NSString *m_zipCode; // @synthesize m_zipCode;
@property(retain, nonatomic) NSString *m_email; // @synthesize m_email;
@property(retain, nonatomic) NSString *m_phoneNumber_Overseas; // @synthesize m_phoneNumber_Overseas;
@property(retain, nonatomic) NSString *m_address; // @synthesize m_address;
@property(retain, nonatomic) NSString *m_area; // @synthesize m_area;
@property(retain, nonatomic) NSString *m_city; // @synthesize m_city;
@property(retain, nonatomic) NSString *m_country; // @synthesize m_country;
@property(retain, nonatomic) NSString *m_lastName; // @synthesize m_lastName;
@property(retain, nonatomic) NSString *m_firstName; // @synthesize m_firstName;
@property(retain, nonatomic) NSString *m_WCLanguage; // @synthesize m_WCLanguage;
@property(nonatomic) unsigned int m_cardBankTag; // @synthesize m_cardBankTag;
@property(nonatomic) unsigned int m_flag; // @synthesize m_flag;
@property(nonatomic) _Bool m_bRetry; // @synthesize m_bRetry;
@property(nonatomic) _Bool m_bSelectOldCardToResetPwd; // @synthesize m_bSelectOldCardToResetPwd;
@property(retain, nonatomic) NSString *m_retKey; // @synthesize m_retKey;
@property(retain, nonatomic) NSString *m_cardValid; // @synthesize m_cardValid;
@property(retain, nonatomic) NSString *m_cardCVV2; // @synthesize m_cardCVV2;
@property(retain, nonatomic) NSString *m_cardBankType; // @synthesize m_cardBankType;
@property(retain, nonatomic) NSString *m_usrIDType; // @synthesize m_usrIDType;
@property(retain, nonatomic) NSString *m_usrPhoneNumber; // @synthesize m_usrPhoneNumber;
@property(retain, nonatomic) NSString *m_usrNameInfo; // @synthesize m_usrNameInfo;
@property(retain, nonatomic) NSString *m_usrIDInfo; // @synthesize m_usrIDInfo;
@property(retain, nonatomic) NSString *m_cardNumber; // @synthesize m_cardNumber;
@property(retain, nonatomic) NSString *m_cardBankName; // @synthesize m_cardBankName;
@property(retain, nonatomic) NSString *m_cardType; // @synthesize m_cardType;
@property(retain, nonatomic) NSString *m_cardTypeName; // @synthesize m_cardTypeName;
- (void).cxx_destruct;
- (void)dealloc;

@end


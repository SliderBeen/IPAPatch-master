//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CContact, NSString;

@protocol IContactMgrExt

@optional
- (void)onFailedToGetContactsFromSvr;
- (void)OnChangeNotifyStatus:(NSString *)arg1 withStatus:(_Bool)arg2;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onRemoveContactFromAddressBook:(CContact *)arg1;
- (void)onDeleteContact:(CContact *)arg1;
- (void)onModifyCustomMenu:(CContact *)arg1;
- (void)onModifySelfContact:(CContact *)arg1;
- (void)onModifyContact:(CContact *)arg1;
- (void)onNewContact:(CContact *)arg1;
- (void)onModifyContactHeadImage:(NSString *)arg1;
@end


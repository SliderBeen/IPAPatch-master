//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "contactInfoDelegate-Protocol.h"

@class CContact, NSString;
@protocol SearchContactDataProviderDelegate;

@interface SearchContactDataProvider : NSObject <contactInfoDelegate>
{
    _Bool _isFromAddFriendScene;
    id <SearchContactDataProviderDelegate> _delegate;
    NSString *_keyword;
    CContact *_contact;
    NSString *_svrErrorMsg;
}

@property(retain, nonatomic) NSString *svrErrorMsg; // @synthesize svrErrorMsg=_svrErrorMsg;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) __weak id <SearchContactDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFromAddFriendScene; // @synthesize isFromAddFriendScene=_isFromAddFriendScene;
- (void).cxx_destruct;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)startCommonWebSearch;
- (void)showContactInfoView:(id)arg1 resultRow:(unsigned int)arg2;
- (_Bool)hasFoundContact;
- (void)handleDidCancelSearch;
- (void)handleSearchResultDataSelectWithIndexPath:(id)arg1;
- (id)makeSearchResultCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (double)heightForRowInSearchResultAtIndexPath:(id)arg1;
- (long long)numberOfRowInSearchResultSection:(long long)arg1;
- (long long)numberOfSectionInSearchResult;
- (void)makeNoUserTipsCell:(id)arg1;
- (double)getNoUserTipsCellHeight;
- (id)initWithFoundContact:(id)arg1 andSearchKeyword:(id)arg2 andSvrErrMsg:(id)arg3 andDelegate:(id)arg4;
- (id)initWithBSContent:(id)arg1 andFoundContact:(id)arg2 andSearchKeyword:(id)arg3 andLocation:(id)arg4 andDelegate:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


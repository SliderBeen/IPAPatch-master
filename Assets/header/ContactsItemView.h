//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class AttributeLabel, CContact, MMCPLabel, MMHeadImageView, MMWebImageView, NSString, SearchMatchTip, UIButton, UIImageView, UILabel;
@protocol ContactsItemViewDelegate;

@interface ContactsItemView : MMUIView
{
    MMCPLabel *m_nickNameLabel;
    UIButton *m_rightButton;
    UILabel *m_greyLabel;
    UILabel *m_userNameLabel;
    UILabel *m_addedLabel;
    MMHeadImageView *m_headImage;
    _Bool m_bShowHeadImage;
    UILabel *m_labelMemberCount;
    id m_data;
    id <ContactsItemViewDelegate> m_delegate;
    MMWebImageView *m_webHeadImageView;
    UIImageView *m_contactLogo;
    CContact *m_contact;
    _Bool m_bShowUserDescription;
    _Bool m_bUseDynamicSize;
    _Bool m_bShowSearchResult;
    SearchMatchTip *m_matchTip;
    AttributeLabel *m_descLabel;
    NSString *m_cpKeyForNickname;
    _Bool m_isNicknameUnsafe;
    _Bool m_bAccountDeleteTip;
    double m_CustomLabelDecreaseWidth;
}

@property(nonatomic) _Bool m_bAccountDeleteTip; // @synthesize m_bAccountDeleteTip;
@property(retain, nonatomic) AttributeLabel *m_descLabel; // @synthesize m_descLabel;
@property(retain, nonatomic) SearchMatchTip *m_matchTip; // @synthesize m_matchTip;
@property(nonatomic) _Bool m_bShowSearchResult; // @synthesize m_bShowSearchResult;
@property(nonatomic) _Bool m_bUseDynamicSize; // @synthesize m_bUseDynamicSize;
@property(nonatomic) double m_CustomLabelDecreaseWidth; // @synthesize m_CustomLabelDecreaseWidth;
@property(nonatomic) _Bool m_bShowUserDescription; // @synthesize m_bShowUserDescription;
@property(retain, nonatomic) MMWebImageView *m_webHeadImageView; // @synthesize m_webHeadImageView;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) id m_data; // @synthesize m_data;
@property(nonatomic) __weak id <ContactsItemViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMHeadImageView *m_headImage; // @synthesize m_headImage;
@property(retain, nonatomic) UILabel *m_userNameLabel; // @synthesize m_userNameLabel;
@property(retain, nonatomic) UILabel *m_nickNameLabel; // @synthesize m_nickNameLabel;
@property(nonatomic) _Bool m_bShowHeadImage; // @synthesize m_bShowHeadImage;
- (void).cxx_destruct;
- (void)updateCPState;
- (void)setUserNameLabelToFitWidth;
- (void)initDescLabel;
- (void)initUserNameLabel:(id)arg1;
- (void)initGreenRightButton:(id)arg1;
- (void)initGreyRightButton:(id)arg1;
- (void)onRightBtnAction;
- (void)initRightPlaceAddLabel;
- (void)initRightPlaceCenterAlignmentAddedLabelWithString:(id)arg1;
- (void)initRightPlaceAddedLabel;
- (void)initRightPlaceWaitingLabel;
- (void)initRightPlaceDeleteLabel;
- (void)initGrayLabel:(id)arg1 color:(id)arg2;
- (void)initAddedLabel:(id)arg1;
- (void)initNickNameLabel:(id)arg1;
- (struct CGRect)calNickNameFrame:(id)arg1;
- (void)updateBackgroundColor:(id)arg1;
- (void)updateView:(id)arg1;
- (void)updateMatchLabel;
- (void)updateUserNameLabel:(id)arg1;
- (void)updateNickNameLabel;
- (void)updateHeadImageForContact:(id)arg1;
- (void)initView:(id)arg1 showChatRoomName:(id)arg2;
- (void)showChatRoomCount:(id)arg1;
- (void)initView:(id)arg1;
- (void)initSessionStyleView:(id)arg1;
- (_Bool)isShowMobileName:(id)arg1 mobileName:(id)arg2;
- (void)initContactLogo:(id)arg1;
- (void)initHeadImageForContact:(id)arg1;
- (void)initHeadImage:(id)arg1;
- (void)initHeadImageUrl:(id)arg1 withAuthorizationCode:(id)arg2 update:(_Bool)arg3;
- (void)initHeadImage:(id)arg1 withUrl:(id)arg2;
- (void)layoutSubviews;
- (id)init;

@end


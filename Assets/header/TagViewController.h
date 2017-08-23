//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavTagEditViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FavTagEditView, FavTagHintView, FavTagTableView, MMTableView, NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface TagViewController : MMUIViewController <FavTagEditViewDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate>
{
    NSArray *m_currentTags;
    NSArray *m_recommendTags;
    NSString *m_recommendTagTitle;
    NSArray *m_allTags;
    NSString *m_allTagTitle;
    NSString *m_editPlaceholer;
    NSString *m_eduPlaceholder;
    _Bool m_bShowAllTags;
    _Bool m_bAddSepLine;
    UIView *m_tagMgrView;
    MMTableView *m_tableView;
    NSMutableArray *m_arrShowCells;
    FavTagEditView *m_tagEditView;
    FavTagTableView *m_tagTableView;
    FavTagHintView *m_tagHintView;
    UILabel *m_warnLabel;
    NSString *m_eduPlaceholer;
}

@property(retain, nonatomic) NSString *m_recommendTagTitle; // @synthesize m_recommendTagTitle;
@property(retain, nonatomic) NSString *m_allTagTitle; // @synthesize m_allTagTitle;
@property(retain, nonatomic) UIView *m_tagMgrView; // @synthesize m_tagMgrView;
@property(nonatomic) _Bool m_bShowAllTags; // @synthesize m_bShowAllTags;
@property(retain, nonatomic) NSArray *m_recommendTags; // @synthesize m_recommendTags;
@property(retain, nonatomic) NSArray *m_allTags; // @synthesize m_allTags;
@property(retain, nonatomic) NSArray *m_currentTags; // @synthesize m_currentTags;
@property(retain, nonatomic) NSString *m_eduPlaceholer; // @synthesize m_eduPlaceholer;
@property(retain, nonatomic) NSString *m_editPlaceholer; // @synthesize m_editPlaceholer;
- (void).cxx_destruct;
- (void)hideKeyboardOnScroll:(id)arg1;
- (void)cleanTextField:(id)arg1;
- (void)onTagUnHighLight:(id)arg1;
- (void)onTagHighLight:(id)arg1;
- (void)onDeleteButton:(id)arg1;
- (void)onAddButton:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldMoved:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)resignKeyBoard;
- (void)tapKeyBoardNextButton;
- (void)onEditDone;
- (void)OnCancel;
- (void)manageTags;
- (void)editCancel;
- (void)editDone:(id)arg1;
- (void)updateCurrentTags:(id)arg1;
- (void)updateAllTags:(id)arg1;
- (void)addViewToCell:(id)arg1 accessoryType:(long long)arg2;
- (void)initTagView;
- (void)initRightBtn;
- (void)initLeftBtn;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


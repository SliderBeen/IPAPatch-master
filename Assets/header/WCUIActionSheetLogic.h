//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCActionSheetDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCUIActionSheetLogic : MMObject <WCActionSheetDelegate>
{
    NSMutableDictionary *m_dicTarget;
    NSMutableDictionary *m_dicSel;
    NSMutableDictionary *m_dicHandler;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addBtnTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


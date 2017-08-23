//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "ForwardMessageLogicDelegate-Protocol.h"

@class ForwardMessageLogicController, NSData, NSMutableDictionary, NSString;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_WeAppMsg : WAWebViewPlugin_embedView <ForwardMessageLogicDelegate>
{
    struct CGPoint _ptOffset;
    _Bool _offsetChanged;
    _Bool _firstShare;
    id <IWAWebViewPluginDelegate> _resultDelegate;
    NSData *_thumbData;
    CDUnknownBlockType _onAppMessage;
    NSMutableDictionary *_customData;
    ForwardMessageLogicController *_forwardLogic;
    NSMutableDictionary *_scrollOffset;
}

@property(retain, nonatomic) NSMutableDictionary *scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) NSMutableDictionary *customData; // @synthesize customData=_customData;
@property(copy, nonatomic) CDUnknownBlockType onAppMessage; // @synthesize onAppMessage=_onAppMessage;
@property(nonatomic) _Bool firstShare; // @synthesize firstShare=_firstShare;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData=_thumbData;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void).cxx_destruct;
- (void)takeSnapShot;
- (void)restoreScrollOffsets:(id)arg1;
- (void)resetScrollOffsets:(id)arg1;
- (void)saveScrollOffsets:(id)arg1;
- (void)saveRestoreWebViewScroll:(_Bool)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageBackToApp:(id)arg1;
- (_Bool)shouldShowSendSuccessView:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)setCustomData:(id)arg1 buttonId:(unsigned int)arg2;
- (void)setButtonVisible:(_Bool)arg1 buttonId:(unsigned int)arg2;
- (_Bool)removeButton:(unsigned int)arg1;
- (void)onClick:(id)arg1;
- (void)triggerShareAppMessage:(id)arg1;
- (unsigned int)insertButton:(id)arg1 rect:(struct CGRect)arg2;
- (void)forwardToFriendWithInfo:(id)arg1;
- (void)onCustomWeAppMessage:(id)arg1;
- (void)getWeAppMessage:(unsigned long long)arg1 customData:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


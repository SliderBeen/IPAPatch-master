//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary;
@protocol GameSettingLogicControllerDelegate;

@interface GameSettingLogicController : MMObject <PBMessageObserverDelegate>
{
    id <GameSettingLogicControllerDelegate> _delegate;
    NSMutableDictionary *_dictSetting;
}

- (void).cxx_destruct;
- (void)handleSetGameBlockStateResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetGameBlockStateResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGameBlockStateResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)setGameBlockState:(id)arg1 onOrOff:(_Bool)arg2;
- (_Bool)getGameBlockState:(id)arg1;
- (_Bool)getSetting:(id)arg1 bit:(unsigned long long)arg2;
- (void)setSetting:(id)arg1 bit:(unsigned long long)arg2 value:(_Bool)arg3;
- (void)saveSettingDict;
- (void)loadSettingDict;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end


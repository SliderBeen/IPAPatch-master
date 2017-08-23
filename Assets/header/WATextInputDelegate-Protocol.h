//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol WATextInputInterface;

@protocol WATextInputDelegate <NSObject>
- (void)didHeightChange:(double)arg1 lineNum:(long long)arg2 input:(id <WATextInputInterface>)arg3;
- (void)didValueChange:(NSString *)arg1 pos:(long long)arg2 input:(id <WATextInputInterface>)arg3;
- (void)onCaretBreak;
- (_Bool)onReturn:(id <WATextInputInterface>)arg1;
- (void)onFocus:(id <WATextInputInterface>)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent;

@protocol WindowDelegate <NSObject>

@optional
- (void)touchesCancelled_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesMoved_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesBegan_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end


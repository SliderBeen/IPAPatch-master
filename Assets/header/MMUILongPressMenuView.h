//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUILongPressView.h"

@protocol LongPressMenuViewDelegate;

@interface MMUILongPressMenuView : MMUILongPressView
{
    id <LongPressMenuViewDelegate> menu_delegate;
}

@property(nonatomic) __weak id <LongPressMenuViewDelegate> menu_delegate; // @synthesize menu_delegate;
- (void).cxx_destruct;
- (void)copy:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)LongPressEvents;
- (id)initWithFrame:(struct CGRect)arg1;

@end


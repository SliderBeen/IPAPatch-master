//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString;

@interface WCPayGoldenStatusView : UIView
{
    MMUILabel *_statusView;
    NSString *_nsWording;
    NSString *_nsAppending;
}

- (void).cxx_destruct;
- (id)getText;
- (void)updateWithWord:(id)arg1 Append:(id)arg2 Font:(double)arg3;
- (void)updateColor:(id)arg1;
- (void)playAppending;
- (id)initWithFrame:(struct CGRect)arg1;

@end


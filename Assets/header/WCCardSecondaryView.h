//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@protocol WCCardDataSource, WCCardSecondaryViewDelegate;

@interface WCCardSecondaryView : MMUIView
{
    id <WCCardDataSource> _cardDataSource;
    id <WCCardSecondaryViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WCCardSecondaryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fieldClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCardDataSource:(id)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, NSString;
@protocol WCPayNoticeBannerDelegate;

@interface WCPayNoticeBanner : MMUIView
{
    id <WCPayNoticeBannerDelegate> _delegate;
    MMUILabel *_titleLabel;
    NSString *_title;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCPayNoticeBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTap:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 url:(id)arg3 readonly:(_Bool)arg4 oneline:(_Bool)arg5;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface ReaderStyleWrap : NSObject
{
    UIColor *m_color;
    UIFont *m_font;
    _Bool m_bUnderline;
    struct _NSRange m_range;
}

@property(nonatomic) struct _NSRange m_range; // @synthesize m_range;
@property(nonatomic) _Bool m_bUnderline; // @synthesize m_bUnderline;
@property(retain, nonatomic) UIFont *m_font; // @synthesize m_font;
@property(retain, nonatomic) UIColor *m_color; // @synthesize m_color;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;

@end


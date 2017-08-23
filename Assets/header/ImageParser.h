//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseParser.h"

@class NSString, UIFont;

@interface ImageParser : BaseParser
{
    UIFont *_font;
    NSString *_nsImgSrc;
}

+ (id)newInstance;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)getImageForText:(id)arg1;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)getImageStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)getImage;
- (void)setImageSrc:(id)arg1;

@end


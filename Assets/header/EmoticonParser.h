//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImageParser.h"

@interface EmoticonParser : ImageParser
{
    struct CGSize m_emptySpaceSize;
}

+ (id)newInstance;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)getImageForText:(id)arg1;
- (id)getImage;

@end


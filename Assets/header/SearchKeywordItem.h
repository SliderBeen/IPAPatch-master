//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SearchKeywordItem : NSObject
{
    NSString *_keyword;
    NSString *_regexword;
    _Bool _regextMode;
    _Bool _isEnglishWord;
    _Bool _regexMode;
}

@property(nonatomic) _Bool isEnglishWord; // @synthesize isEnglishWord=_isEnglishWord;
@property(nonatomic) _Bool regexMode; // @synthesize regexMode=_regexMode;
@property(retain, nonatomic) NSString *regexword; // @synthesize regexword=_regexword;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SearchTextItem : NSObject
{
    NSString *_searchText;
    NSMutableArray *_arrKeywordItem;
    _Bool _bSpaceSeperated;
}

@property(nonatomic) _Bool bSpaceSeperated; // @synthesize bSpaceSeperated=_bSpaceSeperated;
@property(retain, nonatomic) NSMutableArray *arrKeywordItem; // @synthesize arrKeywordItem=_arrKeywordItem;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (_Bool)isMultiKeyword;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BaseStyle : NSObject
{
    struct CGRect _frame;
    _Bool _bUserInteractionEnabled;
}

@property(nonatomic) _Bool bUserInteractionEnabled; // @synthesize bUserInteractionEnabled=_bUserInteractionEnabled;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end


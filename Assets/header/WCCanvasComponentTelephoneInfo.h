//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCCanvasComponentTelephoneInfo : NSObject
{
    NSArray *_phoneNumList;
    double _topLineSize;
    double _bottomLineSize;
}

@property(nonatomic) double bottomLineSize; // @synthesize bottomLineSize=_bottomLineSize;
@property(nonatomic) double topLineSize; // @synthesize topLineSize=_topLineSize;
@property(retain, nonatomic) NSArray *phoneNumList; // @synthesize phoneNumList=_phoneNumList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMEasterEggAnimation : NSObject
{
    int _animationType;
    int _viewCount;
    int _minViewSize;
    int _maxViewSize;
    NSString *_imageFilePath;
}

@property(nonatomic) int maxViewSize; // @synthesize maxViewSize=_maxViewSize;
@property(nonatomic) int minViewSize; // @synthesize minViewSize=_minViewSize;
@property(nonatomic) int viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) int animationType; // @synthesize animationType=_animationType;
@property(retain, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
- (void).cxx_destruct;

@end


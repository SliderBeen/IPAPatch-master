//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YYAsyncLayerDisplayTask : NSObject
{
    CDUnknownBlockType _willDisplay;
    CDUnknownBlockType _display;
    CDUnknownBlockType _displayContentsForLayer;
    CDUnknownBlockType _didDisplay;
}

@property(copy, nonatomic) CDUnknownBlockType didDisplay; // @synthesize didDisplay=_didDisplay;
@property(copy, nonatomic) CDUnknownBlockType displayContentsForLayer; // @synthesize displayContentsForLayer=_displayContentsForLayer;
@property(copy, nonatomic) CDUnknownBlockType display; // @synthesize display=_display;
@property(copy, nonatomic) CDUnknownBlockType willDisplay; // @synthesize willDisplay=_willDisplay;
- (void).cxx_destruct;

@end


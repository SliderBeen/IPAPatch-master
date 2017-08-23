//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WAFloatObject : NSObject
{
    NSString *_content;
    double _initOffset;
    UIColor *_color;
    double _speed;
    double _textWidth;
    struct CGPoint _position;
}

@property(nonatomic) double textWidth; // @synthesize textWidth=_textWidth;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double initOffset; // @synthesize initOffset=_initOffset;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)reset;
- (void)render:(double)arg1;
- (_Bool)update:(double)arg1;

@end

